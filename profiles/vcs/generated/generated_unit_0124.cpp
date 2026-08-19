#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0124[4071] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 32, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 38, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 58, 59, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    71, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 84, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 102,
    0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 117, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 167, 168, 0, 169, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0,
    179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0,
    0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206,
    0, 0, 207, 0, 208, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249,
    0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 257, 0, 0,
    0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 264, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0,
    268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 276, 0, 277,
    0, 278, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302,
    0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 307, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0,
    0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 319, 0, 0, 320, 0, 321, 322, 0, 0, 0, 323, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 337, 338, 0, 339, 0, 340,
    0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 343, 0, 344, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 357, 358, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0,
    0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 374, 0, 375,
    0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 381, 382, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 397, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0,
    0, 0, 432, 433, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 438, 0, 439, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0,
    455, 0, 456, 0, 0, 457, 0, 458, 0, 0, 459, 0, 460, 0, 0, 461, 0, 462, 0, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0,
    0, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 484,
    0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0,
    496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 503, 0, 0, 504, 0,
    505, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 514, 0, 515, 0, 0,
    516, 0, 517, 0, 0, 518, 0, 519, 0, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 527, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 533, 0, 0,
    0, 0, 534, 0, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 542, 0, 543,
    0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551,
    0, 0, 552, 0, 553, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0,
    0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0,
    0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0,
    0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581,
    0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591,
    0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0, 0, 595, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0,
    598, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608,
    0, 609, 0, 0, 0, 0, 610, 611, 612, 0, 613, 614, 615, 0, 616, 617, 618, 0, 619, 620, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0,
    0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629,
    0, 0, 630, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 635, 636, 0, 0, 0, 637, 0, 0, 0,
    638, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0,
    0, 646, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0,
    652, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0,
    657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0, 0, 664,
    0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 669, 670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 673, 0,
    674, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0,
    0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0,
    690, 0, 0, 691, 0, 0, 692, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 701,
    0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 711, 712, 713, 0,
    0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 717, 0, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 721,
    0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 730, 0, 731, 0, 732, 0, 733, 0, 0, 734, 0, 0, 0,
    0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 0, 741, 0, 742, 0, 0, 743, 0, 744,
    0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 752, 0, 753, 754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 763, 764, 765, 0, 766, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 771, 0,
    0, 0, 0, 772, 0, 0, 773,
};
void recomp_unit_0124_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,16,31,6 fprs=12,13,24,20 gpr_occ=3825 fpr_occ=628 gpr_total=5568 fpr_total=859
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_24 = ctx.fpr[24];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[16] = aot_gpr_16; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[24] = aot_fpr_24; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_24 = ctx.fpr[24]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089F4000u;
        entry_id = (entry_delta < 16284u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0124[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F4000;
    case 2u: goto L_089F4030;
    case 3u: goto L_089F4038;
    case 4u: goto L_089F4048;
    case 5u: goto L_089F404C;
    case 6u: goto L_089F4088;
    case 7u: goto L_089F4094;
    case 8u: goto L_089F40D8;
    case 9u: goto L_089F40E0;
    case 10u: goto L_089F40F0;
    case 11u: goto L_089F40F4;
    case 12u: goto L_089F4130;
    case 13u: goto L_089F413C;
    case 14u: goto L_089F4144;
    case 15u: goto L_089F4168;
    case 16u: goto L_089F41AC;
    case 17u: goto L_089F41D4;
    case 18u: goto L_089F41F0;
    case 19u: goto L_089F41FC;
    case 20u: goto L_089F4220;
    case 21u: goto L_089F4230;
    case 22u: goto L_089F423C;
    case 23u: goto L_089F4244;
    case 24u: goto L_089F424C;
    case 25u: goto L_089F4264;
    case 26u: goto L_089F4298;
    case 27u: goto L_089F42A8;
    case 28u: goto L_089F42B4;
    case 29u: goto L_089F42D8;
    case 30u: goto L_089F42E8;
    case 31u: goto L_089F42F0;
    case 32u: goto L_089F42F8;
    case 33u: goto L_089F4300;
    case 34u: goto L_089F4334;
    case 35u: goto L_089F4344;
    case 36u: goto L_089F435C;
    case 37u: goto L_089F4394;
    case 38u: goto L_089F43A0;
    case 39u: goto L_089F43A4;
    case 40u: goto L_089F43B0;
    case 41u: goto L_089F43C0;
    case 42u: goto L_089F43DC;
    case 43u: goto L_089F43E4;
    case 44u: goto L_089F43EC;
    case 45u: goto L_089F4428;
    case 46u: goto L_089F4444;
    case 47u: goto L_089F4470;
    case 48u: goto L_089F4488;
    case 49u: goto L_089F44B8;
    case 50u: goto L_089F4510;
    case 51u: goto L_089F4520;
    case 52u: goto L_089F4528;
    case 53u: goto L_089F4530;
    case 54u: goto L_089F4534;
    case 55u: goto L_089F453C;
    case 56u: goto L_089F4560;
    case 57u: goto L_089F4570;
    case 58u: goto L_089F4588;
    case 59u: goto L_089F458C;
    case 60u: goto L_089F4594;
    case 61u: goto L_089F45A0;
    case 62u: goto L_089F45B8;
    case 63u: goto L_089F45C4;
    case 64u: goto L_089F4600;
    case 65u: goto L_089F4610;
    case 66u: goto L_089F4620;
    case 67u: goto L_089F4638;
    case 68u: goto L_089F4640;
    case 69u: goto L_089F4658;
    case 70u: goto L_089F4674;
    case 71u: goto L_089F4680;
    case 72u: goto L_089F4688;
    case 73u: goto L_089F4690;
    case 74u: goto L_089F469C;
    case 75u: goto L_089F46A4;
    case 76u: goto L_089F46B4;
    case 77u: goto L_089F46D0;
    case 78u: goto L_089F46EC;
    case 79u: goto L_089F46F8;
    case 80u: goto L_089F4700;
    case 81u: goto L_089F4724;
    case 82u: goto L_089F4734;
    case 83u: goto L_089F473C;
    case 84u: goto L_089F4744;
    case 85u: goto L_089F4748;
    case 86u: goto L_089F475C;
    case 87u: goto L_089F47E8;
    case 88u: goto L_089F4804;
    case 89u: goto L_089F484C;
    case 90u: goto L_089F48B4;
    case 91u: goto L_089F48CC;
    case 92u: goto L_089F48D8;
    case 93u: goto L_089F4924;
    case 94u: goto L_089F4934;
    case 95u: goto L_089F4940;
    case 96u: goto L_089F4948;
    case 97u: goto L_089F4950;
    case 98u: goto L_089F4964;
    case 99u: goto L_089F49C0;
    case 100u: goto L_089F49D8;
    case 101u: goto L_089F49F0;
    case 102u: goto L_089F49FC;
    case 103u: goto L_089F4A0C;
    case 104u: goto L_089F4A14;
    case 105u: goto L_089F4A34;
    case 106u: goto L_089F4A3C;
    case 107u: goto L_089F4A64;
    case 108u: goto L_089F4A88;
    case 109u: goto L_089F4AAC;
    case 110u: goto L_089F4ADC;
    case 111u: goto L_089F4B04;
    case 112u: goto L_089F4B0C;
    case 113u: goto L_089F4B14;
    case 114u: goto L_089F4B2C;
    case 115u: goto L_089F4B38;
    case 116u: goto L_089F4B50;
    case 117u: goto L_089F4B54;
    case 118u: goto L_089F4B5C;
    case 119u: goto L_089F4B6C;
    case 120u: goto L_089F4B74;
    case 121u: goto L_089F4B88;
    case 122u: goto L_089F4BCC;
    case 123u: goto L_089F4BE8;
    case 124u: goto L_089F4C04;
    case 125u: goto L_089F4C2C;
    case 126u: goto L_089F4C6C;
    case 127u: goto L_089F4C98;
    case 128u: goto L_089F4CC8;
    case 129u: goto L_089F4D18;
    case 130u: goto L_089F4D4C;
    case 131u: goto L_089F4D60;
    case 132u: goto L_089F4D6C;
    case 133u: goto L_089F4D74;
    case 134u: goto L_089F4D88;
    case 135u: goto L_089F4DB4;
    case 136u: goto L_089F4DC0;
    case 137u: goto L_089F4DD0;
    case 138u: goto L_089F4DDC;
    case 139u: goto L_089F4DE8;
    case 140u: goto L_089F4DF0;
    case 141u: goto L_089F4DF8;
    case 142u: goto L_089F4E0C;
    case 143u: goto L_089F4E28;
    case 144u: goto L_089F4E34;
    case 145u: goto L_089F4E40;
    case 146u: goto L_089F4E48;
    case 147u: goto L_089F4E54;
    case 148u: goto L_089F4E64;
    case 149u: goto L_089F4E88;
    case 150u: goto L_089F4EC8;
    case 151u: goto L_089F4EF4;
    case 152u: goto L_089F4F04;
    case 153u: goto L_089F4F14;
    case 154u: goto L_089F4F20;
    case 155u: goto L_089F4F38;
    case 156u: goto L_089F4F40;
    case 157u: goto L_089F4F50;
    case 158u: goto L_089F4F5C;
    case 159u: goto L_089F4F64;
    case 160u: goto L_089F4F70;
    case 161u: goto L_089F4F9C;
    case 162u: goto L_089F4FA8;
    case 163u: goto L_089F4FB0;
    case 164u: goto L_089F4FC0;
    case 165u: goto L_089F4FC8;
    case 166u: goto L_089F4FDC;
    case 167u: goto L_089F4FE4;
    case 168u: goto L_089F4FE8;
    case 169u: goto L_089F4FF0;
    case 170u: goto L_089F5004;
    case 171u: goto L_089F503C;
    case 172u: goto L_089F5050;
    case 173u: goto L_089F5058;
    case 174u: goto L_089F5078;
    case 175u: goto L_089F5094;
    case 176u: goto L_089F50A0;
    case 177u: goto L_089F50E0;
    case 178u: goto L_089F50E8;
    case 179u: goto L_089F5100;
    case 180u: goto L_089F510C;
    case 181u: goto L_089F5114;
    case 182u: goto L_089F5138;
    case 183u: goto L_089F5140;
    case 184u: goto L_089F5170;
    case 185u: goto L_089F5178;
    case 186u: goto L_089F518C;
    case 187u: goto L_089F5194;
    case 188u: goto L_089F51CC;
    case 189u: goto L_089F51E8;
    case 190u: goto L_089F5230;
    case 191u: goto L_089F524C;
    case 192u: goto L_089F5280;
    case 193u: goto L_089F529C;
    case 194u: goto L_089F52D4;
    case 195u: goto L_089F52E0;
    case 196u: goto L_089F5304;
    case 197u: goto L_089F530C;
    case 198u: goto L_089F5314;
    case 199u: goto L_089F5360;
    case 200u: goto L_089F5394;
    case 201u: goto L_089F53A8;
    case 202u: goto L_089F53B4;
    case 203u: goto L_089F53C0;
    case 204u: goto L_089F53D4;
    case 205u: goto L_089F53E0;
    case 206u: goto L_089F53FC;
    case 207u: goto L_089F5408;
    case 208u: goto L_089F5410;
    case 209u: goto L_089F5414;
    case 210u: goto L_089F542C;
    case 211u: goto L_089F5450;
    case 212u: goto L_089F5458;
    case 213u: goto L_089F5460;
    case 214u: goto L_089F5480;
    case 215u: goto L_089F548C;
    case 216u: goto L_089F5494;
    case 217u: goto L_089F549C;
    case 218u: goto L_089F54A4;
    case 219u: goto L_089F54B0;
    case 220u: goto L_089F54BC;
    case 221u: goto L_089F54CC;
    case 222u: goto L_089F54E8;
    case 223u: goto L_089F552C;
    case 224u: goto L_089F5538;
    case 225u: goto L_089F5548;
    case 226u: goto L_089F5560;
    case 227u: goto L_089F5568;
    case 228u: goto L_089F5570;
    case 229u: goto L_089F557C;
    case 230u: goto L_089F55A8;
    case 231u: goto L_089F55B0;
    case 232u: goto L_089F55B4;
    case 233u: goto L_089F55BC;
    case 234u: goto L_089F55C4;
    case 235u: goto L_089F55CC;
    case 236u: goto L_089F55D4;
    case 237u: goto L_089F55DC;
    case 238u: goto L_089F55E4;
    case 239u: goto L_089F5608;
    case 240u: goto L_089F561C;
    case 241u: goto L_089F5624;
    case 242u: goto L_089F562C;
    case 243u: goto L_089F5634;
    case 244u: goto L_089F563C;
    case 245u: goto L_089F5648;
    case 246u: goto L_089F5654;
    case 247u: goto L_089F565C;
    case 248u: goto L_089F5664;
    case 249u: goto L_089F567C;
    case 250u: goto L_089F568C;
    case 251u: goto L_089F56A4;
    case 252u: goto L_089F56B4;
    case 253u: goto L_089F571C;
    case 254u: goto L_089F573C;
    case 255u: goto L_089F5750;
    case 256u: goto L_089F5770;
    case 257u: goto L_089F5774;
    case 258u: goto L_089F5784;
    case 259u: goto L_089F5790;
    case 260u: goto L_089F5798;
    case 261u: goto L_089F57AC;
    case 262u: goto L_089F57B8;
    case 263u: goto L_089F57C4;
    case 264u: goto L_089F57CC;
    case 265u: goto L_089F57D0;
    case 266u: goto L_089F57E8;
    case 267u: goto L_089F57F8;
    case 268u: goto L_089F5800;
    case 269u: goto L_089F5808;
    case 270u: goto L_089F5810;
    case 271u: goto L_089F582C;
    case 272u: goto L_089F5834;
    case 273u: goto L_089F583C;
    case 274u: goto L_089F5868;
    case 275u: goto L_089F5870;
    case 276u: goto L_089F5874;
    case 277u: goto L_089F587C;
    case 278u: goto L_089F5884;
    case 279u: goto L_089F5888;
    case 280u: goto L_089F5890;
    case 281u: goto L_089F5898;
    case 282u: goto L_089F58BC;
    case 283u: goto L_089F58C4;
    case 284u: goto L_089F58F0;
    case 285u: goto L_089F5904;
    case 286u: goto L_089F590C;
    case 287u: goto L_089F5914;
    case 288u: goto L_089F591C;
    case 289u: goto L_089F5924;
    case 290u: goto L_089F5928;
    case 291u: goto L_089F5964;
    case 292u: goto L_089F596C;
    case 293u: goto L_089F5990;
    case 294u: goto L_089F59CC;
    case 295u: goto L_089F59D0;
    case 296u: goto L_089F59EC;
    case 297u: goto L_089F5A34;
    case 298u: goto L_089F5A48;
    case 299u: goto L_089F5A50;
    case 300u: goto L_089F5A5C;
    case 301u: goto L_089F5A74;
    case 302u: goto L_089F5A7C;
    case 303u: goto L_089F5A84;
    case 304u: goto L_089F5A90;
    case 305u: goto L_089F5A9C;
    case 306u: goto L_089F5AA4;
    case 307u: goto L_089F5AA8;
    case 308u: goto L_089F5AB8;
    case 309u: goto L_089F5AC0;
    case 310u: goto L_089F5AD4;
    case 311u: goto L_089F5ADC;
    case 312u: goto L_089F5AE4;
    case 313u: goto L_089F5AF0;
    case 314u: goto L_089F5B04;
    case 315u: goto L_089F5B0C;
    case 316u: goto L_089F5B24;
    case 317u: goto L_089F5B2C;
    case 318u: goto L_089F5B34;
    case 319u: goto L_089F5B40;
    case 320u: goto L_089F5B4C;
    case 321u: goto L_089F5B54;
    case 322u: goto L_089F5B58;
    case 323u: goto L_089F5B68;
    case 324u: goto L_089F5B70;
    case 325u: goto L_089F5B98;
    case 326u: goto L_089F5BA0;
    case 327u: goto L_089F5BB4;
    case 328u: goto L_089F5BD4;
    case 329u: goto L_089F5BFC;
    case 330u: goto L_089F5C04;
    case 331u: goto L_089F5C18;
    case 332u: goto L_089F5C38;
    case 333u: goto L_089F5C44;
    case 334u: goto L_089F5C4C;
    case 335u: goto L_089F5C58;
    case 336u: goto L_089F5C60;
    case 337u: goto L_089F5C68;
    case 338u: goto L_089F5C6C;
    case 339u: goto L_089F5C74;
    case 340u: goto L_089F5C7C;
    case 341u: goto L_089F5C98;
    case 342u: goto L_089F5CA8;
    case 343u: goto L_089F5CAC;
    case 344u: goto L_089F5CB4;
    case 345u: goto L_089F5CC0;
    case 346u: goto L_089F5CCC;
    case 347u: goto L_089F5CD4;
    case 348u: goto L_089F5CE4;
    case 349u: goto L_089F5CF0;
    case 350u: goto L_089F5D0C;
    case 351u: goto L_089F5D58;
    case 352u: goto L_089F5D68;
    case 353u: goto L_089F5D78;
    case 354u: goto L_089F5DA4;
    case 355u: goto L_089F5DC4;
    case 356u: goto L_089F5DE0;
    case 357u: goto L_089F5DE8;
    case 358u: goto L_089F5DEC;
    case 359u: goto L_089F5E00;
    case 360u: goto L_089F5E14;
    case 361u: goto L_089F5E34;
    case 362u: goto L_089F5E3C;
    case 363u: goto L_089F5E68;
    case 364u: goto L_089F5E74;
    case 365u: goto L_089F5E84;
    case 366u: goto L_089F5E90;
    case 367u: goto L_089F5EC0;
    case 368u: goto L_089F5EC8;
    case 369u: goto L_089F5ED4;
    case 370u: goto L_089F5EE4;
    case 371u: goto L_089F5F2C;
    case 372u: goto L_089F5F60;
    case 373u: goto L_089F5F6C;
    case 374u: goto L_089F5F74;
    case 375u: goto L_089F5F7C;
    case 376u: goto L_089F5F9C;
    case 377u: goto L_089F5FA4;
    case 378u: goto L_089F5FC4;
    case 379u: goto L_089F5FCC;
    case 380u: goto L_089F5FD4;
    case 381u: goto L_089F5FDC;
    case 382u: goto L_089F5FE0;
    case 383u: goto L_089F6008;
    case 384u: goto L_089F6044;
    case 385u: goto L_089F6054;
    case 386u: goto L_089F6064;
    case 387u: goto L_089F6090;
    case 388u: goto L_089F60B0;
    case 389u: goto L_089F60CC;
    case 390u: goto L_089F60D4;
    case 391u: goto L_089F60D8;
    case 392u: goto L_089F60EC;
    case 393u: goto L_089F6138;
    case 394u: goto L_089F613C;
    case 395u: goto L_089F6150;
    case 396u: goto L_089F6160;
    case 397u: goto L_089F618C;
    case 398u: goto L_089F6190;
    case 399u: goto L_089F61A0;
    case 400u: goto L_089F61C0;
    case 401u: goto L_089F61DC;
    case 402u: goto L_089F620C;
    case 403u: goto L_089F6248;
    case 404u: goto L_089F6264;
    case 405u: goto L_089F6270;
    case 406u: goto L_089F6290;
    case 407u: goto L_089F6298;
    case 408u: goto L_089F62C0;
    case 409u: goto L_089F62D0;
    case 410u: goto L_089F62FC;
    case 411u: goto L_089F6318;
    case 412u: goto L_089F6324;
    case 413u: goto L_089F633C;
    case 414u: goto L_089F6344;
    case 415u: goto L_089F634C;
    case 416u: goto L_089F6354;
    case 417u: goto L_089F635C;
    case 418u: goto L_089F6364;
    case 419u: goto L_089F6380;
    case 420u: goto L_089F6390;
    case 421u: goto L_089F63B4;
    case 422u: goto L_089F63C0;
    case 423u: goto L_089F63CC;
    case 424u: goto L_089F63D8;
    case 425u: goto L_089F63E8;
    case 426u: goto L_089F63FC;
    case 427u: goto L_089F6444;
    case 428u: goto L_089F6454;
    case 429u: goto L_089F6460;
    case 430u: goto L_089F646C;
    case 431u: goto L_089F6478;
    case 432u: goto L_089F6488;
    case 433u: goto L_089F648C;
    case 434u: goto L_089F6494;
    case 435u: goto L_089F649C;
    case 436u: goto L_089F64B0;
    case 437u: goto L_089F64C4;
    case 438u: goto L_089F64CC;
    case 439u: goto L_089F64D4;
    case 440u: goto L_089F64D8;
    case 441u: goto L_089F64FC;
    case 442u: goto L_089F6520;
    case 443u: goto L_089F652C;
    case 444u: goto L_089F6538;
    case 445u: goto L_089F6544;
    case 446u: goto L_089F6554;
    case 447u: goto L_089F656C;
    case 448u: goto L_089F65B0;
    case 449u: goto L_089F65B8;
    case 450u: goto L_089F65C4;
    case 451u: goto L_089F65D4;
    case 452u: goto L_089F65E4;
    case 453u: goto L_089F65F0;
    case 454u: goto L_089F65F8;
    case 455u: goto L_089F6600;
    case 456u: goto L_089F6608;
    case 457u: goto L_089F6614;
    case 458u: goto L_089F661C;
    case 459u: goto L_089F6628;
    case 460u: goto L_089F6630;
    case 461u: goto L_089F663C;
    case 462u: goto L_089F6644;
    case 463u: goto L_089F6650;
    case 464u: goto L_089F6658;
    case 465u: goto L_089F6664;
    case 466u: goto L_089F666C;
    case 467u: goto L_089F6678;
    case 468u: goto L_089F66A8;
    case 469u: goto L_089F66B0;
    case 470u: goto L_089F66B8;
    case 471u: goto L_089F66CC;
    case 472u: goto L_089F66D8;
    case 473u: goto L_089F66E8;
    case 474u: goto L_089F66F0;
    case 475u: goto L_089F670C;
    case 476u: goto L_089F6714;
    case 477u: goto L_089F6724;
    case 478u: goto L_089F672C;
    case 479u: goto L_089F6740;
    case 480u: goto L_089F6748;
    case 481u: goto L_089F6758;
    case 482u: goto L_089F6760;
    case 483u: goto L_089F6774;
    case 484u: goto L_089F677C;
    case 485u: goto L_089F678C;
    case 486u: goto L_089F679C;
    case 487u: goto L_089F67C0;
    case 488u: goto L_089F67C8;
    case 489u: goto L_089F67D4;
    case 490u: goto L_089F67DC;
    case 491u: goto L_089F67E4;
    case 492u: goto L_089F6818;
    case 493u: goto L_089F6850;
    case 494u: goto L_089F685C;
    case 495u: goto L_089F6868;
    case 496u: goto L_089F6880;
    case 497u: goto L_089F689C;
    case 498u: goto L_089F68AC;
    case 499u: goto L_089F68B4;
    case 500u: goto L_089F68BC;
    case 501u: goto L_089F68D8;
    case 502u: goto L_089F68E0;
    case 503u: goto L_089F68EC;
    case 504u: goto L_089F68F8;
    case 505u: goto L_089F6900;
    case 506u: goto L_089F6914;
    case 507u: goto L_089F691C;
    case 508u: goto L_089F6924;
    case 509u: goto L_089F6930;
    case 510u: goto L_089F6940;
    case 511u: goto L_089F6950;
    case 512u: goto L_089F695C;
    case 513u: goto L_089F6964;
    case 514u: goto L_089F696C;
    case 515u: goto L_089F6974;
    case 516u: goto L_089F6980;
    case 517u: goto L_089F6988;
    case 518u: goto L_089F6994;
    case 519u: goto L_089F699C;
    case 520u: goto L_089F69A8;
    case 521u: goto L_089F69B0;
    case 522u: goto L_089F69BC;
    case 523u: goto L_089F69C4;
    case 524u: goto L_089F69D0;
    case 525u: goto L_089F69D8;
    case 526u: goto L_089F69E0;
    case 527u: goto L_089F6A08;
    case 528u: goto L_089F6A1C;
    case 529u: goto L_089F6A24;
    case 530u: goto L_089F6A38;
    case 531u: goto L_089F6A58;
    case 532u: goto L_089F6A6C;
    case 533u: goto L_089F6A74;
    case 534u: goto L_089F6A88;
    case 535u: goto L_089F6A98;
    case 536u: goto L_089F6AA0;
    case 537u: goto L_089F6AA8;
    case 538u: goto L_089F6ABC;
    case 539u: goto L_089F6AC8;
    case 540u: goto L_089F6AD8;
    case 541u: goto L_089F6AE0;
    case 542u: goto L_089F6AF4;
    case 543u: goto L_089F6AFC;
    case 544u: goto L_089F6B0C;
    case 545u: goto L_089F6B14;
    case 546u: goto L_089F6B28;
    case 547u: goto L_089F6B30;
    case 548u: goto L_089F6B40;
    case 549u: goto L_089F6B50;
    case 550u: goto L_089F6B74;
    case 551u: goto L_089F6B7C;
    case 552u: goto L_089F6B88;
    case 553u: goto L_089F6B90;
    case 554u: goto L_089F6B98;
    case 555u: goto L_089F6BA0;
    case 556u: goto L_089F6BAC;
    case 557u: goto L_089F6BB4;
    case 558u: goto L_089F6BE4;
    case 559u: goto L_089F6C0C;
    case 560u: goto L_089F6C20;
    case 561u: goto L_089F6C34;
    case 562u: goto L_089F6C48;
    case 563u: goto L_089F6C5C;
    case 564u: goto L_089F6C70;
    case 565u: goto L_089F6C84;
    case 566u: goto L_089F6CC8;
    case 567u: goto L_089F6E28;
    case 568u: goto L_089F6E44;
    case 569u: goto L_089F6E50;
    case 570u: goto L_089F6E6C;
    case 571u: goto L_089F6E78;
    case 572u: goto L_089F6E94;
    case 573u: goto L_089F6EA0;
    case 574u: goto L_089F6EBC;
    case 575u: goto L_089F6EC8;
    case 576u: goto L_089F6EE4;
    case 577u: goto L_089F6EF0;
    case 578u: goto L_089F6F0C;
    case 579u: goto L_089F6F18;
    case 580u: goto L_089F6F70;
    case 581u: goto L_089F6F7C;
    case 582u: goto L_089F6F98;
    case 583u: goto L_089F7060;
    case 584u: goto L_089F7090;
    case 585u: goto L_089F70A4;
    case 586u: goto L_089F70C0;
    case 587u: goto L_089F70E0;
    case 588u: goto L_089F710C;
    case 589u: goto L_089F7154;
    case 590u: goto L_089F7170;
    case 591u: goto L_089F717C;
    case 592u: goto L_089F719C;
    case 593u: goto L_089F71AC;
    case 594u: goto L_089F71B4;
    case 595u: goto L_089F71C4;
    case 596u: goto L_089F71C8;
    case 597u: goto L_089F71F4;
    case 598u: goto L_089F7200;
    case 599u: goto L_089F7210;
    case 600u: goto L_089F721C;
    case 601u: goto L_089F7244;
    case 602u: goto L_089F724C;
    case 603u: goto L_089F7254;
    case 604u: goto L_089F725C;
    case 605u: goto L_089F7264;
    case 606u: goto L_089F726C;
    case 607u: goto L_089F7274;
    case 608u: goto L_089F727C;
    case 609u: goto L_089F7284;
    case 610u: goto L_089F7298;
    case 611u: goto L_089F729C;
    case 612u: goto L_089F72A0;
    case 613u: goto L_089F72A8;
    case 614u: goto L_089F72AC;
    case 615u: goto L_089F72B0;
    case 616u: goto L_089F72B8;
    case 617u: goto L_089F72BC;
    case 618u: goto L_089F72C0;
    case 619u: goto L_089F72C8;
    case 620u: goto L_089F72CC;
    case 621u: goto L_089F72F0;
    case 622u: goto L_089F730C;
    case 623u: goto L_089F7320;
    case 624u: goto L_089F732C;
    case 625u: goto L_089F7338;
    case 626u: goto L_089F7340;
    case 627u: goto L_089F7354;
    case 628u: goto L_089F736C;
    case 629u: goto L_089F737C;
    case 630u: goto L_089F7388;
    case 631u: goto L_089F739C;
    case 632u: goto L_089F73A4;
    case 633u: goto L_089F73C8;
    case 634u: goto L_089F73D4;
    case 635u: goto L_089F73DC;
    case 636u: goto L_089F73E0;
    case 637u: goto L_089F73F0;
    case 638u: goto L_089F7400;
    case 639u: goto L_089F741C;
    case 640u: goto L_089F7428;
    case 641u: goto L_089F7454;
    case 642u: goto L_089F7460;
    case 643u: goto L_089F746C;
    case 644u: goto L_089F749C;
    case 645u: goto L_089F74F0;
    case 646u: goto L_089F7504;
    case 647u: goto L_089F7518;
    case 648u: goto L_089F7524;
    case 649u: goto L_089F7540;
    case 650u: goto L_089F755C;
    case 651u: goto L_089F7574;
    case 652u: goto L_089F7580;
    case 653u: goto L_089F7588;
    case 654u: goto L_089F759C;
    case 655u: goto L_089F75BC;
    case 656u: goto L_089F75E4;
    case 657u: goto L_089F7600;
    case 658u: goto L_089F7620;
    case 659u: goto L_089F7630;
    case 660u: goto L_089F763C;
    case 661u: goto L_089F7644;
    case 662u: goto L_089F7658;
    case 663u: goto L_089F7664;
    case 664u: goto L_089F767C;
    case 665u: goto L_089F768C;
    case 666u: goto L_089F7694;
    case 667u: goto L_089F76B0;
    case 668u: goto L_089F76BC;
    case 669u: goto L_089F76C8;
    case 670u: goto L_089F76CC;
    case 671u: goto L_089F76DC;
    case 672u: goto L_089F76E4;
    case 673u: goto L_089F76F8;
    case 674u: goto L_089F7700;
    case 675u: goto L_089F7710;
    case 676u: goto L_089F7720;
    case 677u: goto L_089F7740;
    case 678u: goto L_089F7764;
    case 679u: goto L_089F7794;
    case 680u: goto L_089F77A8;
    case 681u: goto L_089F77B0;
    case 682u: goto L_089F77C0;
    case 683u: goto L_089F77D0;
    case 684u: goto L_089F77F4;
    case 685u: goto L_089F7814;
    case 686u: goto L_089F7838;
    case 687u: goto L_089F7840;
    case 688u: goto L_089F785C;
    case 689u: goto L_089F7864;
    case 690u: goto L_089F7880;
    case 691u: goto L_089F788C;
    case 692u: goto L_089F7898;
    case 693u: goto L_089F789C;
    case 694u: goto L_089F78AC;
    case 695u: goto L_089F78C4;
    case 696u: goto L_089F7918;
    case 697u: goto L_089F7930;
    case 698u: goto L_089F7948;
    case 699u: goto L_089F795C;
    case 700u: goto L_089F7964;
    case 701u: goto L_089F797C;
    case 702u: goto L_089F7994;
    case 703u: goto L_089F79CC;
    case 704u: goto L_089F79E8;
    case 705u: goto L_089F7A18;
    case 706u: goto L_089F7A30;
    case 707u: goto L_089F7A40;
    case 708u: goto L_089F7A4C;
    case 709u: goto L_089F7A5C;
    case 710u: goto L_089F7A68;
    case 711u: goto L_089F7A70;
    case 712u: goto L_089F7A74;
    case 713u: goto L_089F7A78;
    case 714u: goto L_089F7A8C;
    case 715u: goto L_089F7AA0;
    case 716u: goto L_089F7AA8;
    case 717u: goto L_089F7AB8;
    case 718u: goto L_089F7AC4;
    case 719u: goto L_089F7ACC;
    case 720u: goto L_089F7ADC;
    case 721u: goto L_089F7AFC;
    case 722u: goto L_089F7B14;
    case 723u: goto L_089F7B24;
    case 724u: goto L_089F7B40;
    case 725u: goto L_089F7B54;
    case 726u: goto L_089F7B5C;
    case 727u: goto L_089F7B98;
    case 728u: goto L_089F7BB4;
    case 729u: goto L_089F7BC0;
    case 730u: goto L_089F7BCC;
    case 731u: goto L_089F7BD4;
    case 732u: goto L_089F7BDC;
    case 733u: goto L_089F7BE4;
    case 734u: goto L_089F7BF0;
    case 735u: goto L_089F7C0C;
    case 736u: goto L_089F7C18;
    case 737u: goto L_089F7C28;
    case 738u: goto L_089F7C38;
    case 739u: goto L_089F7C4C;
    case 740u: goto L_089F7C54;
    case 741u: goto L_089F7C60;
    case 742u: goto L_089F7C68;
    case 743u: goto L_089F7C74;
    case 744u: goto L_089F7C7C;
    case 745u: goto L_089F7C94;
    case 746u: goto L_089F7CB0;
    case 747u: goto L_089F7CC0;
    case 748u: goto L_089F7CCC;
    case 749u: goto L_089F7D0C;
    case 750u: goto L_089F7D24;
    case 751u: goto L_089F7D30;
    case 752u: goto L_089F7D44;
    case 753u: goto L_089F7D4C;
    case 754u: goto L_089F7D50;
    case 755u: goto L_089F7D70;
    case 756u: goto L_089F7DA8;
    case 757u: goto L_089F7DB4;
    case 758u: goto L_089F7DC0;
    case 759u: goto L_089F7DD0;
    case 760u: goto L_089F7DD8;
    case 761u: goto L_089F7DE4;
    case 762u: goto L_089F7E0C;
    case 763u: goto L_089F7E28;
    case 764u: goto L_089F7E2C;
    case 765u: goto L_089F7E30;
    case 766u: goto L_089F7E38;
    case 767u: goto L_089F7E44;
    case 768u: goto L_089F7E64;
    case 769u: goto L_089F7F58;
    case 770u: goto L_089F7F6C;
    case 771u: goto L_089F7F78;
    case 772u: goto L_089F7F8C;
    case 773u: goto L_089F7F98;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_089F4000:
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F4038;
      }
      goto L_089F4030;
    }
L_089F4030:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089F404C;
      }
      goto L_089F4038;
    }
L_089F4038:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[14])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F404C;
      }
      goto L_089F4048;
    }
L_089F4048:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089F404C;
L_089F404C:
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<64u, 32u, 0u, 1u, 1u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F4094;
      }
      goto L_089F4088;
    }
L_089F4088:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_089F4094;
L_089F4094:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F40E0;
      }
      goto L_089F40D8;
    }
L_089F40D8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089F40F4;
      }
      goto L_089F40E0;
    }
L_089F40E0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[14])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F40F4;
      }
      goto L_089F40F0;
    }
L_089F40F0:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089F40F4;
L_089F40F4:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<64u, 32u, 0u, 1u, 1u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F413C;
      }
      goto L_089F4130;
    }
L_089F4130:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_089F413C;
L_089F413C:
    aot_gpr_31 = (0x089F4144u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4144u) goto L_089F4144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4144:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4168:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_24));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x089F41ACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F41ACu) goto L_089F41AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F41AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(708)));
    aot_gpr_6 = (16329u << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_gpr_6 | 4059u);
    aot_fpr_24 = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[7] = (aot_gpr_5 & 2u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F4298;
      }
      goto L_089F41D4;
    }
L_089F41D4:
    aot_gpr_4 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(768)));
    aot_gpr_31 = (0x089F41F0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F41F0u) goto L_089F41F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F41F0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089F41FCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F41FCu) goto L_089F41FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F41FC:
    ctx.gpr[19] = (ctx.gpr[19] << 6u);
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_24)) && aot_fpr_12 == aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089F423C;
      }
      goto L_089F4220;
    }
L_089F4220:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_24)) && aot_fpr_13 == aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F423C;
      }
      goto L_089F4230;
    }
L_089F4230:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F424C;
      }
      goto L_089F423C;
    }
L_089F423C:
    aot_gpr_31 = (0x089F4244u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4244u) goto L_089F4244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4244:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_089F424C;
L_089F424C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2256)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089F4264u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4264u) goto L_089F4264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4264:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_089F4298;
L_089F4298:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(768)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F42A8u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F42A8u) goto L_089F42A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F42A8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F42B4u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F42B4u) goto L_089F42B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F42B4:
    ctx.gpr[18] = (ctx.gpr[18] << 6u);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_24)) && aot_fpr_12 == aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089F42E8;
      }
      goto L_089F42D8;
    }
L_089F42D8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_24)) && aot_fpr_13 == aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F42F8;
      }
      goto L_089F42E8;
    }
L_089F42E8:
    aot_gpr_31 = (0x089F42F0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F42F0u) goto L_089F42F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F42F0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089F42F8;
      }
      goto L_089F42F8;
    }
L_089F42F8:
    aot_gpr_31 = (0x089F4300u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4300u) goto L_089F4300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4300:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_24 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[0];
    aot_gpr_31 = (0x089F4334u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4334u) goto L_089F4334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4334:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_24;
    aot_gpr_31 = (0x089F4344u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4344u) goto L_089F4344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4344:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_089F435C;
    }
    goto L_089F435C;
L_089F435C:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (2234u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(7200));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F4394u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 586u, 0x089F3790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4394u) goto L_089F4394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4394:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F43A4;
      }
      goto L_089F43A0;
    }
L_089F43A0:
    ctx.gpr[17] = (0u | 0u);
    goto L_089F43A4;
L_089F43A4:
    aot_gpr_5 = (0u | 2u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_089F43EC;
    }
    goto L_089F43B0;
L_089F43B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_089F43EC;
    }
    goto L_089F43C0;
L_089F43C0:
    aot_gpr_6 = (2234u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F43DCu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(7248));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 586u, 0x089F3790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F43DCu) goto L_089F43DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F43DC:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
        goto L_089F43EC;
    }
    goto L_089F43E4;
L_089F43E4:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_089F43EC;
L_089F43EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(708)));
    aot_gpr_5 = (17204u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9848));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_6 = (0u | 0u);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[22];
    aot_gpr_31 = (0x089F4428u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4428u) goto L_089F4428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4428:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9872));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[22];
    aot_gpr_31 = (0x089F4444u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4444u) goto L_089F4444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4444:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 32u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(464), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F4488;
      }
      goto L_089F4470;
    }
L_089F4470:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(704)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F4488u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 657u, 0x089F3EDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4488u) goto L_089F4488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4488:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_24 = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F44B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_24));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_24 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_24)) && aot_fpr_12 == aot_fpr_24)) ? 0x00800000u : 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089F4528;
      }
      goto L_089F4510;
    }
L_089F4510:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_24)) && aot_fpr_13 == aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F4528;
      }
      goto L_089F4520;
    }
L_089F4520:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = aot_fpr_20 - aot_fpr_24;
      if (branch_taken) {
          goto L_089F4534;
      }
      goto L_089F4528;
    }
L_089F4528:
    aot_gpr_31 = (0x089F4530u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4530u) goto L_089F4530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4530:
    aot_fpr_20 = aot_fpr_20 - ctx.fpr[0];
    goto L_089F4534;
L_089F4534:
    aot_gpr_31 = (0x089F453Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F453Cu) goto L_089F453C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F453C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089F458C;
      }
      goto L_089F4560;
    }
L_089F4560:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x089F4570u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089F484C;
L_089F4570:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_31 = (0x089F4588u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4588u) goto L_089F4588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4588:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089F458C;
L_089F458C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F46A4;
      }
      goto L_089F4594;
    }
L_089F4594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089F45A0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F45A0u) goto L_089F45A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F45A0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(764)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (0x089F45B8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F45B8u) goto L_089F45B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F45B8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F45C4u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F45C4u) goto L_089F45C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F45C4:
    aot_gpr_4 = (ctx.gpr[18] << 6u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F4600u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 615u, 0x089F39ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4600u) goto L_089F4600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4600:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4658;
      }
      goto L_089F4610;
    }
L_089F4610:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F4640;
      }
      goto L_089F4620;
    }
L_089F4620:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
        goto L_089F4638;
    }
    goto L_089F4638;
L_089F4638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4658;
      }
      goto L_089F4640;
    }
L_089F4640:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_24 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
        goto L_089F4658;
    }
    goto L_089F4658;
L_089F4658:
    aot_gpr_6 = (2234u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F4674u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(7248));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 586u, 0x089F3790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4674u) goto L_089F4674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4674:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F4688;
      }
      goto L_089F4680;
    }
L_089F4680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F469C;
      }
      goto L_089F4688;
    }
L_089F4688:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F469C;
      }
      goto L_089F4690;
    }
L_089F4690:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    goto L_089F469C;
L_089F469C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F46EC;
      }
      goto L_089F46A4;
    }
L_089F46A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F46EC;
      }
      goto L_089F46B4;
    }
L_089F46B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F46EC;
      }
      goto L_089F46D0;
    }
L_089F46D0:
    aot_gpr_6 = (2234u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F46ECu);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(7248));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 586u, 0x089F3790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F46ECu) goto L_089F46EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F46EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x089F46F8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F46F8u) goto L_089F46F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F46F8:
    aot_gpr_31 = (0x089F4700u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4700u) goto L_089F4700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4700:
    aot_gpr_4 = (0u | 128u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_24)) && aot_fpr_12 == aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089F473C;
      }
      goto L_089F4724;
    }
L_089F4724:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_24)) && aot_fpr_13 == aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F473C;
      }
      goto L_089F4734;
    }
L_089F4734:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
      if (branch_taken) {
          goto L_089F4748;
      }
      goto L_089F473C;
    }
L_089F473C:
    aot_gpr_31 = (0x089F4744u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4744u) goto L_089F4744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4744:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089F4748;
L_089F4748:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2256)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_31 = (0x089F475Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F475Cu) goto L_089F475C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F475C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_24));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(704)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[22];
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F47E8u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F47E8u) goto L_089F47E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F47E8:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9872));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[22];
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F4804u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4804u) goto L_089F4804;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4804:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 | 128u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (aot_gpr_5 | 8192u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(464), aot_gpr_5);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_24 = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F484C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9836)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9832)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_24), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    { const std::uint32_t aot_run_words[6]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words); }
    aot_gpr_31 = (0x089F48B4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F48B4u) goto L_089F48B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F48B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(764)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F48CCu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F48CCu) goto L_089F48CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F48CC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F48D8u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F48D8u) goto L_089F48D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F48D8:
    aot_gpr_4 = (49225u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.gpr[18] = (ctx.gpr[18] << 6u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_24 = std::bit_cast<float>(0u);
    aot_gpr_4 = (17204u << 16u);
    ctx.gpr[19] = (2234u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_24)) && aot_fpr_12 == aot_fpr_24)) ? 0x00800000u : 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9848));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9872));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(7272));
      if (branch_taken) {
          goto L_089F4940;
      }
      goto L_089F4924;
    }
L_089F4924:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_24)) && aot_fpr_13 == aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F4940;
      }
      goto L_089F4934;
    }
L_089F4934:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F4950;
      }
      goto L_089F4940;
    }
L_089F4940:
    aot_gpr_31 = (0x089F4948u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4948u) goto L_089F4948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4948:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_089F4950;
L_089F4950:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2256)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_31 = (0x089F4964u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4964u) goto L_089F4964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4964:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 5u>();
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 23u>();
    ctx.execute_vfpu_vec3_ct<0u, 64u, 32u, 1u, 2u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(aot_fpr_24), std::bit_cast<std::uint32_t>(aot_fpr_24), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(aot_fpr_24), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(aot_fpr_24), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(aot_fpr_24), std::bit_cast<std::uint32_t>(aot_fpr_24)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[0];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9808)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_31 = (0x089F49C0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F49C0u) goto L_089F49C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F49C0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[30];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9804)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[14];
    aot_gpr_31 = (0x089F49D8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F49D8u) goto L_089F49D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F49D8:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(20));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x089F49F0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 586u, 0x089F3790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F49F0u) goto L_089F49F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F49F0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089F4A0C;
      }
      goto L_089F49FC;
    }
L_089F49FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    goto L_089F4A0C;
L_089F4A0C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089F4C04;
      }
      goto L_089F4A14;
    }
L_089F4A14:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (2234u << 16u);
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(28));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(7296));
      if (branch_taken) {
          goto L_089F4B0C;
      }
      goto L_089F4A34;
    }
L_089F4A34:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_6 = (16457u << 16u);
      if (branch_taken) {
          goto L_089F4B0C;
      }
      goto L_089F4A3C;
    }
L_089F4A3C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9828)));
    aot_gpr_6 = (aot_gpr_6 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_12 / ctx.fpr[28];
    aot_fpr_13 = ctx.fpr[22] / aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_089F4A64;
    }
    goto L_089F4A64;
L_089F4A64:
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[28];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = ctx.fpr[22] / aot_fpr_12;
    aot_fpr_13 = ctx.fpr[26] - aot_fpr_13;
    { const float fs = ctx.fpr[14]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_089F4A88;
    }
    goto L_089F4A88;
L_089F4A88:
    ctx.fpr[14] = ctx.fpr[26] - aot_fpr_12;
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9824)));
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_31 = (0x089F4AACu);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 586u, 0x089F3790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4AACu) goto L_089F4AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4AAC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9788)));
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
        goto L_089F4ADC;
    }
    goto L_089F4ADC;
L_089F4ADC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9820)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[14]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = ctx.fpr[15] + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_089F4B04;
    }
    goto L_089F4B04;
L_089F4B04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_089F4B54;
      }
      goto L_089F4B0C;
    }
L_089F4B0C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F4B38;
      }
      goto L_089F4B14;
    }
L_089F4B14:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
    aot_gpr_31 = (0x089F4B2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 586u, 0x089F3790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4B2Cu) goto L_089F4B2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4B2C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F4B54;
      }
      goto L_089F4B38;
    }
L_089F4B38:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_24));
    aot_gpr_31 = (0x089F4B50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0123_entry, 123u, 586u, 0x089F3790u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4B50u) goto L_089F4B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4B50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_089F4B54;
L_089F4B54:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089F4B6C;
      }
      goto L_089F4B5C;
    }
L_089F4B5C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_5);
    goto L_089F4B6C;
L_089F4B6C:
    aot_gpr_31 = (0x089F4B74u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4B74u) goto L_089F4B74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4B74:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(756)));
    aot_gpr_31 = (0x089F4B88u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4B88u) goto L_089F4B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4B88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[2] << 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[30];
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F4BCCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4BCCu) goto L_089F4BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4BCC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[30];
    aot_gpr_31 = (0x089F4BE8u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4BE8u) goto L_089F4BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4BE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (aot_gpr_5 | 8192u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    goto L_089F4C04;
L_089F4C04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(716)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x089F4C2Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4C2Cu) goto L_089F4C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4C2C:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[28];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9860));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 2u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = aot_fpr_12 / ctx.fpr[28];
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[30];
    aot_gpr_31 = (0x089F4C6Cu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4C6Cu) goto L_089F4C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4C6C:
    aot_gpr_4 = (16329u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_gpr_4 | 4059u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[30];
    aot_gpr_31 = (0x089F4C98u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4C98u) goto L_089F4C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4C98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (aot_gpr_5 | 8192u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(464), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(724)));
    aot_gpr_6 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_31 = (0x089F4CC8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4CC8u) goto L_089F4CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), aot_gpr_4);
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_24 = std::bit_cast<float>(aot_run_words[2]);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4D18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (16640u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_089F4D4C;
L_089F4D4C:
    aot_gpr_4 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4D74;
      }
      goto L_089F4D60;
    }
L_089F4D60:
    aot_gpr_5 = (0u | 3000u);
    aot_gpr_31 = (0x089F4D6Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 205u, 0x08AB8F3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4D6Cu) goto L_089F4D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4D6C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3000));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    goto L_089F4D74;
L_089F4D74:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F4D4C;
      }
      goto L_089F4D88;
    }
L_089F4D88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6872), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(6876), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6880), ctx.gpr[18]);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(6884), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6888)));
      if (branch_taken) {
          goto L_089F4DC0;
      }
      goto L_089F4DB4;
    }
L_089F4DB4:
    aot_gpr_4 = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_gpr_4);
      if (branch_taken) {
          goto L_089F4DD0;
      }
      goto L_089F4DC0;
    }
L_089F4DC0:
    aot_gpr_4 = (0u | 8u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), aot_gpr_4);
    goto L_089F4DD0;
L_089F4DD0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F4DDCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4DDCu) goto L_089F4DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4DDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6888)));
        goto L_089F4DF8;
    }
    goto L_089F4DE8;
L_089F4DE8:
    aot_gpr_31 = (0x089F4DF0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4DF0u) goto L_089F4DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4DF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6888)));
    goto L_089F4DF8;
L_089F4DF8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (0u | 6u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(776)));
    aot_gpr_31 = (0x089F4E0Cu);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4E0Cu) goto L_089F4E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4E0C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F4E64;
      }
      goto L_089F4E28;
    }
L_089F4E28:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6888)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4E64;
      }
      goto L_089F4E34;
    }
L_089F4E34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
        goto L_089F4E54;
    }
    goto L_089F4E40;
L_089F4E40:
    aot_gpr_31 = (0x089F4E48u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4E48u) goto L_089F4E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4E48:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6888)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_089F4E54;
L_089F4E54:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089F4E64u);
    ctx.gpr[7] = (0u | 161u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4E64u) goto L_089F4E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4E64:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6888), 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4E88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (50298u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089F4EC8u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4EC8u) goto L_089F4EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4EC8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F4F04;
      }
      goto L_089F4EF4;
    }
L_089F4EF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (32u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_089F4F04;
L_089F4F04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 19u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_089F4F20;
      }
      goto L_089F4F14;
    }
L_089F4F14:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F4F20u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4F20u) goto L_089F4F20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4F20:
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
L_089F4F38:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4F40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4F64;
      }
      goto L_089F4F50;
    }
L_089F4F50:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F4F64;
      }
      goto L_089F4F5C;
    }
L_089F4F5C:
    aot_gpr_31 = (0x089F4F64u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F4F64u) goto L_089F4F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4F64:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F4F70:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(6876), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6880), 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(6884), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6888), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089F5050;
      }
      goto L_089F4F9C;
    }
L_089F4F9C:
    aot_gpr_6 = (ctx.gpr[7] << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    goto L_089F4FA8;
L_089F4FA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_089F4FC0;
      }
      goto L_089F4FB0;
    }
L_089F4FB0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
        goto L_089F4FC8;
    }
    goto L_089F4FC0;
L_089F4FC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089F4FE8;
      }
      goto L_089F4FC8;
    }
L_089F4FC8:
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 & 128u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_089F4FE4;
    }
    goto L_089F4FDC;
L_089F4FDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089F4FE8;
      }
      goto L_089F4FE4;
    }
L_089F4FE4:
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    goto L_089F4FE8;
L_089F4FE8:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F503C;
      }
      goto L_089F4FF0;
    }
L_089F4FF0:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[10] = (aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089F503C;
      }
      goto L_089F5004;
    }
L_089F5004:
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] << 6u);
    ctx.gpr[10] = (aot_gpr_4 + ctx.gpr[10]);
    aot_mem.aot_direct_store32(ctx.gpr[10] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(16));
    ctx.gpr[11] = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] << 6u);
    ctx.gpr[11] = (aot_gpr_4 + ctx.gpr[11]);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(60), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_089F503C;
L_089F503C:
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089F4FA8;
      }
      goto L_089F5050;
    }
L_089F5050:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5058:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (17008u << 16u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089F510C;
      }
      goto L_089F5078;
    }
L_089F5078:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (2246u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(23472));
    goto L_089F5094;
L_089F5094:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F50E8;
      }
      goto L_089F50A0;
    }
L_089F50A0:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[16] - aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[17])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F50E8;
      }
      goto L_089F50E0;
    }
L_089F50E0:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (ctx.gpr[8] | 0u);
    goto L_089F50E8;
L_089F50E8:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089F5094;
      }
      goto L_089F5100;
    }
L_089F5100:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[16]), std::bit_cast<std::uint32_t>(ctx.fpr[15]), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    goto L_089F510C;
L_089F510C:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5114:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    aot_gpr_5 = (17096u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089F5194;
      }
      goto L_089F5138;
    }
L_089F5138:
    aot_gpr_6 = (ctx.gpr[7] << 6u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    goto L_089F5140;
L_089F5140:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = ctx.fpr[16] - aot_fpr_12;
    ctx.fpr[15] = ctx.fpr[15] - aot_fpr_13;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[14] < ctx.fpr[17])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F5178;
      }
      goto L_089F5170;
    }
L_089F5170:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_089F5178;
L_089F5178:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089F5140;
      }
      goto L_089F518C;
    }
L_089F518C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_089F5194;
L_089F5194:
    aot_gpr_6 = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[8] << 6u);
    ctx.gpr[11] = (aot_gpr_4 + ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[11] + static_cast<std::uint32_t>(64), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_gpr_6 << 6u);
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    aot_gpr_6 = (ctx.gpr[11] + static_cast<std::uint32_t>(16));
    goto L_089F51CC;
L_089F51CC:
    ctx.gpr[11] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F51CC;
      }
      goto L_089F51E8;
    }
L_089F51E8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[8] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] << 6u);
    ctx.gpr[8] = (aot_gpr_4 + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    goto L_089F5230;
L_089F5230:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F5230;
      }
      goto L_089F524C;
    }
L_089F524C:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (aot_gpr_6 | 0u);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_089F5280;
L_089F5280:
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F5280;
      }
      goto L_089F529C;
    }
L_089F529C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(44), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F52D4:
    aot_gpr_5 = (aot_gpr_5 << 6u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
      if (branch_taken) {
          goto L_089F5304;
      }
      goto L_089F52E0;
    }
L_089F52E0:
    { const std::uint32_t aot_run_words[6]{aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), aot_gpr_5);
      if (branch_taken) {
          goto L_089F530C;
      }
      goto L_089F5304;
    }
L_089F5304:
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(64), aot_gpr_5);
    goto L_089F530C;
L_089F530C:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5314:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(aot_fpr_24), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_31 = (0x089F5360u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5360u) goto L_089F5360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5360:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(6876)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_5);
      if (branch_taken) {
          goto L_089F548C;
      }
      goto L_089F5394;
    }
L_089F5394:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6872)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F548C;
      }
      goto L_089F53A8;
    }
L_089F53A8:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x089F53B4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F53B4u) goto L_089F53B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F53B4:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x089F53C0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 203u, 0x08A1D1F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F53C0u) goto L_089F53C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F53C0:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(6876), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6880), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x089F53D4u);
    aot_gpr_5 = (0u | 161u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F53D4u) goto L_089F53D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F53D4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5458;
      }
      goto L_089F53E0;
    }
L_089F53E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F5458;
      }
      goto L_089F53FC;
    }
L_089F53FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_089F5414;
    }
    goto L_089F5408;
L_089F5408:
    aot_gpr_31 = (0x089F5410u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5410u) goto L_089F5410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5410:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_089F5414;
L_089F5414:
    ctx.gpr[8] = (16640u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089F542Cu);
    ctx.gpr[7] = (0u | 160u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F542Cu) goto L_089F542C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F542C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (2207u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F5450u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20104));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5450u) goto L_089F5450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F548C;
      }
      goto L_089F5458;
    }
L_089F5458:
    aot_gpr_31 = (0x089F5460u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5460u) goto L_089F5460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5460:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 19u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_089F548C;
      }
      goto L_089F5480;
    }
L_089F5480:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F548Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F548Cu) goto L_089F548C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F548C:
    aot_gpr_31 = (0x089F5494u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5494u) goto L_089F5494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5494:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F54BC;
      }
      goto L_089F549C;
    }
L_089F549C:
    aot_gpr_31 = (0x089F54A4u);
    aot_gpr_16 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F54A4u) goto L_089F54A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F54A4:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x089F54B0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F54B0u) goto L_089F54B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F54B0:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F54CC;
      }
      goto L_089F54BC;
    }
L_089F54BC:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_16 = (0u | 1u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    goto L_089F54CC;
L_089F54CC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2207u << 16u);
      if (branch_taken) {
          goto L_089F59EC;
      }
      goto L_089F54E8;
    }
L_089F54E8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(19736));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_fpr_24 = std::bit_cast<float>(0u);
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (2236u << 16u);
    aot_gpr_4 = (18042u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (16256u << 16u);
    ctx.gpr[20] = (0u | 1880u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    goto L_089F552C;
L_089F552C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_089F596C;
    }
    goto L_089F5538;
L_089F5538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_089F5928;
    }
    goto L_089F5548;
L_089F5548:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1760)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5560:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F5928;
      }
      goto L_089F5568;
    }
L_089F5568:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F5928;
      }
      goto L_089F5570;
    }
L_089F5570:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(6884)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F55CC;
      }
      goto L_089F557C;
    }
L_089F557C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 1u);
      if (branch_taken) {
          goto L_089F55B0;
      }
      goto L_089F55A8;
    }
L_089F55A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089F55B4;
      }
      goto L_089F55B0;
    }
L_089F55B0:
    aot_gpr_4 = (0u | 0u);
    goto L_089F55B4;
L_089F55B4:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F55C4;
      }
      goto L_089F55BC;
    }
L_089F55BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_089F55D4;
      }
      goto L_089F55C4;
    }
L_089F55C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_089F55D4;
      }
      goto L_089F55CC;
    }
L_089F55CC:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_16 = (0u | 0u);
    goto L_089F55D4;
L_089F55D4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5624;
      }
      goto L_089F55DC;
    }
L_089F55DC:
    aot_gpr_31 = (0x089F55E4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F55E4u) goto L_089F55E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F55E4:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[30];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089F562C;
      }
      goto L_089F5608;
    }
L_089F5608:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (0u | 76u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x089F561Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F561Cu) goto L_089F561C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F561C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F562C;
      }
      goto L_089F5624;
    }
L_089F5624:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_089F562C;
L_089F562C:
    aot_gpr_31 = (0x089F5634u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5634u) goto L_089F5634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5634:
    aot_gpr_31 = (0x089F563Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F563Cu) goto L_089F563C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F563C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5800;
      }
      goto L_089F5648;
    }
L_089F5648:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(6884)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F5800;
      }
      goto L_089F5654;
    }
L_089F5654:
    aot_gpr_31 = (0x089F565Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F565Cu) goto L_089F565C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F565C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5800;
      }
      goto L_089F5664;
    }
L_089F5664:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_089F567C;
    }
    goto L_089F567C;
L_089F567C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F5800;
      }
      goto L_089F568C;
    }
L_089F568C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_089F56A4;
    }
    goto L_089F56A4;
L_089F56A4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F5800;
      }
      goto L_089F56B4;
    }
L_089F56B4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_12;
    aot_fpr_13 = ctx.fpr[26] - aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (48985u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[14];
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F5800;
      }
      goto L_089F571C;
    }
L_089F571C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = ctx.fpr[28] - aot_fpr_13;
    aot_gpr_31 = (0x089F573Cu);
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F573Cu) goto L_089F573C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F573C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_24)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[22];
        goto L_089F5750;
    }
    goto L_089F5750;
L_089F5750:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F5774;
      }
      goto L_089F5770;
    }
L_089F5770:
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[22];
    goto L_089F5774;
L_089F5774:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089F5784u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5784u) goto L_089F5784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5784:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F5790u);
    aot_gpr_5 = (0u | 19u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5790u) goto L_089F5790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5790:
    aot_gpr_31 = (0x089F5798u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5798u) goto L_089F5798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5798:
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (aot_gpr_5 | 64u);
    aot_gpr_31 = (0x089F57ACu);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(aot_gpr_5));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 218u, 0x08A1D29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F57ACu) goto L_089F57AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F57AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_31 = (0x089F57B8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F57B8u) goto L_089F57B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F57B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_089F57D0;
    }
    goto L_089F57C4;
L_089F57C4:
    aot_gpr_31 = (0x089F57CCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F57CCu) goto L_089F57CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F57CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_089F57D0;
L_089F57D0:
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_31 = (0x089F57E8u);
    ctx.gpr[7] = (0u | 159u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F57E8u) goto L_089F57E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F57E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x089F57F8u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F57F8u) goto L_089F57F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F57F8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6888), ctx.gpr[18]);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(6884), static_cast<std::uint8_t>(ctx.gpr[23]));
    goto L_089F5800;
L_089F5800:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F5928;
      }
      goto L_089F5808;
    }
L_089F5808:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F5928;
      }
      goto L_089F5810;
    }
L_089F5810:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_6 = (0u | 60000u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5834;
      }
      goto L_089F582C;
    }
L_089F582C:
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), aot_gpr_4);
    goto L_089F5834;
L_089F5834:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F5928;
      }
      goto L_089F583C;
    }
L_089F583C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 1u);
      if (branch_taken) {
          goto L_089F5870;
      }
      goto L_089F5868;
    }
L_089F5868:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089F5874;
      }
      goto L_089F5870;
    }
L_089F5870:
    aot_gpr_4 = (0u | 0u);
    goto L_089F5874;
L_089F5874:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5884;
      }
      goto L_089F587C;
    }
L_089F587C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_089F5888;
      }
      goto L_089F5884;
    }
L_089F5884:
    aot_gpr_16 = (0u | 0u);
    goto L_089F5888;
L_089F5888:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F590C;
      }
      goto L_089F5890;
    }
L_089F5890:
    aot_gpr_31 = (0x089F5898u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5898u) goto L_089F5898;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5898:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[30];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_20;
    { const bool branch_taken = aot_gpr_16 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089F5914;
      }
      goto L_089F58BC;
    }
L_089F58BC:
    aot_gpr_31 = (0x089F58C4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F58C4u) goto L_089F58C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F58C4:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (49312u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F5904;
      }
      goto L_089F58F0;
    }
L_089F58F0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (0u | 76u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x089F5904u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5904u) goto L_089F5904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5914;
      }
      goto L_089F590C;
    }
L_089F590C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_089F5914;
L_089F5914:
    aot_gpr_31 = (0x089F591Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F591Cu) goto L_089F591C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F591C:
    aot_gpr_31 = (0x089F5924u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5924u) goto L_089F5924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5924:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_089F5928;
L_089F5928:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_gpr_4 = (17948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[14];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F59D0;
      }
      goto L_089F5964;
    }
L_089F5964:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089F59D0;
      }
      goto L_089F596C;
    }
L_089F596C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F59D0;
      }
      goto L_089F5990;
    }
L_089F5990:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_gpr_4 = (17864u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[14];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_089F59D0;
      }
      goto L_089F59CC;
    }
L_089F59CC:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[23]));
    goto L_089F59D0;
L_089F59D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089F552C;
      }
      goto L_089F59EC;
    }
L_089F59EC:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_24 = std::bit_cast<float>(aot_run_words[2]);
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
      ctx.gpr[23] = aot_run_words[13];
      ctx.gpr[30] = aot_run_words[14];
      aot_gpr_31 = aot_run_words[15];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5A34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (2246u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089F5A48u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(23472));
    goto L_089F4F38;
L_089F5A48:
    aot_gpr_31 = (0x089F5A50u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9776));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5A50u) goto L_089F5A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5A50:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5A5C:
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-13232));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u | 35u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_089F5A74;
L_089F5A74:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F5AB8;
      }
      goto L_089F5A7C;
    }
L_089F5A7C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5AB8;
      }
      goto L_089F5A84;
    }
L_089F5A84:
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5AB8;
      }
      goto L_089F5A90;
    }
L_089F5A90:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F5AA4;
      }
      goto L_089F5A9C;
    }
L_089F5A9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_089F5AA8;
      }
      goto L_089F5AA4;
    }
L_089F5AA4:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_089F5AA8;
L_089F5AA8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F5A74;
      }
      goto L_089F5AB8;
    }
L_089F5AB8:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5AC0:
    ctx.gpr[2] = (2236u << 16u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-12976));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_089F5AD4;
L_089F5AD4:
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_5) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F5B04;
      }
      goto L_089F5ADC;
    }
L_089F5ADC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5B04;
      }
      goto L_089F5AE4;
    }
L_089F5AE4:
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5B04;
      }
      goto L_089F5AF0;
    }
L_089F5AF0:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F5AD4;
      }
      goto L_089F5B04;
    }
L_089F5B04:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5B0C:
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-12720));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (0u | 35u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_089F5B24;
L_089F5B24:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F5B68;
      }
      goto L_089F5B2C;
    }
L_089F5B2C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5B68;
      }
      goto L_089F5B34;
    }
L_089F5B34:
    ctx.gpr[8] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5B68;
      }
      goto L_089F5B40;
    }
L_089F5B40:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F5B54;
      }
      goto L_089F5B4C;
    }
L_089F5B4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_089F5B58;
      }
      goto L_089F5B54;
    }
L_089F5B54:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_089F5B58;
L_089F5B58:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_6 + ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F5B24;
      }
      goto L_089F5B68;
    }
L_089F5B68:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5B70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F5BB4;
      }
      goto L_089F5B98;
    }
L_089F5B98:
    aot_gpr_31 = (0x089F5BA0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 1u, 0x08804000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5BA0u) goto L_089F5BA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5BA0:
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F5B98;
      }
      goto L_089F5BB4;
    }
L_089F5BB4:
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
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
L_089F5BD4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F5C18;
      }
      goto L_089F5BFC;
    }
L_089F5BFC:
    aot_gpr_31 = (0x089F5C04u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 1u, 0x08804000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5C04u) goto L_089F5C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5C04:
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F5BFC;
      }
      goto L_089F5C18;
    }
L_089F5C18:
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
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
L_089F5C38:
    ctx.gpr[7] = (0u | 94u);
    aot_gpr_6 = (0u | 126u);
    aot_gpr_5 = (0u | 65408u);
    goto L_089F5C44;
L_089F5C44:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5C74;
      }
      goto L_089F5C4C;
    }
L_089F5C4C:
    ctx.gpr[8] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5C74;
      }
      goto L_089F5C58;
    }
L_089F5C58:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089F5C68;
      }
      goto L_089F5C60;
    }
L_089F5C60:
    { const bool branch_taken = ctx.gpr[8] != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_089F5C6C;
      }
      goto L_089F5C68;
    }
L_089F5C68:
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    goto L_089F5C6C;
L_089F5C6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F5C44;
      }
      goto L_089F5C74;
    }
L_089F5C74:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5C7C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-528));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(512), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(516), aot_gpr_31);
    aot_gpr_31 = (0x089F5C98u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5C98u) goto L_089F5C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5C98:
    aot_gpr_6 = (aot_gpr_29 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089F5CF0;
      }
      goto L_089F5CA8;
    }
L_089F5CA8:
    ctx.gpr[7] = (0u | 126u);
    goto L_089F5CAC;
L_089F5CAC:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F5CD4;
      }
      goto L_089F5CB4;
    }
L_089F5CB4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F5CE4;
      }
      goto L_089F5CC0;
    }
L_089F5CC0:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[7];
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F5CC0;
      }
      goto L_089F5CCC;
    }
L_089F5CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5CE4;
      }
      goto L_089F5CD4;
    }
L_089F5CD4:
    ctx.gpr[8] = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[8] = (aot_gpr_16 + ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_089F5CE4;
L_089F5CE4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F5CAC;
      }
      goto L_089F5CF0;
    }
L_089F5CF0:
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(512)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(516)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5D0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 12u);
    { const std::uint32_t dividend = ctx.gpr[18]; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_4 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_31 = (0x089F5D58u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5D58u) goto L_089F5D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5D58:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F5DA4;
      }
      goto L_089F5D68;
    }
L_089F5D68:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089F5D78u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5D78u) goto L_089F5D78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5D78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F5D68;
      }
      goto L_089F5DA4;
    }
L_089F5DA4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_089F5DC4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5DEC;
      }
      goto L_089F5DE0;
    }
L_089F5DE0:
    aot_gpr_31 = (0x089F5DE8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5DE8u) goto L_089F5DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5DE8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), 0u);
    goto L_089F5DEC;
L_089F5DEC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5E00:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (aot_gpr_6 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F5E34;
      }
      goto L_089F5E14;
    }
L_089F5E14:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_gpr_6 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F5E14;
      }
      goto L_089F5E34;
    }
L_089F5E34:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5E3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_16);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[8] = (ctx.gpr[7] << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x089F5E68u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089F5EE4;
L_089F5E68:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F5EC8;
      }
      goto L_089F5E74;
    }
L_089F5E74:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9748));
    aot_gpr_31 = (0x089F5E84u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5E84u) goto L_089F5E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5E84:
    ctx.gpr[2] = (2279u << 16u);
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(20672));
    goto L_089F5E90;
L_089F5E90:
    aot_gpr_4 = (aot_gpr_29 + aot_gpr_16);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[2]);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_16 = (aot_gpr_16 & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 25 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F5E90;
      }
      goto L_089F5EC0;
    }
L_089F5EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5ED4;
      }
      goto L_089F5EC8;
    }
L_089F5EC8:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089F5ED4;
L_089F5ED4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5EE4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[7] << 16u);
    ctx.gpr[21] = (ctx.gpr[8] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_089F5FD4;
      }
      goto L_089F5F2C;
    }
L_089F5F2C:
    aot_gpr_4 = (ctx.gpr[22] + ctx.gpr[21]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    aot_gpr_5 = (aot_gpr_5 >> 31u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 1u));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    aot_gpr_4 = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[20] + aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    aot_gpr_5 = (aot_gpr_16 + ctx.gpr[19]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x089F5F60u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F5F60u) goto L_089F5F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F5F60:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5FCC;
      }
      goto L_089F5F6C;
    }
L_089F5F6C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    // nop
      if (branch_taken) {
          goto L_089F5FA4;
      }
      goto L_089F5F74;
    }
L_089F5F74:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089F5FDC;
      }
      goto L_089F5F7C;
    }
L_089F5F7C:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_gpr_4 << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F5F9Cu);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    goto L_089F5EE4;
L_089F5F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5FE0;
      }
      goto L_089F5FA4;
    }
L_089F5FA4:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_gpr_4 << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F5FC4u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    goto L_089F5EE4;
L_089F5FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5FE0;
      }
      goto L_089F5FCC;
    }
L_089F5FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089F5FE0;
      }
      goto L_089F5FD4;
    }
L_089F5FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089F5FE0;
      }
      goto L_089F5FDC;
    }
L_089F5FDC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089F5FE0;
L_089F5FE0:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6008:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] >> 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    aot_gpr_31 = (0x089F6044u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6044u) goto L_089F6044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6044:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F6090;
      }
      goto L_089F6054;
    }
L_089F6054:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089F6064u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6064u) goto L_089F6064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6064:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[20]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6054;
      }
      goto L_089F6090;
    }
L_089F6090:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_089F60B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F60D8;
      }
      goto L_089F60CC;
    }
L_089F60CC:
    aot_gpr_31 = (0x089F60D4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F60D4u) goto L_089F60D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F60D4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), 0u);
    goto L_089F60D8;
L_089F60D8:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F60EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (0u | 12u);
    { const std::uint32_t dividend = aot_gpr_5; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    ctx.gpr[23] = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[22] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089F61DC;
      }
      goto L_089F6138;
    }
L_089F6138:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    goto L_089F613C;
L_089F613C:
    aot_gpr_4 = (ctx.gpr[22] + ctx.gpr[22]);
    aot_gpr_4 = (ctx.gpr[22] + aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_4 << 2u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[19]);
    goto L_089F6150;
L_089F6150:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x089F6160u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6160u) goto L_089F6160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6160:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_gpr_5 = (ctx.gpr[19] + ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6150;
      }
      goto L_089F618C;
    }
L_089F618C:
    ctx.gpr[21] = (0u | 0u);
    goto L_089F6190;
L_089F6190:
    aot_gpr_5 = (aot_gpr_29 + ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F61A0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F61A0u) goto L_089F61A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F61A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6190;
      }
      goto L_089F61C0;
    }
L_089F61C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), aot_gpr_4);
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    aot_gpr_4 = (ctx.gpr[22] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F613C;
      }
      goto L_089F61DC;
    }
L_089F61DC:
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2400), static_cast<std::uint16_t>(ctx.gpr[23]));
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F620C:
    { const std::uint32_t aot_run_words[8]{0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(2444), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (0u | 101u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2448), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u | 0u);
    goto L_089F6248;
L_089F6248:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6248;
      }
      goto L_089F6264;
    }
L_089F6264:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20672));
    goto L_089F6270;
L_089F6270:
    ctx.gpr[7] = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6270;
      }
      goto L_089F6290;
    }
L_089F6290:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6298:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    goto L_089F62C0;
L_089F62C0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089F62D0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F62D0u) goto L_089F62D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F62D0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (ctx.gpr[18] + ctx.gpr[19]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_gpr_4 = (ctx.gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F62C0;
      }
      goto L_089F62FC;
    }
L_089F62FC:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_089F6318:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2448)));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6324:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089F633Cu);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2448), static_cast<std::uint8_t>(0u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 476u, 0x08ABAA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F633Cu) goto L_089F633C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F633C:
    aot_gpr_31 = (0x089F6344u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089F5DC4;
L_089F6344:
    aot_gpr_31 = (0x089F634Cu);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    goto L_089F60B0;
L_089F634C:
    aot_gpr_31 = (0x089F6354u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    goto L_089F5DC4;
L_089F6354:
    aot_gpr_31 = (0x089F635Cu);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(24));
    goto L_089F60B0;
L_089F635C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 0u);
    goto L_089F6364;
L_089F6364:
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6364;
      }
      goto L_089F6380;
    }
L_089F6380:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6390:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089F63B4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089F5E3C;
L_089F63B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F63E8;
      }
      goto L_089F63C0;
    }
L_089F63C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F63E8;
      }
      goto L_089F63CC;
    }
L_089F63CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F63E8;
      }
      goto L_089F63D8;
    }
L_089F63D8:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F63E8u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089F5E3C;
L_089F63E8:
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
L_089F63FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_31);
    aot_gpr_31 = (0x089F6444u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6444u) goto L_089F6444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6444:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F6454u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089F5E3C;
L_089F6454:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F648C;
      }
      goto L_089F6460;
    }
L_089F6460:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F648C;
      }
      goto L_089F646C;
    }
L_089F646C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F648C;
      }
      goto L_089F6478;
    }
L_089F6478:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F6488u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089F5E3C;
L_089F6488:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_089F648C;
L_089F648C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F64D4;
      }
      goto L_089F6494;
    }
L_089F6494:
    aot_gpr_31 = (0x089F649Cu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F649Cu) goto L_089F649C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F649C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089F64B0u);
    aot_gpr_6 = (0u | 0u);
    goto L_089F5B70;
L_089F64B0:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F64C4u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 248u, 0x08B65158u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F64C4u) goto L_089F64C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F64C4:
    aot_gpr_31 = (0x089F64CCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F64CCu) goto L_089F64CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F64CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089F64D8;
      }
      goto L_089F64D4;
    }
L_089F64D4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089F64D8;
L_089F64D8:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F64FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089F6520u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089F5E3C;
L_089F6520:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6554;
      }
      goto L_089F652C;
    }
L_089F652C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6554;
      }
      goto L_089F6538;
    }
L_089F6538:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6554;
      }
      goto L_089F6544;
    }
L_089F6544:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F6554u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    goto L_089F5E3C;
L_089F6554:
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
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
L_089F656C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_run_words); }
    aot_gpr_31 = (0x089F65B0u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    goto L_089F6324;
L_089F65B0:
    aot_gpr_31 = (0x089F65B8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 351u, 0x08871328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F65B8u) goto L_089F65B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F65B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F65D4;
      }
      goto L_089F65C4;
    }
L_089F65C4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x089F65D4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F65D4u) goto L_089F65D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F65D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F666C;
      }
      goto L_089F65E4;
    }
L_089F65E4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F661C;
      }
      goto L_089F65F0;
    }
L_089F65F0:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089F6630;
      }
      goto L_089F65F8;
    }
L_089F65F8:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F6644;
      }
      goto L_089F6600;
    }
L_089F6600:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089F6658;
      }
      goto L_089F6608;
    }
L_089F6608:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9728));
    aot_gpr_31 = (0x089F6614u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6614u) goto L_089F6614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F666C;
      }
      goto L_089F661C;
    }
L_089F661C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9716));
    aot_gpr_31 = (0x089F6628u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6628u) goto L_089F6628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F666C;
      }
      goto L_089F6630;
    }
L_089F6630:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9704));
    aot_gpr_31 = (0x089F663Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F663Cu) goto L_089F663C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F663C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F666C;
      }
      goto L_089F6644;
    }
L_089F6644:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9692));
    aot_gpr_31 = (0x089F6650u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6650u) goto L_089F6650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F666C;
      }
      goto L_089F6658;
    }
L_089F6658:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9680));
    aot_gpr_31 = (0x089F6664u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6664u) goto L_089F6664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F666C;
      }
      goto L_089F666C;
    }
L_089F666C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9668));
    aot_gpr_31 = (0x089F6678u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 359u, 0x088713B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6678u) goto L_089F6678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6678:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), 0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9664));
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9656));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_5);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9648));
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_6);
    goto L_089F66A8;
L_089F66A8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_089F66B8;
      }
      goto L_089F66B0;
    }
L_089F66B0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F67C8;
      }
      goto L_089F66B8;
    }
L_089F66B8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F66CCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089F6298;
L_089F66CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F67C0;
      }
      goto L_089F66D8;
    }
L_089F66D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089F66E8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F66E8u) goto L_089F66E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F66E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6714;
      }
      goto L_089F66F0;
    }
L_089F66F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (6u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089F670Cu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32768));
    goto L_089F60EC;
L_089F670C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr_16));
      if (branch_taken) {
          goto L_089F67C0;
      }
      goto L_089F6714;
    }
L_089F6714:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x089F6724u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6724u) goto L_089F6724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6724:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6748;
      }
      goto L_089F672C;
    }
L_089F672C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F6740u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089F5D0C;
L_089F6740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_089F67C0;
      }
      goto L_089F6748;
    }
L_089F6748:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x089F6758u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6758u) goto L_089F6758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6758:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F677C;
      }
      goto L_089F6760;
    }
L_089F6760:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F6774u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089F6008;
L_089F6774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089F67C0;
      }
      goto L_089F677C;
    }
L_089F677C:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F67C0;
      }
      goto L_089F678C;
    }
L_089F678C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F679Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F679Cu) goto L_089F679C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F679C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_gpr_16 & 65535u);
    aot_gpr_4 = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F678C;
      }
      goto L_089F67C0;
    }
L_089F67C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F66A8;
      }
      goto L_089F67C8;
    }
L_089F67C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x089F67D4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_089F5E00;
L_089F67D4:
    aot_gpr_31 = (0x089F67DCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 365u, 0x08871414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F67DCu) goto L_089F67DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F67DC:
    aot_gpr_31 = (0x089F67E4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9748));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 351u, 0x08871328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F67E4u) goto L_089F67E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F67E4:
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2448), static_cast<std::uint8_t>(aot_gpr_16));
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6818:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_run_words); }
    { const std::uint32_t aot_run_words[5]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words); }
    aot_gpr_31 = (0x089F6850u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0173_entry, 173u, 476u, 0x08ABAA8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6850u) goto L_089F6850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6850:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x089F685Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    goto L_089F5DC4;
L_089F685C:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(24));
    aot_gpr_31 = (0x089F6868u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), aot_gpr_4);
    goto L_089F60B0;
L_089F6868:
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2444)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    goto L_089F6880;
L_089F6880:
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6880;
      }
      goto L_089F689C;
    }
L_089F689C:
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    goto L_089F68AC;
L_089F68AC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6900;
      }
      goto L_089F68B4;
    }
L_089F68B4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6900;
      }
      goto L_089F68BC;
    }
L_089F68BC:
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(44));
    aot_gpr_31 = (0x089F68D8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F68D8u) goto L_089F68D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F68D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(2444)));
      if (branch_taken) {
          goto L_089F68EC;
      }
      goto L_089F68E0;
    }
L_089F68E0:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F68F8;
      }
      goto L_089F68EC;
    }
L_089F68EC:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_16 & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    goto L_089F68F8;
L_089F68F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F68AC;
      }
      goto L_089F6900;
    }
L_089F6900:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089F6914u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6914u) goto L_089F6914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6914:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6BB4;
      }
      goto L_089F691C;
    }
L_089F691C:
    aot_gpr_31 = (0x089F6924u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 351u, 0x08871328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6924u) goto L_089F6924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6924:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(108));
      if (branch_taken) {
          goto L_089F6940;
      }
      goto L_089F6930;
    }
L_089F6930:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), aot_gpr_4);
    aot_gpr_31 = (0x089F6940u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6940u) goto L_089F6940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6940:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F69D8;
      }
      goto L_089F6950;
    }
L_089F6950:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F6988;
      }
      goto L_089F695C;
    }
L_089F695C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089F699C;
      }
      goto L_089F6964;
    }
L_089F6964:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F69B0;
      }
      goto L_089F696C;
    }
L_089F696C:
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089F69C4;
      }
      goto L_089F6974;
    }
L_089F6974:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9728));
    aot_gpr_31 = (0x089F6980u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6980u) goto L_089F6980;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F69D8;
      }
      goto L_089F6988;
    }
L_089F6988:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9716));
    aot_gpr_31 = (0x089F6994u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6994u) goto L_089F6994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F69D8;
      }
      goto L_089F699C;
    }
L_089F699C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9704));
    aot_gpr_31 = (0x089F69A8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F69A8u) goto L_089F69A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F69A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F69D8;
      }
      goto L_089F69B0;
    }
L_089F69B0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9692));
    aot_gpr_31 = (0x089F69BCu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F69BCu) goto L_089F69BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F69BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F69D8;
      }
      goto L_089F69C4;
    }
L_089F69C4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9680));
    aot_gpr_31 = (0x089F69D0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F69D0u) goto L_089F69D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F69D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F69D8;
      }
      goto L_089F69D8;
    }
L_089F69D8:
    aot_gpr_31 = (0x089F69E0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F69E0u) goto L_089F69E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F69E0:
    aot_gpr_4 = (aot_gpr_16 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9668));
    aot_gpr_31 = (0x089F6A08u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 359u, 0x088713B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6A08u) goto L_089F6A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6A08:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F6A1Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 363u, 0x088713F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6A1Cu) goto L_089F6A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6A1C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), 0u);
    aot_gpr_16 = (0u | 0u);
    goto L_089F6A24;
L_089F6A24:
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_16);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(136));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F6A38u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6A38u) goto L_089F6A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6A38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_4);
    aot_gpr_16 = (aot_gpr_16 & 65535u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6A24;
      }
      goto L_089F6A58;
    }
L_089F6A58:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(136));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F6A6Cu);
    aot_gpr_6 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6A6Cu) goto L_089F6A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6A6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6A88;
      }
      goto L_089F6A74;
    }
L_089F6A74:
    aot_gpr_5 = (2232u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F6A88u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1676));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6A88u) goto L_089F6A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6A88:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(132));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9656));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9648));
    goto L_089F6A98;
L_089F6A98:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_089F6AA8;
      }
      goto L_089F6AA0;
    }
L_089F6AA0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6B7C;
      }
      goto L_089F6AA8;
    }
L_089F6AA8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F6ABCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089F6298;
L_089F6ABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6B74;
      }
      goto L_089F6AC8;
    }
L_089F6AC8:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x089F6AD8u);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6AD8u) goto L_089F6AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6AD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6AFC;
      }
      goto L_089F6AE0;
    }
L_089F6AE0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F6AF4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089F5D0C;
L_089F6AF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_089F6B74;
      }
      goto L_089F6AFC;
    }
L_089F6AFC:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x089F6B0Cu);
    aot_gpr_6 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6B0Cu) goto L_089F6B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6B0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F6B30;
      }
      goto L_089F6B14;
    }
L_089F6B14:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F6B28u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_089F6008;
L_089F6B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089F6B74;
      }
      goto L_089F6B30;
    }
L_089F6B30:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6B74;
      }
      goto L_089F6B40;
    }
L_089F6B40:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F6B50u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 361u, 0x088713D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6B50u) goto L_089F6B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6B50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_gpr_16 & 65535u);
    aot_gpr_4 = (aot_gpr_16 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6B40;
      }
      goto L_089F6B74;
    }
L_089F6B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6A98;
      }
      goto L_089F6B7C;
    }
L_089F6B7C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr_31 = (0x089F6B88u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089F5E00;
L_089F6B88:
    aot_gpr_31 = (0x089F6B90u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 365u, 0x08871414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6B90u) goto L_089F6B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6B90:
    aot_gpr_31 = (0x089F6B98u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6B98u) goto L_089F6B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6B98:
    aot_gpr_31 = (0x089F6BA0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9748));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 351u, 0x08871328u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6BA0u) goto L_089F6BA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6BA0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(148)));
    aot_gpr_31 = (0x089F6BACu);
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(35));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6BACu) goto L_089F6BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6BAC:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089F6BB4;
L_089F6BB4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6BE4:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 1u, 3u, 3u>();
    ctx.execute_vfpu_vec3_ct<0u, 0u, 7u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6C0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6C20:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6C34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6C48:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6C5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6C70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6C84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x089F6CC8u);
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F6CC8u) goto L_089F6CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F6CC8:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28596));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(193)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(194)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(195)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (aot_gpr_5 & 2u);
    aot_gpr_5 = (aot_gpr_5 >> 1u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 << 1u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (aot_gpr_5 & 4u);
    aot_gpr_5 = (aot_gpr_5 >> 2u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    aot_gpr_5 = (aot_gpr_5 >> 3u);
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 << 3u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(205))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(206))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(207))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(208))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[17]);
    goto L_089F6E28;
L_089F6E28:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(209)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089F6E28;
      }
      goto L_089F6E44;
    }
L_089F6E44:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_089F6E50;
L_089F6E50:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(216), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F6E50;
      }
      goto L_089F6E6C;
    }
L_089F6E6C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_089F6E78;
L_089F6E78:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(232)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F6E78;
      }
      goto L_089F6E94;
    }
L_089F6E94:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_089F6EA0;
L_089F6EA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(248)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F6EA0;
      }
      goto L_089F6EBC;
    }
L_089F6EBC:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_089F6EC8;
L_089F6EC8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(264)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F6EC8;
      }
      goto L_089F6EE4;
    }
L_089F6EE4:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_089F6EF0;
L_089F6EF0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(280)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F6EF0;
      }
      goto L_089F6F0C;
    }
L_089F6F0C:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(304));
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    goto L_089F6F18;
L_089F6F18:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[7] = aot_run_words[0];
      ctx.gpr[8] = aot_run_words[1];
      ctx.gpr[9] = aot_run_words[2];
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[3]);
    }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(28)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[9], ctx.gpr[7], ctx.gpr[8]};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089F6F18;
      }
      goto L_089F6F70;
    }
L_089F6F70:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    goto L_089F6F7C;
L_089F6F7C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(432)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(432), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F6F7C;
      }
      goto L_089F6F98;
    }
L_089F6F98:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(452)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(452), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(468));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(468));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(464))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(aot_gpr_5));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      ctx.gpr[7] = aot_run_words[1];
      ctx.gpr[8] = aot_run_words[2];
    }
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[8], aot_gpr_5, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_6 + static_cast<std::uint32_t>(44), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(524)));
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(528)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(528), aot_gpr_4);
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
L_089F7060:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7090:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x089F70A4u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 74u, 0x08AAC48Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F70A4u) goto L_089F70A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F70A4:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26564));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(752));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089F70C0u);
    aot_gpr_6 = (0u | 24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F70C0u) goto L_089F70C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F70C0:
    aot_gpr_4 = (16192u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F70E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_31 = (0x089F710Cu);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 101u, 0x08AAC5E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F710Cu) goto L_089F710C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F710C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26564));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(944)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(960)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(768), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(964)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(772), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (aot_gpr_16 + static_cast<std::uint32_t>(950));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr_31 = (0x089F7154u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_089F6C0C;
L_089F7154:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(12))))));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(756));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[19] = (aot_gpr_16 + static_cast<std::uint32_t>(954));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(760));
      if (branch_taken) {
          goto L_089F717C;
      }
      goto L_089F7170;
    }
L_089F7170:
    aot_gpr_6 = (ctx.gpr[20] - ctx.gpr[21]);
    aot_gpr_31 = (0x089F717Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F717Cu) goto L_089F717C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F717C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(7))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(6));
    aot_gpr_31 = (0x089F719Cu);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_089F6C0C;
L_089F719C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_089F71B4;
      }
      goto L_089F71AC;
    }
L_089F71AC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1852)));
      if (branch_taken) {
          goto L_089F71C8;
      }
      goto L_089F71B4;
    }
L_089F71B4:
    aot_gpr_6 = (ctx.gpr[20] - ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F71C4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F71C4u) goto L_089F71C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F71C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1852)));
    goto L_089F71C8;
L_089F71C8:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F71F4:
    ctx.gpr[2] = (2207u << 16u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(29172));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7200:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089F7210u);
    // nop
    goto L_089F71F4;
L_089F7210:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F721C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x089F7244u);
    ctx.gpr[20] = (0u | 0u);
    goto L_089F71F4;
L_089F7244:
    if (ctx.gpr[2] == aot_gpr_16) {
    ctx.gpr[20] = (0u | 1u);
        goto L_089F72CC;
    }
    goto L_089F724C;
L_089F724C:
    aot_gpr_31 = (0x089F7254u);
    ctx.gpr[19] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 139u, 0x08AACA60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7254u) goto L_089F7254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7254:
    if (ctx.gpr[2] == aot_gpr_16) {
    ctx.gpr[19] = (0u | 1u);
        goto L_089F72BC;
    }
    goto L_089F725C;
L_089F725C:
    aot_gpr_31 = (0x089F7264u);
    ctx.gpr[18] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7264u) goto L_089F7264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7264:
    if (ctx.gpr[2] == aot_gpr_16) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089F72AC;
    }
    goto L_089F726C;
L_089F726C:
    aot_gpr_31 = (0x089F7274u);
    ctx.gpr[17] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7274u) goto L_089F7274;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7274:
    if (ctx.gpr[2] == aot_gpr_16) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089F729C;
    }
    goto L_089F727C;
L_089F727C:
    aot_gpr_31 = (0x089F7284u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7284u) goto L_089F7284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7284:
    aot_gpr_4 = (ctx.gpr[2] ^ aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_089F72A0;
      }
      goto L_089F7298;
    }
L_089F7298:
    ctx.gpr[17] = (0u | 1u);
    goto L_089F729C;
L_089F729C:
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_089F72A0;
L_089F72A0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_089F72B0;
      }
      goto L_089F72A8;
    }
L_089F72A8:
    ctx.gpr[18] = (0u | 1u);
    goto L_089F72AC;
L_089F72AC:
    aot_gpr_4 = (ctx.gpr[18] & 255u);
    goto L_089F72B0;
L_089F72B0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_089F72C0;
      }
      goto L_089F72B8;
    }
L_089F72B8:
    ctx.gpr[19] = (0u | 1u);
    goto L_089F72BC;
L_089F72BC:
    aot_gpr_4 = (ctx.gpr[19] & 255u);
    goto L_089F72C0;
L_089F72C0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F72CC;
      }
      goto L_089F72C8;
    }
L_089F72C8:
    ctx.gpr[20] = (0u | 1u);
    goto L_089F72CC;
L_089F72CC:
    ctx.gpr[2] = (ctx.gpr[20] & 255u);
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
L_089F72F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089F7340;
      }
      goto L_089F730C;
    }
L_089F730C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26548));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_gpr_31 = (0x089F7320u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7320u) goto L_089F7320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7320:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F732Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F732Cu) goto L_089F732C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F732C:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7340;
      }
      goto L_089F7338;
    }
L_089F7338:
    aot_gpr_31 = (0x089F7340u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7340u) goto L_089F7340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7340:
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
L_089F7354:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089F7388;
      }
      goto L_089F736C;
    }
L_089F736C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x089F737Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F737Cu) goto L_089F737C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F737C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_089F7388;
L_089F7388:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F739C:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F73A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 784u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x089F73C8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F73C8u) goto L_089F73C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F73C8:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F73E0;
      }
      goto L_089F73D4;
    }
L_089F73D4:
    aot_gpr_31 = (0x089F73DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089F7090;
L_089F73DC:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    goto L_089F73E0;
L_089F73E0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F73F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089F741C;
      }
      goto L_089F7400;
    }
L_089F7400:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x089F741Cu);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F741Cu) goto L_089F741C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F741C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7428:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 784u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x089F7454u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7454u) goto L_089F7454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7454:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F74F0;
      }
      goto L_089F7460;
    }
L_089F7460:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089F746Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    goto L_089F6C84;
L_089F746C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28580));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(544)));
    ctx.gpr[7] = (2207u << 16u);
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(560));
    ctx.gpr[8] = (aot_gpr_16 + static_cast<std::uint32_t>(560));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_6 = (0u | 32u);
    aot_gpr_31 = (0x089F749Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28768));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 115u, 0x08B6095Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F749Cu) goto L_089F749C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F749C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-26564));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(752));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(752));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[7], aot_gpr_6, aot_gpr_4};
      aot_mem.aot_direct_store32_block(aot_gpr_5 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_089F74F0;
L_089F74F0:
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
L_089F7504:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089F7518u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 660u, 0x08A7FA3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7518u) goto L_089F7518;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7518:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7524:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x089F7540u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7540u) goto L_089F7540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7540:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27568));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(364));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089F755Cu);
    aot_gpr_6 = (0u | 24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F755Cu) goto L_089F755C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F755C:
    aot_gpr_4 = (16192u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x089F7574u);
    aot_gpr_4 = (0u | 384u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7574u) goto L_089F7574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7574:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F759C;
      }
      goto L_089F7580;
    }
L_089F7580:
    aot_gpr_31 = (0x089F7588u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 264u, 0x08AAD80Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7588u) goto L_089F7588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7588:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27352));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(380), 0u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089F759C;
L_089F759C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[2] = (aot_gpr_16 | 0u);
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
L_089F75BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words); }
    aot_gpr_31 = (0x089F75E4u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F75E4u) goto L_089F75E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F75E4:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27568));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(108), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(364));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089F7600u);
    aot_gpr_6 = (0u | 24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7600u) goto L_089F7600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7600:
    aot_gpr_4 = (16192u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F7620u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7620u) goto L_089F7620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7620:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x089F7630u);
    aot_gpr_4 = (0u | 384u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7630u) goto L_089F7630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7630:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089F7658;
      }
      goto L_089F763C;
    }
L_089F763C:
    aot_gpr_31 = (0x089F7644u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 264u, 0x08AAD80Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7644u) goto L_089F7644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7644:
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(27352));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(380), 0u);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_089F7658;
L_089F7658:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_gpr_31 = (0x089F7664u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 166u, 0x08AACBDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7664u) goto L_089F7664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7664:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1708)));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(140));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1688));
    aot_gpr_31 = (0x089F767Cu);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F767Cu) goto L_089F767C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F767C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(156));
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1672));
    aot_gpr_31 = (0x089F768Cu);
    aot_gpr_6 = (0u | 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F768Cu) goto L_089F768C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F768C:
    aot_gpr_31 = (0x089F7694u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_089F7AFC;
L_089F7694:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 784u);
    aot_gpr_31 = (0x089F76B0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F76B0u) goto L_089F76B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F76B0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089F76CC;
      }
      goto L_089F76BC;
    }
L_089F76BC:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089F76C8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_089F70E0;
L_089F76C8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    goto L_089F76CC;
L_089F76CC:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F76DCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F76DCu) goto L_089F76DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F76DC:
    aot_gpr_31 = (0x089F76E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 562u, 0x0888F9A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F76E4u) goto L_089F76E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F76E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(18));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (aot_gpr_16 | 0u);
    goto L_089F76F8;
L_089F76F8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F7720;
      }
      goto L_089F7700;
    }
L_089F7700:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F7710u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7710u) goto L_089F7710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7710:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_089F7720;
L_089F7720:
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F76F8;
      }
      goto L_089F7740;
    }
L_089F7740:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7764:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_gpr_31 = (0x089F7794u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 169u, 0x08AACC08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7794u) goto L_089F7794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7794:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_089F77A8;
L_089F77A8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F77D0;
      }
      goto L_089F77B0;
    }
L_089F77B0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F77C0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F77C0u) goto L_089F77C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F77C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_089F77D0;
L_089F77D0:
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(280));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[18]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F77A8;
      }
      goto L_089F77F4;
    }
L_089F77F4:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7814:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089F7864;
      }
      goto L_089F7838;
    }
L_089F7838:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F785C;
      }
      goto L_089F7840;
    }
L_089F7840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x089F785Cu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F785Cu) goto L_089F785C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F785C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F78AC;
      }
      goto L_089F7864;
    }
L_089F7864:
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (0u | 784u);
    aot_gpr_31 = (0x089F7880u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29120));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7880u) goto L_089F7880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7880:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089F789C;
      }
      goto L_089F788C;
    }
L_089F788C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x089F7898u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089F70E0;
L_089F7898:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_089F789C;
L_089F789C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F78ACu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F78ACu) goto L_089F78AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F78AC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_089F78C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr_6));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(58))))));
    aot_gpr_6 = (ctx.gpr[7] - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 16u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < 0 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_089F7964;
      }
      goto L_089F7918;
    }
L_089F7918:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(60))))));
    aot_gpr_31 = (0x089F7930u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7930u) goto L_089F7930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7930:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_31 = (0x089F7948u);
    aot_gpr_6 = (0u | 40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7948u) goto L_089F7948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7948:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089F795Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_089F7E64;
L_089F795C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089F79CC;
      }
      goto L_089F7964;
    }
L_089F7964:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(62))))));
    aot_gpr_31 = (0x089F797Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F797Cu) goto L_089F797C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F797C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(64))))));
    aot_gpr_31 = (0x089F7994u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 440u, 0x08A9B864u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7994u) goto L_089F7994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7994:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(96))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(66))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(68))))));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    ctx.gpr[8] = (aot_gpr_5 << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F79CCu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_089F7CCC;
L_089F79CC:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F79E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(364));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x089F7A18u);
    aot_gpr_6 = (0u | 24u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7A18u) goto L_089F7A18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7A18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (2218u << 16u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x089F7A30u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(9288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7A30u) goto L_089F7A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7A30:
    ctx.gpr[19] = (0u | 12u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    goto L_089F7A40;
L_089F7A40:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7ACC;
      }
      goto L_089F7A4C;
    }
L_089F7A4C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_5 = (0u | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_089F7A74;
      }
      goto L_089F7A5C;
    }
L_089F7A5C:
    aot_gpr_6 = (aot_gpr_4 & 1u);
    if (aot_gpr_6 == 0u) {
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
        goto L_089F7A78;
    }
    goto L_089F7A68;
L_089F7A68:
    aot_gpr_31 = (0x089F7A70u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7A70u) goto L_089F7A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7A70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    goto L_089F7A74;
L_089F7A74:
    aot_gpr_5 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_089F7A78;
L_089F7A78:
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_gpr_31 = (0x089F7A8Cu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7A8Cu) goto L_089F7A8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7A8C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_16 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[14] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x089F7AA0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7AA0u) goto L_089F7AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7AA0:
    aot_gpr_31 = (0x089F7AA8u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7AA8u) goto L_089F7AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7AA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7ACC;
      }
      goto L_089F7AB8;
    }
L_089F7AB8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7ACC;
      }
      goto L_089F7AC4;
    }
L_089F7AC4:
    aot_gpr_31 = (0x089F7ACCu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7ACCu) goto L_089F7ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7ACC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 29 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F7A40;
      }
      goto L_089F7ADC;
    }
L_089F7ADC:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7AFC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_089F7B24;
      }
      goto L_089F7B14;
    }
L_089F7B14:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_089F7B24;
L_089F7B24:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(56)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7B54;
      }
      goto L_089F7B40;
    }
L_089F7B40:
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(374), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(375), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(376), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(377), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_089F7B54;
L_089F7B54:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7B5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(760));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(372));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_089F7BDC;
      }
      goto L_089F7B98;
    }
L_089F7B98:
    ctx.gpr[18] = (ctx.gpr[7] + aot_gpr_16);
    ctx.gpr[17] = (aot_gpr_6 << 2u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(372), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[17] = (aot_gpr_16 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7BD4;
      }
      goto L_089F7BB4;
    }
L_089F7BB4:
    aot_gpr_6 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_089F7BE4;
      }
      goto L_089F7BC0;
    }
L_089F7BC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F7BCCu);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0159_entry, 159u, 168u, 0x08A82170u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7BCCu) goto L_089F7BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7C94;
      }
      goto L_089F7BD4;
    }
L_089F7BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7C94;
      }
      goto L_089F7BDC;
    }
L_089F7BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7C94;
      }
      goto L_089F7BE4;
    }
L_089F7BE4:
    aot_gpr_6 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_089F7C68;
      }
      goto L_089F7BF0;
    }
L_089F7BF0:
    aot_gpr_4 = (2218u << 16u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(9368));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x089F7C0Cu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7C0Cu) goto L_089F7C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_089F7C54;
      }
      goto L_089F7C18;
    }
L_089F7C18:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7C54;
      }
      goto L_089F7C28;
    }
L_089F7C28:
    ctx.gpr[19] = (0u | 2u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F7C38u);
    aot_gpr_6 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0159_entry, 159u, 168u, 0x08A82170u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7C38u) goto L_089F7C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7C38:
    aot_gpr_5 = (2218u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    aot_gpr_6 = (0u | 2048u);
    aot_gpr_31 = (0x089F7C4Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(9208));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7C4Cu) goto L_089F7C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7C4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(372), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_089F7C60;
      }
      goto L_089F7C54;
    }
L_089F7C54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F7C60u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0159_entry, 159u, 168u, 0x08A82170u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7C60u) goto L_089F7C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7C94;
      }
      goto L_089F7C68;
    }
L_089F7C68:
    aot_gpr_6 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_089F7C94;
      }
      goto L_089F7C74;
    }
L_089F7C74:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7C94;
      }
      goto L_089F7C7C;
    }
L_089F7C7C:
    aot_gpr_4 = (2218u << 16u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(9208));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x089F7C94u);
    aot_gpr_6 = (0u | 2048u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7C94u) goto L_089F7C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7C94:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
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
L_089F7CB0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x089F7CC0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 66u, 0x089F89BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7CC0u) goto L_089F7CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7CC0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7CCC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_31);
    aot_gpr_31 = (0x089F7D0Cu);
    aot_gpr_6 = (0u | 40u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7D0Cu) goto L_089F7D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7D0C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089F7D24u);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    goto L_089F7D70;
L_089F7D24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7D4C;
      }
      goto L_089F7D30;
    }
L_089F7D30:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x089F7D44u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    goto L_089F7E64;
L_089F7D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089F7D50;
      }
      goto L_089F7D4C;
    }
L_089F7D4C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089F7D50;
L_089F7D50:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7D70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x089F7DA8u);
    ctx.gpr[8] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 182u, 0x08AACD10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7DA8u) goto L_089F7DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7DA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7DC0;
      }
      goto L_089F7DB4;
    }
L_089F7DB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 8192u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_089F7DC0;
L_089F7DC0:
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(752));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(752));
    aot_gpr_31 = (0x089F7DD0u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 10u, 0x089F81CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7DD0u) goto L_089F7DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7DD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089F7DE4;
      }
      goto L_089F7DD8;
    }
L_089F7DD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_089F7DE4;
L_089F7DE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(776)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (46470u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 14269u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[14])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F7E2C;
      }
      goto L_089F7E0C;
    }
L_089F7E0C:
    aot_gpr_4 = (13702u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 14269u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_089F7E30;
      }
      goto L_089F7E28;
    }
L_089F7E28:
    ctx.gpr[17] = (0u | 1u);
    goto L_089F7E2C;
L_089F7E2C:
    aot_gpr_4 = (ctx.gpr[17] & 255u);
    goto L_089F7E30;
L_089F7E30:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F7E44;
      }
      goto L_089F7E38;
    }
L_089F7E38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_089F7E44;
L_089F7E44:
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
L_089F7E64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[20] & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (aot_gpr_5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[20] >> 16u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (aot_gpr_5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (aot_gpr_5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[20] & 8192u);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7F6C;
      }
      goto L_089F7F58;
    }
L_089F7F58:
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089F7F6Cu);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 206u, 0x08AACEA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7F6Cu) goto L_089F7F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7F6C:
    aot_gpr_4 = (ctx.gpr[20] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7F8C;
      }
      goto L_089F7F78;
    }
L_089F7F78:
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(752));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x089F7F8Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 32u, 0x089F82DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089F7F8Cu) goto L_089F7F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089F7F8C:
    aot_gpr_4 = (ctx.gpr[20] & 16384u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 2u, 0x089F8058u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089F7F98;
    }
L_089F7F98:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(776)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_4 & 65535u);
    aot_gpr_5 = (aot_gpr_5 & 65535u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 8u));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_gpr_6 & 65535u);
    ctx.gpr[7] = (ctx.gpr[18] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 8u));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 >> 16u);
    ctx.pc = 0x089F8000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0124(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0124_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_124(Runtime &runtime) {
    runtime.register_generated_unit(124u, 0x089F4000u, 16384u, &recomp_unit_0124, &recomp_unit_0124_entry);
    runtime.register_function(0x089F4000u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4030u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4038u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4048u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F404Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4088u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4094u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F40D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F40E0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F40F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F40F4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4130u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F413Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4144u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4168u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F41ACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F41D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F41F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F41FCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4220u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4230u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F423Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4244u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F424Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4264u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4298u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F42A8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F42B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F42D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F42E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F42F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F42F8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4300u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4334u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4344u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F435Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4394u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F43A0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F43A4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F43B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F43C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F43DCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F43E4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F43ECu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4428u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4444u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4470u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4488u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F44B8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4510u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4520u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4528u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4530u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4534u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F453Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4560u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4570u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4588u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F458Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4594u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F45A0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F45B8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F45C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4600u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4610u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4620u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4638u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4640u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4658u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4674u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4680u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4688u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4690u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F469Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F46A4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F46B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F46D0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F46ECu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F46F8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4700u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4724u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4734u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F473Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4744u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4748u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F475Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F47E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4804u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F484Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F48B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F48CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F48D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4924u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4934u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4940u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4948u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4950u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4964u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F49C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F49D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F49F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F49FCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4A0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4A14u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4A34u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4A3Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4A64u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4A88u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4AACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4ADCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B04u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B14u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B2Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B38u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B50u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B54u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B5Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4B88u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4BCCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4BE8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4C04u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4C2Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4C6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4C98u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4CC8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4D18u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4D4Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4D60u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4D6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4D74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4D88u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4DB4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4DC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4DD0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4DDCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4DE8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4DF0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4DF8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4E0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4E28u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4E34u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4E40u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4E48u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4E54u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4E64u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4E88u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4EC8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4EF4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F04u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F14u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F20u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F38u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F40u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F50u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F5Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F64u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F70u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4F9Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4FA8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4FB0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4FC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4FC8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4FDCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4FE4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4FE8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F4FF0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5004u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F503Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5050u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5058u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5078u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5094u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F50A0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F50E0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F50E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5100u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F510Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5114u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5138u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5140u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5170u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5178u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F518Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5194u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F51CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F51E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5230u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F524Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5280u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F529Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F52D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F52E0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5304u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F530Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5314u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5360u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5394u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F53A8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F53B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F53C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F53D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F53E0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F53FCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5408u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5410u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5414u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F542Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5450u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5458u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5460u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5480u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F548Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5494u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F549Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F54A4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F54B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F54BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F54CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F54E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F552Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5538u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5548u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5560u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5568u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5570u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F557Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F55A8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F55B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F55B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F55BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F55C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F55CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F55D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F55DCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F55E4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5608u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F561Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5624u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F562Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5634u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F563Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5648u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5654u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F565Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5664u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F567Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F568Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F56A4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F56B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F571Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F573Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5750u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5770u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5774u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5784u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5790u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5798u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F57ACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F57B8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F57C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F57CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F57D0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F57E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F57F8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5800u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5808u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5810u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F582Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5834u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F583Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5868u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5870u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5874u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F587Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5884u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5888u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5890u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5898u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F58BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F58C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F58F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5904u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F590Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5914u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F591Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5924u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5928u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5964u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F596Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5990u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F59CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F59D0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F59ECu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5A34u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5A48u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5A50u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5A5Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5A74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5A7Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5A84u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5A90u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5A9Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5AA4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5AA8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5AB8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5AC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5AD4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5ADCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5AE4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5AF0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B04u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B24u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B2Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B34u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B40u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B4Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B54u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B58u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B68u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B70u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5B98u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5BA0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5BB4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5BD4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5BFCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C04u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C18u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C38u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C44u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C4Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C58u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C60u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C68u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C7Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5C98u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5CA8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5CACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5CB4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5CC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5CCCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5CD4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5CE4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5CF0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5D0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5D58u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5D68u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5D78u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5DA4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5DC4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5DE0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5DE8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5DECu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5E00u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5E14u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5E34u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5E3Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5E68u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5E74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5E84u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5E90u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5EC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5EC8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5ED4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5EE4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5F2Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5F60u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5F6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5F74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5F7Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5F9Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5FA4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5FC4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5FCCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5FD4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5FDCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F5FE0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6008u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6044u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6054u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6064u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6090u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F60B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F60CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F60D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F60D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F60ECu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6138u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F613Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6150u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6160u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F618Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6190u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F61A0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F61C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F61DCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F620Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6248u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6264u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6270u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6290u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6298u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F62C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F62D0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F62FCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6318u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6324u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F633Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6344u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F634Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6354u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F635Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6364u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6380u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6390u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F63B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F63C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F63CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F63D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F63E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F63FCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6444u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6454u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6460u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F646Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6478u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6488u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F648Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6494u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F649Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F64B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F64C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F64CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F64D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F64D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F64FCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6520u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F652Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6538u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6544u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6554u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F656Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F65B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F65B8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F65C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F65D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F65E4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F65F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F65F8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6600u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6608u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6614u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F661Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6628u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6630u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F663Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6644u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6650u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6658u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6664u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F666Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6678u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F66A8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F66B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F66B8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F66CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F66D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F66E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F66F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F670Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6714u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6724u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F672Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6740u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6748u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6758u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6760u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6774u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F677Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F678Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F679Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F67C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F67C8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F67D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F67DCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F67E4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6818u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6850u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F685Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6868u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6880u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F689Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F68ACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F68B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F68BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F68D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F68E0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F68ECu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F68F8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6900u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6914u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F691Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6924u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6930u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6940u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6950u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F695Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6964u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F696Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6974u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6980u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6988u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6994u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F699Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F69A8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F69B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F69BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F69C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F69D0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F69D8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F69E0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6A08u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6A1Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6A24u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6A38u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6A58u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6A6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6A74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6A88u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6A98u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6AA0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6AA8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6ABCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6AC8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6AD8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6AE0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6AF4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6AFCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B14u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B28u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B30u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B40u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B50u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B7Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B88u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B90u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6B98u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6BA0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6BACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6BB4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6BE4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6C0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6C20u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6C34u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6C48u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6C5Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6C70u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6C84u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6CC8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6E28u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6E44u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6E50u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6E6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6E78u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6E94u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6EA0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6EBCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6EC8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6EE4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6EF0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6F0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6F18u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6F70u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6F7Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F6F98u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7060u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7090u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F70A4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F70C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F70E0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F710Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7154u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7170u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F717Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F719Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F71ACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F71B4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F71C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F71C8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F71F4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7200u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7210u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F721Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7244u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F724Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7254u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F725Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7264u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F726Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7274u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F727Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7284u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7298u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F729Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72A0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72A8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72ACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72B8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72C8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F72F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F730Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7320u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F732Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7338u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7340u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7354u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F736Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F737Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7388u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F739Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F73A4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F73C8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F73D4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F73DCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F73E0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F73F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7400u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F741Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7428u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7454u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7460u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F746Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F749Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F74F0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7504u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7518u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7524u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7540u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F755Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7574u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7580u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7588u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F759Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F75BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F75E4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7600u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7620u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7630u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F763Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7644u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7658u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7664u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F767Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F768Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7694u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F76B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F76BCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F76C8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F76CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F76DCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F76E4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F76F8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7700u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7710u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7720u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7740u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7764u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7794u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F77A8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F77B0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F77C0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F77D0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F77F4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7814u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7838u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7840u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F785Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7864u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7880u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F788Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7898u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F789Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F78ACu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F78C4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7918u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7930u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7948u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F795Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7964u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F797Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7994u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F79CCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F79E8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A18u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A30u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A40u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A4Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A5Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A68u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A70u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A78u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7A8Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7AA0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7AA8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7AB8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7AC4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7ACCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7ADCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7AFCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7B14u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7B24u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7B40u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7B54u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7B5Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7B98u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7BB4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7BC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7BCCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7BD4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7BDCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7BE4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7BF0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C18u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C28u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C38u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C4Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C54u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C60u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C68u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C74u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C7Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7C94u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7CB0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7CC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7CCCu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7D0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7D24u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7D30u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7D44u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7D4Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7D50u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7D70u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7DA8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7DB4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7DC0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7DD0u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7DD8u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7DE4u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7E0Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7E28u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7E2Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7E30u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7E38u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7E44u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7E64u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7F58u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7F6Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7F78u, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7F8Cu, &recomp_unit_0124, "recomp_unit_0124");
    runtime.register_function(0x089F7F98u, &recomp_unit_0124, "recomp_unit_0124");
}
} // namespace psprecomp
