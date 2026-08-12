#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0095[4090] = {
    1, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 8, 0,
    9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0,
    28, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 0, 40,
    0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 56,
    0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0,
    75, 0, 76, 0, 77, 0, 78, 79, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86,
    0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0,
    105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 126,
    0, 127, 128, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 136, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0,
    141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168,
    0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0,
    0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 185, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 189,
    0, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200,
    0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0,
    211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0,
    0, 222, 0, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 232, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 238, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 248, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 254, 255, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 269, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 276, 0, 0, 277, 0, 0, 278,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 283, 0, 0, 284, 285, 0, 0, 286, 287, 0, 288, 0, 289, 290, 0, 0, 291, 0, 0, 292, 0, 0,
    0, 0, 293, 294, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0,
    317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 324, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0,
    0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 372, 373, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    379, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 382, 0, 383, 0, 0, 0, 0, 0, 384, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388,
    0, 0, 0, 0, 0, 389, 390, 0, 391, 0, 0, 0, 0, 0, 392, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397,
    398, 0, 399, 0, 0, 0, 0, 0, 400, 401, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 406, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 414, 0,
    415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 421, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 430, 0, 0, 431, 0,
    432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0,
    0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448,
    0, 449, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 457, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0,
    0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0,
    0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0,
    0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 0, 512,
    0, 0, 513, 0, 514, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0,
    520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 529, 0, 0, 530, 0, 531, 0, 0, 532, 533, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540,
    0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0,
    0, 0, 549, 550, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554,
    0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0,
    570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573,
    0, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0,
    0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 585,
    0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0,
    0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0,
    0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0, 0,
    618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 627,
    0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640,
    0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 648,
    0, 649, 0, 0, 650, 0, 651, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 669,
    0, 0, 670, 0, 0, 671, 0, 672, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680,
};
void recomp_unit_0095_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08980000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0095[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08980000;
    case 2u: goto L_08980004;
    case 3u: goto L_0898000C;
    case 4u: goto L_0898001C;
    case 5u: goto L_08980024;
    case 6u: goto L_08980068;
    case 7u: goto L_08980074;
    case 8u: goto L_08980078;
    case 9u: goto L_08980080;
    case 10u: goto L_0898008C;
    case 11u: goto L_08980098;
    case 12u: goto L_089800A8;
    case 13u: goto L_089800B0;
    case 14u: goto L_089800B8;
    case 15u: goto L_089800C0;
    case 16u: goto L_089800F4;
    case 17u: goto L_08980100;
    case 18u: goto L_0898013C;
    case 19u: goto L_08980148;
    case 20u: goto L_0898015C;
    case 21u: goto L_08980164;
    case 22u: goto L_0898018C;
    case 23u: goto L_08980194;
    case 24u: goto L_0898019C;
    case 25u: goto L_089801E8;
    case 26u: goto L_089801F0;
    case 27u: goto L_089801F8;
    case 28u: goto L_08980200;
    case 29u: goto L_0898020C;
    case 30u: goto L_08980214;
    case 31u: goto L_0898021C;
    case 32u: goto L_08980224;
    case 33u: goto L_0898022C;
    case 34u: goto L_08980234;
    case 35u: goto L_08980244;
    case 36u: goto L_08980254;
    case 37u: goto L_0898025C;
    case 38u: goto L_08980264;
    case 39u: goto L_08980270;
    case 40u: goto L_0898027C;
    case 41u: goto L_08980288;
    case 42u: goto L_08980298;
    case 43u: goto L_089802A8;
    case 44u: goto L_089802B0;
    case 45u: goto L_089802C0;
    case 46u: goto L_089802CC;
    case 47u: goto L_089802D8;
    case 48u: goto L_089802E0;
    case 49u: goto L_089802F0;
    case 50u: goto L_089802F8;
    case 51u: goto L_08980340;
    case 52u: goto L_0898034C;
    case 53u: goto L_08980360;
    case 54u: goto L_0898036C;
    case 55u: goto L_08980378;
    case 56u: goto L_0898037C;
    case 57u: goto L_08980384;
    case 58u: goto L_0898038C;
    case 59u: goto L_08980398;
    case 60u: goto L_089803A8;
    case 61u: goto L_089803D0;
    case 62u: goto L_08980408;
    case 63u: goto L_08980420;
    case 64u: goto L_08980428;
    case 65u: goto L_08980430;
    case 66u: goto L_08980438;
    case 67u: goto L_08980440;
    case 68u: goto L_08980448;
    case 69u: goto L_08980450;
    case 70u: goto L_08980458;
    case 71u: goto L_08980460;
    case 72u: goto L_08980468;
    case 73u: goto L_08980470;
    case 74u: goto L_08980478;
    case 75u: goto L_08980480;
    case 76u: goto L_08980488;
    case 77u: goto L_08980490;
    case 78u: goto L_08980498;
    case 79u: goto L_0898049C;
    case 80u: goto L_089804A4;
    case 81u: goto L_089804B0;
    case 82u: goto L_089804B8;
    case 83u: goto L_089804C0;
    case 84u: goto L_089804CC;
    case 85u: goto L_089804DC;
    case 86u: goto L_089804FC;
    case 87u: goto L_0898050C;
    case 88u: goto L_08980520;
    case 89u: goto L_08980550;
    case 90u: goto L_08980558;
    case 91u: goto L_08980560;
    case 92u: goto L_08980568;
    case 93u: goto L_08980580;
    case 94u: goto L_08980590;
    case 95u: goto L_08980598;
    case 96u: goto L_089805A0;
    case 97u: goto L_089805A8;
    case 98u: goto L_089805B0;
    case 99u: goto L_089805B8;
    case 100u: goto L_089805C4;
    case 101u: goto L_089805CC;
    case 102u: goto L_089805E4;
    case 103u: goto L_089805EC;
    case 104u: goto L_089805F8;
    case 105u: goto L_08980600;
    case 106u: goto L_08980608;
    case 107u: goto L_08980620;
    case 108u: goto L_0898062C;
    case 109u: goto L_08980634;
    case 110u: goto L_08980640;
    case 111u: goto L_0898064C;
    case 112u: goto L_08980654;
    case 113u: goto L_0898065C;
    case 114u: goto L_08980668;
    case 115u: goto L_08980688;
    case 116u: goto L_08980694;
    case 117u: goto L_089806A4;
    case 118u: goto L_089806B0;
    case 119u: goto L_089806C4;
    case 120u: goto L_089806DC;
    case 121u: goto L_08980708;
    case 122u: goto L_08980740;
    case 123u: goto L_0898075C;
    case 124u: goto L_0898076C;
    case 125u: goto L_08980774;
    case 126u: goto L_0898077C;
    case 127u: goto L_08980784;
    case 128u: goto L_08980788;
    case 129u: goto L_08980790;
    case 130u: goto L_08980798;
    case 131u: goto L_089807AC;
    case 132u: goto L_089807B4;
    case 133u: goto L_089807EC;
    case 134u: goto L_0898080C;
    case 135u: goto L_08980824;
    case 136u: goto L_0898082C;
    case 137u: goto L_08980830;
    case 138u: goto L_08980850;
    case 139u: goto L_0898085C;
    case 140u: goto L_08980870;
    case 141u: goto L_08980880;
    case 142u: goto L_08980888;
    case 143u: goto L_08980890;
    case 144u: goto L_0898089C;
    case 145u: goto L_089808A4;
    case 146u: goto L_089808A8;
    case 147u: goto L_089808D4;
    case 148u: goto L_089808E4;
    case 149u: goto L_089808F8;
    case 150u: goto L_08980900;
    case 151u: goto L_08980928;
    case 152u: goto L_08980938;
    case 153u: goto L_08980940;
    case 154u: goto L_08980954;
    case 155u: goto L_08980958;
    case 156u: goto L_0898096C;
    case 157u: goto L_08980974;
    case 158u: goto L_08980988;
    case 159u: goto L_089809B0;
    case 160u: goto L_089809C0;
    case 161u: goto L_089809CC;
    case 162u: goto L_089809DC;
    case 163u: goto L_089809E4;
    case 164u: goto L_08980A04;
    case 165u: goto L_08980A34;
    case 166u: goto L_08980A64;
    case 167u: goto L_08980A70;
    case 168u: goto L_08980A7C;
    case 169u: goto L_08980A84;
    case 170u: goto L_08980A94;
    case 171u: goto L_08980A9C;
    case 172u: goto L_08980AAC;
    case 173u: goto L_08980AB8;
    case 174u: goto L_08980AC8;
    case 175u: goto L_08980AD0;
    case 176u: goto L_08980ADC;
    case 177u: goto L_08980AF0;
    case 178u: goto L_08980AF8;
    case 179u: goto L_08980B08;
    case 180u: goto L_08980B18;
    case 181u: goto L_08980B24;
    case 182u: goto L_08980B28;
    case 183u: goto L_08980B38;
    case 184u: goto L_08980B4C;
    case 185u: goto L_08980B50;
    case 186u: goto L_08980B58;
    case 187u: goto L_08980B60;
    case 188u: goto L_08980B70;
    case 189u: goto L_08980B7C;
    case 190u: goto L_08980B88;
    case 191u: goto L_08980B90;
    case 192u: goto L_08980B9C;
    case 193u: goto L_08980BA4;
    case 194u: goto L_08980BB4;
    case 195u: goto L_08980BBC;
    case 196u: goto L_08980BD4;
    case 197u: goto L_08980BE0;
    case 198u: goto L_08980BEC;
    case 199u: goto L_08980BF4;
    case 200u: goto L_08980BFC;
    case 201u: goto L_08980C0C;
    case 202u: goto L_08980C18;
    case 203u: goto L_08980C20;
    case 204u: goto L_08980C2C;
    case 205u: goto L_08980C34;
    case 206u: goto L_08980C40;
    case 207u: goto L_08980C50;
    case 208u: goto L_08980C5C;
    case 209u: goto L_08980C68;
    case 210u: goto L_08980C70;
    case 211u: goto L_08980C80;
    case 212u: goto L_08980C8C;
    case 213u: goto L_08980C94;
    case 214u: goto L_08980CA0;
    case 215u: goto L_08980CA8;
    case 216u: goto L_08980CB8;
    case 217u: goto L_08980CC4;
    case 218u: goto L_08980CCC;
    case 219u: goto L_08980CD8;
    case 220u: goto L_08980CE0;
    case 221u: goto L_08980CF8;
    case 222u: goto L_08980D04;
    case 223u: goto L_08980D10;
    case 224u: goto L_08980D18;
    case 225u: goto L_08980D20;
    case 226u: goto L_08980D2C;
    case 227u: goto L_08980D38;
    case 228u: goto L_08980D40;
    case 229u: goto L_08980D48;
    case 230u: goto L_08980D54;
    case 231u: goto L_08980D74;
    case 232u: goto L_08980D8C;
    case 233u: goto L_08980D90;
    case 234u: goto L_08980DB0;
    case 235u: goto L_08980DB8;
    case 236u: goto L_08980DCC;
    case 237u: goto L_08980DF4;
    case 238u: goto L_08980E10;
    case 239u: goto L_08980E14;
    case 240u: goto L_08980E20;
    case 241u: goto L_08980E2C;
    case 242u: goto L_08980E3C;
    case 243u: goto L_08980E40;
    case 244u: goto L_08980E68;
    case 245u: goto L_08980E80;
    case 246u: goto L_08980E94;
    case 247u: goto L_08980EA8;
    case 248u: goto L_08980EAC;
    case 249u: goto L_08980EB0;
    case 250u: goto L_08980EB8;
    case 251u: goto L_08980ED4;
    case 252u: goto L_08980EEC;
    case 253u: goto L_08980F00;
    case 254u: goto L_08980F14;
    case 255u: goto L_08980F18;
    case 256u: goto L_08980F1C;
    case 257u: goto L_08980F24;
    case 258u: goto L_08980F4C;
    case 259u: goto L_08980F54;
    case 260u: goto L_08980F58;
    case 261u: goto L_08980F88;
    case 262u: goto L_08980F98;
    case 263u: goto L_08980FA8;
    case 264u: goto L_08980FD8;
    case 265u: goto L_08980FE8;
    case 266u: goto L_08980FF8;
    case 267u: goto L_0898102C;
    case 268u: goto L_08981044;
    case 269u: goto L_08981048;
    case 270u: goto L_08981050;
    case 271u: goto L_0898105C;
    case 272u: goto L_08981090;
    case 273u: goto L_0898109C;
    case 274u: goto L_089810AC;
    case 275u: goto L_089810E0;
    case 276u: goto L_089810E4;
    case 277u: goto L_089810F0;
    case 278u: goto L_089810FC;
    case 279u: goto L_08981104;
    case 280u: goto L_08981124;
    case 281u: goto L_08981194;
    case 282u: goto L_089811A4;
    case 283u: goto L_089811A8;
    case 284u: goto L_089811B4;
    case 285u: goto L_089811B8;
    case 286u: goto L_089811C4;
    case 287u: goto L_089811C8;
    case 288u: goto L_089811D0;
    case 289u: goto L_089811D8;
    case 290u: goto L_089811DC;
    case 291u: goto L_089811E8;
    case 292u: goto L_089811F4;
    case 293u: goto L_08981208;
    case 294u: goto L_0898120C;
    case 295u: goto L_08981214;
    case 296u: goto L_08981220;
    case 297u: goto L_08981228;
    case 298u: goto L_08981238;
    case 299u: goto L_0898124C;
    case 300u: goto L_0898126C;
    case 301u: goto L_08981274;
    case 302u: goto L_0898127C;
    case 303u: goto L_08981290;
    case 304u: goto L_089812A4;
    case 305u: goto L_089812B4;
    case 306u: goto L_089812B8;
    case 307u: goto L_089812CC;
    case 308u: goto L_089812D4;
    case 309u: goto L_089812E0;
    case 310u: goto L_08981308;
    case 311u: goto L_08981324;
    case 312u: goto L_0898138C;
    case 313u: goto L_08981398;
    case 314u: goto L_089813DC;
    case 315u: goto L_089813F0;
    case 316u: goto L_089813F8;
    case 317u: goto L_08981400;
    case 318u: goto L_08981418;
    case 319u: goto L_08981428;
    case 320u: goto L_08981434;
    case 321u: goto L_08981450;
    case 322u: goto L_0898145C;
    case 323u: goto L_08981464;
    case 324u: goto L_08981468;
    case 325u: goto L_08981470;
    case 326u: goto L_089814A0;
    case 327u: goto L_089814A8;
    case 328u: goto L_089814AC;
    case 329u: goto L_089814B8;
    case 330u: goto L_08981504;
    case 331u: goto L_08981544;
    case 332u: goto L_0898154C;
    case 333u: goto L_08981554;
    case 334u: goto L_0898156C;
    case 335u: goto L_0898158C;
    case 336u: goto L_08981618;
    case 337u: goto L_0898163C;
    case 338u: goto L_08981648;
    case 339u: goto L_089816AC;
    case 340u: goto L_089816C4;
    case 341u: goto L_089816CC;
    case 342u: goto L_089816E0;
    case 343u: goto L_089816F4;
    case 344u: goto L_0898171C;
    case 345u: goto L_0898175C;
    case 346u: goto L_08981770;
    case 347u: goto L_08981790;
    case 348u: goto L_089817A4;
    case 349u: goto L_089817AC;
    case 350u: goto L_089817B4;
    case 351u: goto L_089817BC;
    case 352u: goto L_089817CC;
    case 353u: goto L_089817E0;
    case 354u: goto L_089817EC;
    case 355u: goto L_08981804;
    case 356u: goto L_08981810;
    case 357u: goto L_08981818;
    case 358u: goto L_08981820;
    case 359u: goto L_08981828;
    case 360u: goto L_08981830;
    case 361u: goto L_08981844;
    case 362u: goto L_08981868;
    case 363u: goto L_08981880;
    case 364u: goto L_08981888;
    case 365u: goto L_08981898;
    case 366u: goto L_089818A8;
    case 367u: goto L_089818AC;
    case 368u: goto L_089818B4;
    case 369u: goto L_089818D8;
    case 370u: goto L_089818E0;
    case 371u: goto L_089818E4;
    case 372u: goto L_0898190C;
    case 373u: goto L_08981910;
    case 374u: goto L_08981918;
    case 375u: goto L_08981928;
    case 376u: goto L_08981938;
    case 377u: goto L_08981954;
    case 378u: goto L_08981978;
    case 379u: goto L_08981980;
    case 380u: goto L_08981984;
    case 381u: goto L_089819AC;
    case 382u: goto L_089819B0;
    case 383u: goto L_089819B8;
    case 384u: goto L_089819D0;
    case 385u: goto L_089819D4;
    case 386u: goto L_089819DC;
    case 387u: goto L_089819EC;
    case 388u: goto L_089819FC;
    case 389u: goto L_08981A14;
    case 390u: goto L_08981A18;
    case 391u: goto L_08981A20;
    case 392u: goto L_08981A38;
    case 393u: goto L_08981A3C;
    case 394u: goto L_08981A44;
    case 395u: goto L_08981A54;
    case 396u: goto L_08981A64;
    case 397u: goto L_08981A7C;
    case 398u: goto L_08981A80;
    case 399u: goto L_08981A88;
    case 400u: goto L_08981AA0;
    case 401u: goto L_08981AA4;
    case 402u: goto L_08981AAC;
    case 403u: goto L_08981ABC;
    case 404u: goto L_08981ACC;
    case 405u: goto L_08981AE4;
    case 406u: goto L_08981AE8;
    case 407u: goto L_08981AF0;
    case 408u: goto L_08981B10;
    case 409u: goto L_08981B38;
    case 410u: goto L_08981B40;
    case 411u: goto L_08981B44;
    case 412u: goto L_08981B6C;
    case 413u: goto L_08981B74;
    case 414u: goto L_08981B78;
    case 415u: goto L_08981B80;
    case 416u: goto L_08981B90;
    case 417u: goto L_08981BA0;
    case 418u: goto L_08981BC0;
    case 419u: goto L_08981BE8;
    case 420u: goto L_08981BF0;
    case 421u: goto L_08981BF4;
    case 422u: goto L_08981C1C;
    case 423u: goto L_08981C24;
    case 424u: goto L_08981C28;
    case 425u: goto L_08981C30;
    case 426u: goto L_08981C38;
    case 427u: goto L_08981C40;
    case 428u: goto L_08981C50;
    case 429u: goto L_08981C58;
    case 430u: goto L_08981C6C;
    case 431u: goto L_08981C78;
    case 432u: goto L_08981C80;
    case 433u: goto L_08981C88;
    case 434u: goto L_08981CE8;
    case 435u: goto L_08981CF0;
    case 436u: goto L_08981CF8;
    case 437u: goto L_08981D58;
    case 438u: goto L_08981D70;
    case 439u: goto L_08981D78;
    case 440u: goto L_08981D84;
    case 441u: goto L_08981D90;
    case 442u: goto L_08981D9C;
    case 443u: goto L_08981E2C;
    case 444u: goto L_08981E38;
    case 445u: goto L_08981E78;
    case 446u: goto L_08981E80;
    case 447u: goto L_08981E90;
    case 448u: goto L_08981EFC;
    case 449u: goto L_08981F04;
    case 450u: goto L_08981F14;
    case 451u: goto L_08981F1C;
    case 452u: goto L_08981F34;
    case 453u: goto L_08981FA0;
    case 454u: goto L_08981FB8;
    case 455u: goto L_08981FC0;
    case 456u: goto L_08981FE0;
    case 457u: goto L_08981FE4;
    case 458u: goto L_0898203C;
    case 459u: goto L_08982044;
    case 460u: goto L_0898204C;
    case 461u: goto L_089820A8;
    case 462u: goto L_089820B0;
    case 463u: goto L_089820C8;
    case 464u: goto L_089820DC;
    case 465u: goto L_08982190;
    case 466u: goto L_089821EC;
    case 467u: goto L_08982208;
    case 468u: goto L_089822D8;
    case 469u: goto L_089822EC;
    case 470u: goto L_0898231C;
    case 471u: goto L_08982398;
    case 472u: goto L_089823A4;
    case 473u: goto L_089823B0;
    case 474u: goto L_089823BC;
    case 475u: goto L_08982438;
    case 476u: goto L_08982450;
    case 477u: goto L_089824A4;
    case 478u: goto L_089824AC;
    case 479u: goto L_089824B8;
    case 480u: goto L_089824C4;
    case 481u: goto L_089824DC;
    case 482u: goto L_089824E4;
    case 483u: goto L_08982504;
    case 484u: goto L_08982518;
    case 485u: goto L_0898252C;
    case 486u: goto L_08982540;
    case 487u: goto L_08982544;
    case 488u: goto L_08982560;
    case 489u: goto L_08982578;
    case 490u: goto L_0898258C;
    case 491u: goto L_089825DC;
    case 492u: goto L_089825E4;
    case 493u: goto L_089825F0;
    case 494u: goto L_089825F8;
    case 495u: goto L_0898260C;
    case 496u: goto L_0898264C;
    case 497u: goto L_08982654;
    case 498u: goto L_08982668;
    case 499u: goto L_08982688;
    case 500u: goto L_0898269C;
    case 501u: goto L_089826B4;
    case 502u: goto L_089826B8;
    case 503u: goto L_089826C0;
    case 504u: goto L_089826D8;
    case 505u: goto L_08982710;
    case 506u: goto L_08982728;
    case 507u: goto L_08982748;
    case 508u: goto L_08982754;
    case 509u: goto L_0898275C;
    case 510u: goto L_08982768;
    case 511u: goto L_08982770;
    case 512u: goto L_0898277C;
    case 513u: goto L_08982788;
    case 514u: goto L_08982790;
    case 515u: goto L_08982794;
    case 516u: goto L_0898279C;
    case 517u: goto L_089827C0;
    case 518u: goto L_089827E0;
    case 519u: goto L_089827E8;
    case 520u: goto L_08982800;
    case 521u: goto L_0898280C;
    case 522u: goto L_0898286C;
    case 523u: goto L_089828E8;
    case 524u: goto L_08982930;
    case 525u: goto L_08982938;
    case 526u: goto L_0898298C;
    case 527u: goto L_08982998;
    case 528u: goto L_089829A4;
    case 529u: goto L_089829AC;
    case 530u: goto L_089829B8;
    case 531u: goto L_089829C0;
    case 532u: goto L_089829CC;
    case 533u: goto L_089829D0;
    case 534u: goto L_089829D8;
    case 535u: goto L_089829F0;
    case 536u: goto L_08982AB8;
    case 537u: goto L_08982AC8;
    case 538u: goto L_08982AD0;
    case 539u: goto L_08982AE4;
    case 540u: goto L_08982AFC;
    case 541u: goto L_08982B08;
    case 542u: goto L_08982B14;
    case 543u: goto L_08982B20;
    case 544u: goto L_08982B2C;
    case 545u: goto L_08982B38;
    case 546u: goto L_08982B44;
    case 547u: goto L_08982B5C;
    case 548u: goto L_08982B78;
    case 549u: goto L_08982B88;
    case 550u: goto L_08982B8C;
    case 551u: goto L_08982BA0;
    case 552u: goto L_08982BAC;
    case 553u: goto L_08982CE4;
    case 554u: goto L_08982CFC;
    case 555u: goto L_08982D14;
    case 556u: goto L_08982D20;
    case 557u: goto L_08982D2C;
    case 558u: goto L_08982D38;
    case 559u: goto L_08982D80;
    case 560u: goto L_08982DDC;
    case 561u: goto L_08982DE8;
    case 562u: goto L_08982E18;
    case 563u: goto L_08982E20;
    case 564u: goto L_08982E2C;
    case 565u: goto L_08982E38;
    case 566u: goto L_08982E44;
    case 567u: goto L_08982E50;
    case 568u: goto L_08982E5C;
    case 569u: goto L_08982E68;
    case 570u: goto L_08982E80;
    case 571u: goto L_08982ED4;
    case 572u: goto L_08982EF0;
    case 573u: goto L_08982EFC;
    case 574u: goto L_08982F08;
    case 575u: goto L_08982F14;
    case 576u: goto L_08982F24;
    case 577u: goto L_08982F38;
    case 578u: goto L_08982F68;
    case 579u: goto L_08982F70;
    case 580u: goto L_08982F84;
    case 581u: goto L_08982FB4;
    case 582u: goto L_08982FBC;
    case 583u: goto L_08982FD8;
    case 584u: goto L_08982FE8;
    case 585u: goto L_08982FFC;
    case 586u: goto L_0898301C;
    case 587u: goto L_08983054;
    case 588u: goto L_0898305C;
    case 589u: goto L_08983074;
    case 590u: goto L_08983088;
    case 591u: goto L_089830A8;
    case 592u: goto L_089830B0;
    case 593u: goto L_089830CC;
    case 594u: goto L_089830DC;
    case 595u: goto L_089831BC;
    case 596u: goto L_089831F4;
    case 597u: goto L_08983208;
    case 598u: goto L_08983224;
    case 599u: goto L_0898322C;
    case 600u: goto L_08983238;
    case 601u: goto L_08983244;
    case 602u: goto L_08983250;
    case 603u: goto L_0898325C;
    case 604u: goto L_08983268;
    case 605u: goto L_089832B0;
    case 606u: goto L_08983304;
    case 607u: goto L_0898334C;
    case 608u: goto L_08983394;
    case 609u: goto L_0898344C;
    case 610u: goto L_08983808;
    case 611u: goto L_08983888;
    case 612u: goto L_089838C0;
    case 613u: goto L_089838C8;
    case 614u: goto L_08983A50;
    case 615u: goto L_08983A5C;
    case 616u: goto L_08983A68;
    case 617u: goto L_08983A74;
    case 618u: goto L_08983A80;
    case 619u: goto L_08983A8C;
    case 620u: goto L_08983A98;
    case 621u: goto L_08983AA4;
    case 622u: goto L_08983ABC;
    case 623u: goto L_08983AD0;
    case 624u: goto L_08983AD8;
    case 625u: goto L_08983AE8;
    case 626u: goto L_08983AF0;
    case 627u: goto L_08983AFC;
    case 628u: goto L_08983B08;
    case 629u: goto L_08983B14;
    case 630u: goto L_08983B20;
    case 631u: goto L_08983B2C;
    case 632u: goto L_08983B38;
    case 633u: goto L_08983B70;
    case 634u: goto L_08983B9C;
    case 635u: goto L_08983C10;
    case 636u: goto L_08983C18;
    case 637u: goto L_08983C20;
    case 638u: goto L_08983C28;
    case 639u: goto L_08983C64;
    case 640u: goto L_08983C7C;
    case 641u: goto L_08983C84;
    case 642u: goto L_08983C8C;
    case 643u: goto L_08983CB0;
    case 644u: goto L_08983CC4;
    case 645u: goto L_08983CCC;
    case 646u: goto L_08983CE4;
    case 647u: goto L_08983CF4;
    case 648u: goto L_08983CFC;
    case 649u: goto L_08983D04;
    case 650u: goto L_08983D10;
    case 651u: goto L_08983D18;
    case 652u: goto L_08983D20;
    case 653u: goto L_08983D38;
    case 654u: goto L_08983D48;
    case 655u: goto L_08983D50;
    case 656u: goto L_08983D58;
    case 657u: goto L_08983DA8;
    case 658u: goto L_08983DCC;
    case 659u: goto L_08983DD4;
    case 660u: goto L_08983DF4;
    case 661u: goto L_08983E24;
    case 662u: goto L_08983E38;
    case 663u: goto L_08983E40;
    case 664u: goto L_08983E48;
    case 665u: goto L_08983EB8;
    case 666u: goto L_08983EC4;
    case 667u: goto L_08983EE8;
    case 668u: goto L_08983EF4;
    case 669u: goto L_08983EFC;
    case 670u: goto L_08983F08;
    case 671u: goto L_08983F14;
    case 672u: goto L_08983F1C;
    case 673u: goto L_08983F20;
    case 674u: goto L_08983F38;
    case 675u: goto L_08983FA4;
    case 676u: goto L_08983FAC;
    case 677u: goto L_08983FB8;
    case 678u: goto L_08983FCC;
    case 679u: goto L_08983FD8;
    case 680u: goto L_08983FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08980000:
    // nop
    goto L_08980004;
L_08980004:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9264), ctx.gpr[8]);
      if (branch_taken) {
          goto L_0898001C;
      }
      goto L_0898000C;
    }
L_0898000C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 992u, 0x0897FFF8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0898001C;
    }
L_0898001C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980078;
      }
      goto L_08980024;
    }
L_08980024:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (g8 << 4u);
    g9 = (g8 + g8);
    g9 = (g8 + g9);
    g8 = (g9 + g5);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g6 = (ctx.gpr[10] + g6);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(32), g6);
    g5 = (g5 + static_cast<std::uint32_t>(16));
    g5 = (g9 + g5);
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(8), 0u);
    g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08980074;
      }
      goto L_08980068;
    }
}
L_08980068:
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), hot_regs.g4);
      if (branch_taken) {
          goto L_08980078;
      }
      goto L_08980074;
    }
L_08980074:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), 0u);
    goto L_08980078;
L_08980078:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980080:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2247u << 16u);
    hot_regs.g7 = (0u | 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-3872));
    hot_regs.g6 = g6;
    goto L_0898008C;
}
L_0898008C:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089800B0;
      }
      goto L_08980098;
    }
L_08980098:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(g7) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0898008C;
      }
      goto L_089800A8;
    }
}
L_089800A8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089800B8;
      }
      goto L_089800B0;
    }
L_089800B0:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g2 = (0u | 1u);
    goto L_089800B8;
L_089800B8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089800C0:
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    g9 = (2247u << 16u);
    g9 = (g9 + static_cast<std::uint32_t>(-3872));
    g8 = (0u | 0u);
    g3 = (g9 + static_cast<std::uint32_t>(16));
    g8 = (g8 + g3);
    ctx.gpr[11] = (hot_regs.g5 | 0u);
    g3 = (17008u << 16u);
    hot_regs.g2 = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(g3);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[3] = g3;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.g29 = g29;
    goto L_089800F4;
}
L_089800F4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08980148;
      }
      goto L_08980100;
    }
L_08980100:
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08980148;
      }
      goto L_0898013C;
    }
L_0898013C:
    hot_regs.g2 = (0u | 1u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08980148;
L_08980148:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g10 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[3] = (static_cast<std::int32_t>(g10) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_089800F4;
      }
      goto L_0898015C;
    }
}
L_0898015C:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980164:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 4u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g5 = (2247u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-3872));
    g4 = (g4 + g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (0u | 1u);
    { const bool branch_taken = g5 == hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08980194;
      }
      goto L_0898018C;
    }
}
L_0898018C:
    hot_regs.g5 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), hot_regs.g5);
    goto L_08980194;
L_08980194:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898019C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g22);
    g4 = (hot_regs.g5 | 0u);
    g22 = (2247u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[9] = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    g22 = (g22 + static_cast<std::uint32_t>(-3872));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08980200;
      }
      goto L_089801E8;
    }
}
L_089801E8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08980234;
      }
      goto L_089801F0;
    }
L_089801F0:
    hot_regs.g31 = (0x089801F8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 52u, 0x089902B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089801F8u) goto L_089801F8;
    return;
L_089801F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980244;
      }
      goto L_08980200;
    }
L_08980200:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08980224;
      }
      goto L_0898020C;
    }
}
L_0898020C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08980234;
      }
      goto L_08980214;
    }
L_08980214:
    hot_regs.g31 = (0x0898021Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 60u, 0x08990334u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898021Cu) goto L_0898021C;
    return;
L_0898021C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980244;
      }
      goto L_08980224;
    }
L_08980224:
    hot_regs.g31 = (0x0898022Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 56u, 0x089902F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898022Cu) goto L_0898022C;
    return;
L_0898022C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980244;
      }
      goto L_08980234;
    }
L_08980234:
    hot_regs.g4 = (2232u << 16u);
    ctx.gpr[21] = (0u | 0u);
    hot_regs.g31 = (0x08980244u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-6992));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 968u, 0x0897FE38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980244u) goto L_08980244;
    return;
L_08980244:
    hot_regs.g7 = (0u | 0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    goto L_08980254;
L_08980254:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089802A8;
      }
      goto L_0898025C;
    }
L_0898025C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089802A8;
      }
      goto L_08980264;
    }
L_08980264:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08980298;
      }
      goto L_08980270;
    }
L_08980270:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08980298;
      }
      goto L_0898027C;
    }
L_0898027C:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08980298;
      }
      goto L_08980288;
    }
L_08980288:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (0u | 1u);
    g6 = (g6 + ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(32), g6);
    hot_regs.g6 = g6;
    goto L_08980298;
}
L_08980298:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(g7) < 64 ? 1u : 0u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08980254;
      }
      goto L_089802A8;
    }
}
L_089802A8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089803A8;
      }
      goto L_089802B0;
    }
L_089802B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9264)));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 64 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g6 = (g4 << 4u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089802F0;
      }
      goto L_089802C0;
    }
}
L_089802C0:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (g6 + g6);
    g6 = (g6 + hot_regs.g7);
    g6 = (g6 + ctx.gpr[22]);
    hot_regs.g6 = g6;
    goto L_089802CC;
}
L_089802CC:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_089802E0;
      }
      goto L_089802D8;
    }
L_089802D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9264), hot_regs.g4);
      if (branch_taken) {
          goto L_089802F0;
      }
      goto L_089802E0;
    }
L_089802E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 64 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089802CC;
      }
      goto L_089802F0;
    }
}
L_089802F0:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0898037C;
      }
      goto L_089802F8;
    }
L_089802F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g4 << 4u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g17 = (g4 + ctx.gpr[22]);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (g5 + ctx.gpr[20]);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(32), g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    g5 = (g4 + g5);
    g6 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08980360;
      }
      goto L_08980340;
    }
}
L_08980340:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08980360;
      }
      goto L_0898034C;
    }
L_0898034C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g31 = (0x08980360u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980360u) goto L_08980360;
    return;
L_08980360:
    hot_regs.g4 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08980378;
      }
      goto L_0898036C;
    }
L_0898036C:
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), hot_regs.g4);
      if (branch_taken) {
          goto L_0898037C;
      }
      goto L_08980378;
    }
L_08980378:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    goto L_0898037C;
L_0898037C:
    hot_regs.g31 = (0x08980384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980384u) goto L_08980384;
    return;
L_08980384:
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089803A8;
      }
      goto L_0898038C;
    }
L_0898038C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089803A8;
      }
      goto L_08980398;
    }
L_08980398:
    hot_regs.g6 = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089803A8u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_089803D0;
L_089803A8:
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
L_089803D0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g17);
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (g6 & 255u);
    g5 = (g17 + static_cast<std::uint32_t>(-1));
    g6 = (g5 < static_cast<std::uint32_t>(18) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 2u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08980498;
      }
      goto L_08980408;
    }
}
L_08980408:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g5);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-6936)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08980420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 7u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980428;
    }
L_08980428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980430;
    }
L_08980430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980438;
    }
L_08980438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980440;
    }
L_08980440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980448;
    }
L_08980448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 3u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980450;
    }
L_08980450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980458;
    }
L_08980458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980460;
    }
L_08980460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980468;
    }
L_08980468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 13u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980470;
    }
L_08980470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 14u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980478;
    }
L_08980478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 15u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980480;
    }
L_08980480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 17u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980488;
    }
L_08980488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 18u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980490;
    }
L_08980490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 19u);
      if (branch_taken) {
          goto L_0898049C;
      }
      goto L_08980498;
    }
L_08980498:
    ctx.gpr[19] = (0u | 0u);
    goto L_0898049C;
L_0898049C:
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08980558;
      }
      goto L_089804A4;
    }
L_089804A4:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089804B0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 241u, 0x089051ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089804B0u) goto L_089804B0;
    return;
L_089804B0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08980558;
      }
      goto L_089804B8;
    }
L_089804B8:
    hot_regs.g31 = (0x089804C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089804C0u) goto L_089804C0;
    return;
L_089804C0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08980558;
      }
      goto L_089804CC;
    }
L_089804CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 1024u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08980558;
      }
      goto L_089804DC;
    }
}
L_089804DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(460)));
    g5 = (0u + static_cast<std::uint32_t>(-1025));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(460), g4);
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(2228)));
    g5 = (0u | 57u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08980550;
      }
      goto L_089804FC;
    }
}
L_089804FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 58u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08980550;
      }
      goto L_0898050C;
    }
L_0898050C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16648));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (0u | 4000u);
    hot_regs.g31 = (0x08980520u);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 399u, 0x0896D898u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980520u) goto L_08980520;
    return;
L_08980520:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g5 = (2238u << 16u);
    hot_regs.g6 = (g4 + g4);
    hot_regs.g7 = (g4 << 8u);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 << 5u);
    g4 = (hot_regs.g7 + g4);
    g5 = (g5 + static_cast<std::uint32_t>(-6992));
    g4 = (g4 + g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(172)));
    g5 = (g5 + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(172), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08980550;
}
L_08980550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980668;
      }
      goto L_08980558;
    }
L_08980558:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980668;
      }
      goto L_08980560;
    }
L_08980560:
    hot_regs.g31 = (0x08980568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980568u) goto L_08980568;
    return;
L_08980568:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08980580u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980580u) goto L_08980580;
    return;
L_08980580:
    hot_regs.g4 = (16736u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08980590u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x08AB437Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980590u) goto L_08980590;
    return;
L_08980590:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (0u | 4u);
      if (branch_taken) {
          goto L_089805C4;
      }
      goto L_08980598;
    }
L_08980598:
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    hot_regs.g4 = (0u | 5u);
      if (branch_taken) {
          goto L_089805B8;
      }
      goto L_089805A0;
    }
L_089805A0:
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    hot_regs.g4 = (0u | 14u);
      if (branch_taken) {
          goto L_089805B8;
      }
      goto L_089805A8;
    }
L_089805A8:
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    hot_regs.g4 = (0u | 15u);
      if (branch_taken) {
          goto L_089805B8;
      }
      goto L_089805B0;
    }
L_089805B0:
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08980600;
      }
      goto L_089805B8;
    }
L_089805B8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1038)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08980600;
      }
      goto L_089805C4;
    }
L_089805C4:
    hot_regs.g31 = (0x089805CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089805CCu) goto L_089805CC;
    return;
L_089805CC:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2288));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089805E4u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 958u, 0x08AB3BE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089805E4u) goto L_089805E4;
    return;
L_089805E4:
    hot_regs.g31 = (0x089805ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089805ECu) goto L_089805EC;
    return;
L_089805EC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089805F8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089805F8u) goto L_089805F8;
    return;
L_089805F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980620;
      }
      goto L_08980600;
    }
L_08980600:
    hot_regs.g31 = (0x08980608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980608u) goto L_08980608;
    return;
L_08980608:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2288));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08980620u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 954u, 0x08AB3B88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980620u) goto L_08980620;
    return;
L_08980620:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08980640;
      }
      goto L_0898062C;
    }
L_0898062C:
    hot_regs.g31 = (0x08980634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980634u) goto L_08980634;
    return;
L_08980634:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08980640u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980640u) goto L_08980640;
    return;
L_08980640:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 12u);
    { const bool branch_taken = ctx.gpr[17] == g4;
    g4 = (0u | 18u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08980654;
      }
      goto L_0898064C;
    }
}
L_0898064C:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08980668;
      }
      goto L_08980654;
    }
L_08980654:
    hot_regs.g31 = (0x0898065Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898065Cu) goto L_0898065C;
    return;
L_0898065C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08980668u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980668u) goto L_08980668;
    return;
L_08980668:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08980688:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2200u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(1672));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08980694:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089806A4u);
    // nop
    hot_regs.g29 = g29;
    goto L_08980688;
}
L_089806A4:
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
L_089806B0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089806C4u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_08980688;
}
L_089806C4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (g2 ^ ctx.gpr[16]);
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089806DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24728));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16640));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08980708u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980708u) goto L_08980708;
    return;
L_08980708:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), 0u);
    g4 = (16256u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(24), 0u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (0u | 1u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
L_08980740:
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
          goto L_08980798;
      }
      goto L_0898075C;
    }
}
L_0898075C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(24728));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08980784;
      }
      goto L_0898076C;
    }
}
L_0898076C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08980784;
      }
      goto L_08980774;
    }
L_08980774:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (ctx.gpr[16] & 1u);
        goto L_08980788;
    }
    goto L_0898077C;
L_0898077C:
    hot_regs.g31 = (0x08980784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980784u) goto L_08980784;
    return;
L_08980784:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_08980788;
L_08980788:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08980798;
      }
      goto L_08980790;
    }
L_08980790:
    hot_regs.g31 = (0x08980798u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980798u) goto L_08980798;
    return;
L_08980798:
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
L_089807AC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089807B4:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g18);
    g17 = (hot_regs.g5 | 0u);
    g18 = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    { const bool branch_taken = g17 == g18;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08980A04;
      }
      goto L_089807EC;
    }
}
L_089807EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), g4);
    g4 = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08980824;
      }
      goto L_0898080C;
    }
}
L_0898080C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g5 = (g5 - ctx.gpr[19]);
    g5 = (g5 < hot_regs.g4 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08980830;
      }
      goto L_08980824;
    }
}
L_08980824:
    hot_regs.g31 = (0x0898082Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898082Cu) goto L_0898082C;
    return;
L_0898082C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    goto L_08980830;
L_08980830:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g4 + ctx.gpr[19]);
    g5 = (g5 - hot_regs.g6);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g5 = (g5 < hot_regs.g7 ? 1u : 0u);
    if (g5 == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
        goto L_08980988;
    }
    goto L_08980850;
}
L_08980850:
    hot_regs.g5 = (hot_regs.g4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08980870;
      }
      goto L_0898085C;
    }
L_0898085C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g19 = (hot_regs.g4 + g5);
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08980880;
      }
      goto L_08980870;
    }
}
L_08980870:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g19 = (hot_regs.g4 + g5);
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
    goto L_08980880;
}
L_08980880:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089808A8;
      }
      goto L_08980888;
    }
L_08980888:
    hot_regs.g31 = (0x08980890u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980890u) goto L_08980890;
    return;
L_08980890:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089808A8;
      }
      goto L_0898089C;
    }
L_0898089C:
    hot_regs.g31 = (0x089808A4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089808A4u) goto L_089808A4;
    return;
L_089808A4:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    goto L_089808A8;
L_089808A8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089808D4u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08980DB8;
}
L_089808D4:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g2);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08980900;
      }
      goto L_089808E4;
    }
}
L_089808E4:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x089808F8u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089808F8u) goto L_089808F8;
    return;
L_089808F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (hot_regs.g2 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08980900;
      }
      goto L_08980900;
    }
L_08980900:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(29))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08980928u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08980DB8;
}
L_08980928:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g2);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08980940;
      }
      goto L_08980938;
    }
}
L_08980938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08980958;
      }
      goto L_08980940;
    }
L_08980940:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08980954u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980954u) goto L_08980954;
    return;
L_08980954:
    ctx.gpr[17] = (hot_regs.g2 + ctx.gpr[17]);
    goto L_08980958;
L_08980958:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08980974;
      }
      goto L_0898096C;
    }
L_0898096C:
    hot_regs.g31 = (0x08980974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980974u) goto L_08980974;
    return;
L_08980974:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), hot_regs.g4);
      if (branch_taken) {
          goto L_08980A04;
      }
      goto L_08980988;
    }
}
L_08980988:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    hot_regs.g31 = (0x089809B0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08980DB8;
}
L_089809B0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g2);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089809CC;
      }
      goto L_089809C0;
    }
}
L_089809C0:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    g18 = (g18 + ctx.gpr[19]);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089809E4;
      }
      goto L_089809CC;
    }
}
L_089809CC:
    hot_regs.g6 = (ctx.gpr[18] - ctx.gpr[21]);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089809DCu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089809DCu) goto L_089809DC;
    return;
L_089809DC:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g18 = (g18 + ctx.gpr[19]);
    ctx.gpr[18] = g18;
    goto L_089809E4;
}
L_089809E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[19]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
    goto L_08980A04;
}
L_08980A04:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08980A34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 135u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x08980A64u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980A64u) goto L_08980A64;
    return;
L_08980A64:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08980A70u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980A70u) goto L_08980A70;
    return;
L_08980A70:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980A84;
      }
      goto L_08980A7C;
    }
L_08980A7C:
    hot_regs.g31 = (0x08980A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980A84u) goto L_08980A84;
    return;
L_08980A84:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(36)));
    if (hot_regs.g4 == 0u) {
    g18 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16640));
    ctx.gpr[18] = g18;
        goto L_08980A9C;
    }
    goto L_08980A94;
}
L_08980A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08980A9C;
      }
      goto L_08980A9C;
    }
L_08980A9C:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08980AACu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980AACu) goto L_08980AAC;
    return;
L_08980AAC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    if (ctx.gpr[18] == ctx.gpr[16]) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
        goto L_08980B50;
    }
    goto L_08980AB8;
L_08980AB8:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    g18 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = g18;
    goto L_08980AC8;
}
L_08980AC8:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08980AF0;
      }
      goto L_08980AD0;
    }
L_08980AD0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08980AF0;
      }
      goto L_08980ADC;
    }
L_08980ADC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    { const bool branch_taken = 0u == 0u;
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08980AC8;
      }
      goto L_08980AF0;
    }
}
L_08980AF0:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g4;
    hot_regs.g6 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08980B38;
      }
      goto L_08980AF8;
    }
L_08980AF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (g4 | 0u);
    if (ctx.gpr[18] == ctx.gpr[19]) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08980B50;
    }
    goto L_08980B08;
}
L_08980B08:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08980B28;
      }
      goto L_08980B18;
    }
}
L_08980B18:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08980B24u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980B24u) goto L_08980B24;
    return;
L_08980B24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08980B28;
L_08980B28:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[19] - ctx.gpr[18]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08980B4C;
      }
      goto L_08980B38;
    }
}
L_08980B38:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(30));
    hot_regs.g31 = (0x08980B4Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089807B4;
}
L_08980B4C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    goto L_08980B50;
L_08980B50:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08980B60;
      }
      goto L_08980B58;
    }
L_08980B58:
    hot_regs.g31 = (0x08980B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980B60u) goto L_08980B60;
    return;
L_08980B60:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 137u);
    hot_regs.g31 = (0x08980B70u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980B70u) goto L_08980B70;
    return;
L_08980B70:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08980B7Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980B7Cu) goto L_08980B7C;
    return;
L_08980B7C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980B90;
      }
      goto L_08980B88;
    }
L_08980B88:
    hot_regs.g31 = (0x08980B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980B90u) goto L_08980B90;
    return;
L_08980B90:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16636));
    hot_regs.g31 = (0x08980B9Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980B9Cu) goto L_08980B9C;
    return;
L_08980B9C:
    hot_regs.g31 = (0x08980BA4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980BA4u) goto L_08980BA4;
    return;
L_08980BA4:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16632));
    hot_regs.g31 = (0x08980BB4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980BB4u) goto L_08980BB4;
    return;
L_08980BB4:
    hot_regs.g31 = (0x08980BBCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980BBCu) goto L_08980BBC;
    return;
L_08980BBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 138u);
    hot_regs.g31 = (0x08980BD4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980BD4u) goto L_08980BD4;
    return;
L_08980BD4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08980BE0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980BE0u) goto L_08980BE0;
    return;
L_08980BE0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980BF4;
      }
      goto L_08980BEC;
    }
L_08980BEC:
    hot_regs.g31 = (0x08980BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980BF4u) goto L_08980BF4;
    return;
L_08980BF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980C40;
      }
      goto L_08980BFC;
    }
L_08980BFC:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (0u | 171u);
    hot_regs.g31 = (0x08980C0Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C0Cu) goto L_08980C0C;
    return;
L_08980C0C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08980C18u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C18u) goto L_08980C18;
    return;
L_08980C18:
    hot_regs.g31 = (0x08980C20u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C20u) goto L_08980C20;
    return;
L_08980C20:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980C34;
      }
      goto L_08980C2C;
    }
L_08980C2C:
    hot_regs.g31 = (0x08980C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C34u) goto L_08980C34;
    return;
L_08980C34:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u < ctx.gpr[18] ? 1u : 0u);
    g4 = (g4 & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08980C40;
}
L_08980C40:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 139u);
    hot_regs.g31 = (0x08980C50u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C50u) goto L_08980C50;
    return;
L_08980C50:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08980C5Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C5Cu) goto L_08980C5C;
    return;
L_08980C5C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980C70;
      }
      goto L_08980C68;
    }
L_08980C68:
    hot_regs.g31 = (0x08980C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C70u) goto L_08980C70;
    return;
L_08980C70:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 175u);
    hot_regs.g31 = (0x08980C80u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C80u) goto L_08980C80;
    return;
L_08980C80:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08980C8Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C8Cu) goto L_08980C8C;
    return;
L_08980C8C:
    hot_regs.g31 = (0x08980C94u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980C94u) goto L_08980C94;
    return;
L_08980C94:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980CA8;
      }
      goto L_08980CA0;
    }
L_08980CA0:
    hot_regs.g31 = (0x08980CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980CA8u) goto L_08980CA8;
    return;
L_08980CA8:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 176u);
    hot_regs.g31 = (0x08980CB8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980CB8u) goto L_08980CB8;
    return;
L_08980CB8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08980CC4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980CC4u) goto L_08980CC4;
    return;
L_08980CC4:
    hot_regs.g31 = (0x08980CCCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980CCCu) goto L_08980CCC;
    return;
L_08980CCC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980CE0;
      }
      goto L_08980CD8;
    }
L_08980CD8:
    hot_regs.g31 = (0x08980CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980CE0u) goto L_08980CE0;
    return;
L_08980CE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 140u);
    hot_regs.g31 = (0x08980CF8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980CF8u) goto L_08980CF8;
    return;
L_08980CF8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08980D04u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980D04u) goto L_08980D04;
    return;
L_08980D04:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08980D18;
      }
      goto L_08980D10;
    }
L_08980D10:
    hot_regs.g31 = (0x08980D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980D18u) goto L_08980D18;
    return;
L_08980D18:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980D90;
      }
      goto L_08980D20;
    }
L_08980D20:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = g17 == 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08980D90;
      }
      goto L_08980D2C;
    }
}
L_08980D2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    if (hot_regs.g4 == 0u) {
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16640));
        goto L_08980D40;
    }
    goto L_08980D38;
L_08980D38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08980D40;
      }
      goto L_08980D40;
    }
L_08980D40:
    hot_regs.g31 = (0x08980D48u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980D48u) goto L_08980D48;
    return;
L_08980D48:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08980D54u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980D54u) goto L_08980D54;
    return;
L_08980D54:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08980D74;
    }
    goto L_08980D74;
}
L_08980D74:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = f13;
        goto L_08980D8C;
    }
    goto L_08980D8C;
}
L_08980D8C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08980D90;
L_08980D90:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
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
L_08980DB0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980DB8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0))))));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08980DCC:
{
    std::uint32_t g5 = hot_regs.g5;
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_target_raw);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08980DF4:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g16);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(56))))));
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08980E14;
      }
      goto L_08980E10;
    }
}
L_08980E10:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    goto L_08980E14;
L_08980E14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08980F98;
      }
      goto L_08980E20;
    }
}
L_08980E20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16588)));
    { const bool branch_taken = g4 == 0u;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08980E40;
      }
      goto L_08980E2C;
    }
}
L_08980E2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 2u);
    if (g4 == hot_regs.g5) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = g4;
        goto L_08980F58;
    }
    goto L_08980E3C;
}
L_08980E3C:
    hot_regs.g4 = (2236u << 16u);
    goto L_08980E40;
L_08980E40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (50454u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08980EAC;
      }
      goto L_08980E68;
    }
}
L_08980E68:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (17608u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g6 = (50426u << 16u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08980EAC;
      }
      goto L_08980E80;
    }
}
L_08980E80:
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g6 = (17658u << 16u);
      if (branch_taken) {
          goto L_08980EAC;
      }
      goto L_08980E94;
    }
L_08980E94:
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g5 = (hot_regs.g5 & 255u);
      if (branch_taken) {
          goto L_08980EB0;
      }
      goto L_08980EA8;
    }
L_08980EA8:
    hot_regs.g5 = (0u | 1u);
    goto L_08980EAC;
L_08980EAC:
    hot_regs.g5 = (hot_regs.g5 & 255u);
    goto L_08980EB0;
L_08980EB0:
    if (hot_regs.g5 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08980F58;
    }
    goto L_08980EB8;
L_08980EB8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08980F18;
      }
      goto L_08980ED4;
    }
L_08980ED4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (17608u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g6 = (50426u << 16u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08980F18;
      }
      goto L_08980EEC;
    }
}
L_08980EEC:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g6 = (17658u << 16u);
      if (branch_taken) {
          goto L_08980F18;
      }
      goto L_08980F00;
    }
L_08980F00:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g5 = (hot_regs.g5 & 255u);
      if (branch_taken) {
          goto L_08980F1C;
      }
      goto L_08980F14;
    }
L_08980F14:
    hot_regs.g5 = (0u | 1u);
    goto L_08980F18;
L_08980F18:
    hot_regs.g5 = (hot_regs.g5 & 255u);
    goto L_08980F1C;
L_08980F1C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08980F54;
      }
      goto L_08980F24;
    }
L_08980F24:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08980F4Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08980F4Cu) goto L_08980F4C;
    return;
L_08980F4C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08980F98;
      }
      goto L_08980F54;
    }
L_08980F54:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08980F58;
L_08980F58:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f13 = std::bit_cast<float>(g4);
    g4 = (16752u << 16u);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f13 - f14;
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_08980F88;
    }
    goto L_08980F88;
}
}
L_08980F88:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089810E4;
      }
      goto L_08980F98;
    }
L_08980F98:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    g5 = (g5 & 2u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08980FE8;
      }
      goto L_08980FA8;
    }
}
L_08980FA8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (16752u << 16u);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = std::bit_cast<float>(0u);
    f13 = hot_regs.f14 - f13;
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08980FD8;
    }
    goto L_08980FD8;
}
}
L_08980FD8:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089810E4;
      }
      goto L_08980FE8;
    }
L_08980FE8:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08981050;
      }
      goto L_08980FF8;
    }
L_08980FF8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (16752u << 16u);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = std::bit_cast<float>(hot_regs.g5);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = hot_regs.f14 + f13;
    ctx.set_fpu_condition((f12 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_0898102C;
    }
    goto L_0898102C;
}
}
L_0898102C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16584)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981048;
      }
      goto L_08981044;
    }
}
L_08981044:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08981048;
L_08981048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898109C;
      }
      goto L_08981050;
    }
L_08981050:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_0898109C;
      }
      goto L_0898105C;
    }
L_0898105C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (16752u << 16u);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = std::bit_cast<float>(hot_regs.g5);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = hot_regs.f14 - f13;
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08981090;
    }
    goto L_08981090;
}
}
L_08981090:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_0898109C;
L_0898109C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = g4 != hot_regs.g5;
    g4 = (15733u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089810E4;
      }
      goto L_089810AC;
    }
}
L_089810AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 49807u);
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16153u << 16u);
    g4 = (g4 | 39322u);
    f12 = hot_regs.f14 - f12;
    f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089810E0;
    }
    goto L_089810E0;
}
}
L_089810E0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089810E4;
L_089810E4:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_08981104;
      }
      goto L_089810F0;
    }
L_089810F0:
    hot_regs.g5 = (hot_regs.g4 & 4u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08981104;
      }
      goto L_089810FC;
    }
L_089810FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    goto L_08981104;
L_08981104:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08981124:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g4 = (15605u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 49807u);
    f13 = std::bit_cast<float>(g4);
    g5 = (2236u << 16u);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g4 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(80)));
    g6 = (16256u << 16u);
    f13 = std::bit_cast<float>(g6);
    g4 = (g4 << 5u);
    g6 = (0u - g4);
    f12 = hot_regs.f14 + f12;
    g4 = (g4 << 2u);
    g6 = (g6 + g4);
    g4 = (g4 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g16);
    g4 = (g6 + g4);
    g16 = (2247u << 16u);
    ctx.set_fpu_condition((f13 < f12));
    g4 = (g4 + g5);
    g16 = (g16 + static_cast<std::uint32_t>(18640));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08981194;
    }
    goto L_08981194;
}
}
L_08981194:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(245)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089811A8;
      }
      goto L_089811A4;
    }
L_089811A4:
    ctx.gpr[17] = (0u | 1u);
    goto L_089811A8;
L_089811A8:
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(246)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089811B8;
      }
      goto L_089811B4;
    }
L_089811B4:
    ctx.gpr[17] = (ctx.gpr[17] | 2u);
    goto L_089811B8;
L_089811B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089811C8;
      }
      goto L_089811C4;
    }
}
L_089811C4:
    ctx.gpr[17] = (ctx.gpr[17] | 4u);
    goto L_089811C8;
L_089811C8:
    hot_regs.g31 = (0x089811D0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089811D0u) goto L_089811D0;
    return;
L_089811D0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089811DC;
      }
      goto L_089811D8;
    }
L_089811D8:
    ctx.gpr[17] = (ctx.gpr[17] | 8u);
    goto L_089811DC;
L_089811DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16576)));
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089811F4;
      }
      goto L_089811E8;
    }
L_089811E8:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16584), hot_regs.g4);
      if (branch_taken) {
          goto L_0898120C;
      }
      goto L_089811F4;
    }
L_089811F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16584)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
        goto L_08981208;
    }
    goto L_08981208;
}
L_08981208:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16584), hot_regs.g4);
    goto L_0898120C;
L_0898120C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16576), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08981214;
L_08981214:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08981228;
      }
      goto L_08981220;
    }
L_08981220:
    hot_regs.g31 = (0x08981228u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08980DF4;
L_08981228:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 56 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08981214;
      }
      goto L_08981238;
    }
}
L_08981238:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_0898124C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x0898126Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898126Cu) goto L_0898126C;
    return;
L_0898126C:
    hot_regs.g31 = (0x08981274u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16572));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08981274u) goto L_08981274;
    return;
L_08981274:
    hot_regs.g31 = (0x0898127Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898127Cu) goto L_0898127C;
    return;
L_0898127C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (2234u << 16u);
    g16 = (2234u << 16u);
    ctx.gpr[19] = (0u | 0u);
    g18 = (g18 + static_cast<std::uint32_t>(4264));
    g16 = (g16 + static_cast<std::uint32_t>(4300));
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    goto L_08981290;
}
L_08981290:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (ctx.gpr[19] << 2u);
    g17 = (g17 + ctx.gpr[18]);
    hot_regs.g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089812B8;
      }
      goto L_089812A4;
    }
}
L_089812A4:
    hot_regs.g4 = (ctx.gpr[19] << 5u);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.g31 = (0x089812B4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089812B4u) goto L_089812B4;
    return;
L_089812B4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g2);
    goto L_089812B8;
L_089812B8:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g19 = (g19 & 65535u);
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 9 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08981290;
      }
      goto L_089812CC;
    }
}
L_089812CC:
    hot_regs.g31 = (0x089812D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089812D4u) goto L_089812D4;
    return;
L_089812D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2247u << 16u);
    hot_regs.g5 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(18640));
    hot_regs.g4 = g4;
    goto L_089812E0;
}
L_089812E0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g5 << 7u);
    hot_regs.g7 = (g5 << 4u);
    g6 = (g6 - hot_regs.g7);
    g6 = (g6 + hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), 0u);
    g5 = (g5 & 65535u);
    g6 = (static_cast<std::int32_t>(g5) < 56 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089812E0;
      }
      goto L_08981308;
    }
}
L_08981308:
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
L_08981324:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g14 = ctx.gpr[14];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g2 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g10 = (g10 & 255u);
    g3 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g14 = (2234u << 16u);
    g12 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g10 = (g10 << 2u);
    g14 = (g14 + static_cast<std::uint32_t>(4264));
    g13 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    g10 = (g10 + g14);
    g2 = (g2 & 255u);
    g10 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    g3 = (g3 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g2);
    g12 = (g12 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g3);
    g13 = (g13 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g12);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x0898138Cu);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g13);
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    ctx.gpr[10] = g10;
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
    ctx.gpr[14] = g14;
    hot_regs.g29 = g29;
    goto L_08983B9C;
}
L_0898138C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08981398:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2236u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(32304));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(48));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    f14 = hot_regs.f15 - f14;
    f16 = f16 - ctx.fpr[17];
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f16; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = f14 + f16;
    ctx.set_fpu_condition((f14 <= f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_089813F0;
      }
      goto L_089813DC;
    }
}
}
L_089813DC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2247u << 16u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    g6 = (g6 + static_cast<std::uint32_t>(18640));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089813F8;
      }
      goto L_089813F0;
    }
}
L_089813F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981468;
      }
      goto L_089813F8;
    }
L_089813F8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (hot_regs.g7 << 7u);
      if (branch_taken) {
          goto L_08981428;
      }
      goto L_08981400;
    }
L_08981400:
{
    std::uint32_t g8 = ctx.gpr[8];
    ctx.gpr[9] = (hot_regs.g7 << 4u);
    g8 = (g8 - ctx.gpr[9]);
    g8 = (g8 + hot_regs.g6);
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g8 == hot_regs.g4;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08981428;
      }
      goto L_08981418;
    }
}
L_08981418:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g7 = (g7 & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(g7) < 56 ? 1u : 0u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089813F8;
      }
      goto L_08981428;
    }
}
L_08981428:
    hot_regs.g4 = (0u | 56u);
    { const bool branch_taken = hot_regs.g7 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0898145C;
      }
      goto L_08981434;
    }
L_08981434:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g7 << 7u);
    g7 = (g7 << 4u);
    g7 = (g4 - g7);
    g7 = (g7 + hot_regs.g6);
    g4 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08981464;
      }
      goto L_08981450;
    }
}
L_08981450:
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_0898145C;
L_0898145C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981468;
      }
      goto L_08981464;
    }
L_08981464:
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(16), 0u);
    goto L_08981468;
L_08981468:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981470:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), hot_regs.g31);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
        goto L_089814AC;
    }
    goto L_089814A0;
}
L_089814A0:
    hot_regs.g31 = (0x089814A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089814A8u) goto L_089814A8;
    return;
L_089814A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_089814AC;
L_089814AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0898154C;
      }
      goto L_089814B8;
    }
}
L_089814B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11224)));
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
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
    hot_regs.g4 = (17174u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
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
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08981504u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08981504u) goto L_08981504;
    return;
L_08981504:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (ctx.fcr31);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3969));
    g8 = (g8 & ctx.gpr[9]);
    ctx.fcr31 = g8 & 0x0181FFFFu;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11224)));
    g5 = (g5 << 4u);
    g4 = (g4 + g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (48716u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
        goto L_08981554;
    }
    goto L_08981544;
}
L_08981544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089816AC;
      }
      goto L_0898154C;
    }
L_0898154C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089816F4;
      }
      goto L_08981554;
    }
L_08981554:
{
    float f12 = hot_regs.f12;
    float f24 = ctx.fpr[24];
    f24 = std::bit_cast<float>(0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f24)) && f12 == f24));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_089816AC;
      }
      goto L_0898156C;
    }
}
L_0898156C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11104)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11108)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11112)));
    ctx.gpr[17] = (hot_regs.g5 & 255u);
    ctx.gpr[18] = (hot_regs.g6 & 255u);
    hot_regs.g31 = (0x0898158Cu);
    ctx.gpr[19] = (hot_regs.g4 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898158Cu) goto L_0898158C;
    return;
L_0898158C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g2 & 65535u);
    g4 = (g4 & 255u);
    f12 = std::bit_cast<float>(g4);
    g5 = (16672u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (15267u << 16u);
    g4 = (g4 | 55050u);
    f14 = std::bit_cast<float>(g5);
    f13 = std::bit_cast<float>(g4);
    g2 = (18804u << 16u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g2 = (g2 | 9214u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11128)));
    hot_regs.f22 = std::bit_cast<float>(g2);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    f12 = f12 + f14;
    g2 = (16320u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.f20 = std::bit_cast<float>(g2);
    g4 = (0u | 1u);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    g5 = (ctx.gpr[17] | 0u);
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08981618u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    goto L_08981324;
}
}
L_08981618:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11224)));
    g5 = (g5 << 4u);
    g4 = (g4 + g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089816AC;
      }
      goto L_0898163C;
    }
}
L_0898163C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089816AC;
      }
      goto L_08981648;
    }
L_08981648:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    g5 = (16840u << 16u);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11116)));
    f12 = std::bit_cast<float>(g5);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11120)));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11124)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11128)));
    g5 = (g6 & 255u);
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), 0u);
    g6 = (g7 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    g7 = (g8 & 255u);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    g4 = (0u | 2u);
    g8 = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    hot_regs.g31 = (0x089816ACu);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_08981324;
}
}
L_089816AC:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089816C4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089816C4u) goto L_089816C4;
    return;
L_089816C4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089816E0;
      }
      goto L_089816CC;
    }
L_089816CC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16596), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16592), std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_089816F4;
      }
      goto L_089816E0;
    }
L_089816E0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (18804u << 16u);
    g4 = (g4 | 9216u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16592), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16596), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089816F4;
}
}
L_089816F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
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
L_0898171C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-304));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (512u << 16u);
    g5 = (g5 & hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089817B4;
      }
      goto L_0898175C;
    }
}
L_0898175C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (8u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089817B4;
      }
      goto L_08981770;
    }
}
L_08981770:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16245u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    g4 = (g4 | 49807u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089817AC;
      }
      goto L_08981790;
    }
}
L_08981790:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089817BC;
      }
      goto L_089817A4;
    }
}
L_089817A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089817CC;
      }
      goto L_089817AC;
    }
L_089817AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089822EC;
      }
      goto L_089817B4;
    }
L_089817B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089822EC;
      }
      goto L_089817BC;
    }
L_089817BC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089817CC;
}
L_089817CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    ctx.gpr[18] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089822EC;
      }
      goto L_089817E0;
    }
}
L_089817E0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08981804;
      }
      goto L_089817EC;
    }
L_089817EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24))))));
    g19 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8672)));
    g4 = (g4 + ctx.gpr[18]);
    g4 = (g4 << 6u);
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 + g4);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08981804;
      }
      goto L_08981804;
    }
}
L_08981804:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    hot_regs.g5 = (0u | 4u);
      if (branch_taken) {
          goto L_08981820;
      }
      goto L_08981810;
    }
L_08981810:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_08981818;
    }
L_08981818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981830;
      }
      goto L_08981820;
    }
L_08981820:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089820B0;
      }
      goto L_08981828;
    }
L_08981828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_08981830;
    }
L_08981830:
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08981844u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_08980DCC;
L_08981844:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981868;
    }
}
L_08981868:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-6864)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08981880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981888;
    }
L_08981888:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 19 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089818A8;
      }
      goto L_08981898;
    }
}
L_08981898:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089818AC;
      }
      goto L_089818A8;
    }
}
L_089818A8:
    ctx.gpr[20] = (0u | 1u);
    goto L_089818AC;
L_089818AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_089818B4;
    }
L_089818B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & hot_regs.g6);
    g4 = (g4 >> 22u);
    g4 = (hot_regs.g5 ^ g4);
    g4 = (g4 & 96u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089818E0;
      }
      goto L_089818D8;
    }
}
L_089818D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089818E4;
      }
      goto L_089818E0;
    }
L_089818E0:
    ctx.gpr[21] = (0u | 1u);
    goto L_089818E4;
L_089818E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 >> 11u);
    g5 = (g5 >> 22u);
    g4 = (g4 ^ g5);
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08981910;
      }
      goto L_0898190C;
    }
}
L_0898190C:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981910;
L_08981910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981918;
    }
L_08981918:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 19 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981954;
      }
      goto L_08981928;
    }
}
L_08981928:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981954;
      }
      goto L_08981938;
    }
}
L_08981938:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089819B0;
      }
      goto L_08981954;
    }
L_08981954:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & hot_regs.g6);
    g4 = (g4 >> 22u);
    g4 = (hot_regs.g5 ^ g4);
    g4 = (g4 & 96u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981980;
      }
      goto L_08981978;
    }
}
L_08981978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981984;
      }
      goto L_08981980;
    }
L_08981980:
    ctx.gpr[21] = (0u | 1u);
    goto L_08981984;
L_08981984:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 >> 11u);
    g5 = (g5 >> 22u);
    g4 = (g4 ^ g5);
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089819B0;
      }
      goto L_089819AC;
    }
}
L_089819AC:
    ctx.gpr[20] = (0u | 1u);
    goto L_089819B0;
L_089819B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_089819B8;
    }
L_089819B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (ctx.gpr[18] << 7u);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 & 512u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089819D4;
      }
      goto L_089819D0;
    }
}
L_089819D0:
    ctx.gpr[20] = (0u | 1u);
    goto L_089819D4;
L_089819D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_089819DC;
    }
L_089819DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 19 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089819FC;
      }
      goto L_089819EC;
    }
}
L_089819EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981A18;
      }
      goto L_089819FC;
    }
}
L_089819FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (ctx.gpr[18] << 7u);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 & 512u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981A18;
      }
      goto L_08981A14;
    }
}
L_08981A14:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981A18;
L_08981A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981A20;
    }
L_08981A20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (ctx.gpr[18] << 8u);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 & 1024u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981A3C;
      }
      goto L_08981A38;
    }
}
L_08981A38:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981A3C;
L_08981A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981A44;
    }
L_08981A44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 19 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981A64;
      }
      goto L_08981A54;
    }
}
L_08981A54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981A80;
      }
      goto L_08981A64;
    }
}
L_08981A64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (ctx.gpr[18] << 8u);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 & 1024u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981A80;
      }
      goto L_08981A7C;
    }
}
L_08981A7C:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981A80;
L_08981A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981A88;
    }
L_08981A88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (ctx.gpr[18] << 9u);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 & 2048u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981AA4;
      }
      goto L_08981AA0;
    }
}
L_08981AA0:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981AA4;
L_08981AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981AAC;
    }
L_08981AAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 19 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981ACC;
      }
      goto L_08981ABC;
    }
}
L_08981ABC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981AE8;
      }
      goto L_08981ACC;
    }
}
L_08981ACC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (ctx.gpr[18] << 9u);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 & 2048u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981AE8;
      }
      goto L_08981AE4;
    }
}
L_08981AE4:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981AE8;
L_08981AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981AF0;
    }
L_08981AF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (16320u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 >> 22u);
    g4 = (g4 & 255u);
    g4 = (static_cast<std::int32_t>(g4) < 17 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981B74;
      }
      goto L_08981B10;
    }
}
L_08981B10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    g4 = (g4 & hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 >> 22u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g5 ^ g4);
    g4 = (g4 & 96u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981B40;
      }
      goto L_08981B38;
    }
}
L_08981B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981B44;
      }
      goto L_08981B40;
    }
L_08981B40:
    ctx.gpr[21] = (0u | 1u);
    goto L_08981B44;
L_08981B44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 >> 11u);
    g5 = (g5 >> 22u);
    g4 = (g4 ^ g5);
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08981B78;
      }
      goto L_08981B6C;
    }
}
L_08981B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981B78;
      }
      goto L_08981B74;
    }
L_08981B74:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981B78;
L_08981B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981B80;
    }
L_08981B80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 19 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981BA0;
      }
      goto L_08981B90;
    }
}
L_08981B90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981C28;
      }
      goto L_08981BA0;
    }
}
L_08981BA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (16320u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 >> 22u);
    g4 = (g4 & 255u);
    g4 = (static_cast<std::int32_t>(g4) < 17 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981C24;
      }
      goto L_08981BC0;
    }
}
L_08981BC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    g4 = (g4 & hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 >> 22u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g5 ^ g4);
    g4 = (g4 & 96u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981BF0;
      }
      goto L_08981BE8;
    }
}
L_08981BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981BF4;
      }
      goto L_08981BF0;
    }
L_08981BF0:
    ctx.gpr[21] = (0u | 1u);
    goto L_08981BF4;
L_08981BF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (16320u << 16u);
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 >> 11u);
    g5 = (g5 >> 22u);
    g4 = (g4 ^ g5);
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08981C28;
      }
      goto L_08981C1C;
    }
}
L_08981C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08981C28;
      }
      goto L_08981C24;
    }
L_08981C24:
    ctx.gpr[20] = (0u | 1u);
    goto L_08981C28;
L_08981C28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981C30;
    }
L_08981C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981C38;
    }
L_08981C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C40;
      }
      goto L_08981C40;
    }
L_08981C40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981C80;
      }
      goto L_08981C50;
    }
}
L_08981C50:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C6C;
      }
      goto L_08981C58;
    }
L_08981C58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-65));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981C78;
      }
      goto L_08981C6C;
    }
}
L_08981C6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
    goto L_08981C78;
}
L_08981C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089822EC;
      }
      goto L_08981C80;
    }
L_08981C80:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981CF0;
      }
      goto L_08981C88;
    }
L_08981C88:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(17)));
    hot_regs.g7 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(18)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(32)));
    g8 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(44)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(48)));
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.gpr[11] = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(42)));
    g2 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(41)));
    g3 = (g8 & 16u);
    ctx.gpr[12] = (g8 & 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g2);
    g8 = (0u < g3 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    g3 = (g8 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    g2 = (16320u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[18]);
    hot_regs.f15 = std::bit_cast<float>(g2);
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(16));
    g8 = (0u | 255u);
    hot_regs.g31 = (0x08981CE8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g3);
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    ctx.gpr[8] = g8;
    goto L_08983B9C;
}
L_08981CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981D58;
      }
      goto L_08981CF0;
    }
L_08981CF0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981D58;
      }
      goto L_08981CF8;
    }
L_08981CF8:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(32)));
    g5 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(44)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(48)));
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.gpr[11] = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(42)));
    g2 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(41)));
    g6 = (g5 & 16u);
    ctx.gpr[3] = (g5 & 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g2);
    g5 = (0u < g6 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[12] = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    g2 = (16320u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[18]);
    hot_regs.f15 = std::bit_cast<float>(g2);
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(16));
    g5 = (0u | 0u);
    g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    hot_regs.g31 = (0x08981D58u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    hot_regs.g2 = g2;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08983B9C;
}
L_08981D58:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (0u | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08981E78;
      }
      goto L_08981D70;
    }
}
L_08981D70:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981E78;
      }
      goto L_08981D78;
    }
L_08981D78:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08981D9C;
      }
      goto L_08981D84;
    }
L_08981D84:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08981D9C;
      }
      goto L_08981D90;
    }
L_08981D90:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08981E38;
      }
      goto L_08981D9C;
    }
L_08981D9C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11136)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (15232u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = ctx.fpr[17]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (hot_regs.g4 & 6u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x08981E2Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08981E2Cu) goto L_08981E2C;
    return;
L_08981E2C:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981E78;
      }
      goto L_08981E38;
    }
L_08981E38:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08981E78u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08981E78u) goto L_08981E78;
    return;
L_08981E78:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981E80;
    }
L_08981E80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981F04;
      }
      goto L_08981E90;
    }
}
L_08981E90:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (15232u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.g4 = (0u | 3u);
    hot_regs.g7 = (0u | 2u);
    hot_regs.g31 = (0x08981EFCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08981EFCu) goto L_08981EFC;
    return;
L_08981EFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981F04;
    }
L_08981F04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981F14;
    }
}
L_08981F14:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981F1C;
    }
L_08981F1C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08981FA0;
      }
      goto L_08981F34;
    }
}
L_08981F34:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (15232u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.g4 = (0u | 4u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08981FA0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08981FA0u) goto L_08981FA0;
    return;
L_08981FA0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089820A8;
      }
      goto L_08981FB8;
    }
}
L_08981FB8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08982044;
      }
      goto L_08981FC0;
    }
L_08981FC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11136)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
        goto L_08981FE4;
    }
    goto L_08981FE0;
L_08981FE0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    goto L_08981FE4;
L_08981FE4:
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g2 = (16752u << 16u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(17)));
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g2);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18)));
    hot_regs.g2 = (16256u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g2 = (16928u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (0u | 2u);
    ctx.gpr[8] = (0u | 128u);
    hot_regs.g31 = (0x0898203Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898203Cu) goto L_0898203C;
    return;
L_0898203C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089820A8;
      }
      goto L_08982044;
    }
L_08982044:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089820A8;
      }
      goto L_0898204C;
    }
L_0898204C:
    hot_regs.g2 = (16752u << 16u);
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g2 = (16256u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g2 = (16928u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089820A8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089820A8u) goto L_089820A8;
    return;
L_089820A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_089820B0;
    }
L_089820B0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9268)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_089820C8;
    }
L_089820C8:
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089820DCu);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_08980DCC;
L_089820DC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    hot_regs.g5 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f20;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    hot_regs.g31 = (0x08982190u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982190u) goto L_08982190;
    return;
L_08982190:
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11224)));
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089822D8;
      }
      goto L_089821EC;
    }
L_089821EC:
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9268)));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g31 = (0x08982208u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982208u) goto L_08982208;
    return;
L_08982208:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11104)));
    g5 = (g5 + static_cast<std::uint32_t>(510));
    f12 = std::bit_cast<float>(g5);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g5 = (16448u << 16u);
    f13 = std::bit_cast<float>(g5);
    { const float fs = f22; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / f13;
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11108)));
    g6 = (g6 + static_cast<std::uint32_t>(510));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11112)));
    g4 = (g4 + static_cast<std::uint32_t>(510));
    f14 = std::bit_cast<float>(g6);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f22; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    f12 = f14 / f13;
    g5 = (g5 & 255u);
    f15 = std::bit_cast<float>(g4);
    g4 = (ctx.gpr[16] + ctx.gpr[18]);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    { const float fs = f22; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f14 / f13;
    g6 = (g6 & 255u);
    g4 = (g4 + static_cast<std::uint32_t>(33));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 & 255u);
    f12 = std::sqrt(hot_regs.f20);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9268)));
    g8 = (16128u << 16u);
    f14 = std::bit_cast<float>(g8);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g8 = (17136u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    f14 = std::bit_cast<float>(0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), 0u);
    f13 = std::bit_cast<float>(g8);
    g8 = (16320u << 16u);
    f15 = std::bit_cast<float>(g8);
    hot_regs.g31 = (0x089822D8u);
    g8 = (0u | 255u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    goto L_08981324;
}
}
L_089822D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089817E0;
      }
      goto L_089822EC;
    }
}
L_089822EC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0898231C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    hot_regs.g4 = (hot_regs.g4 >> 31u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g4 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 6u);
    hot_regs.g4 = (0u | 6u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), hot_regs.g31);
    hot_regs.g31 = (0x08982398u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982398u) goto L_08982398;
    return;
L_08982398:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x089823A4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089823A4u) goto L_089823A4;
    return;
L_089823A4:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x089823B0u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089823B0u) goto L_089823B0;
    return;
L_089823B0:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x089823BCu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089823BCu) goto L_089823BC;
    return;
L_089823BC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(ctx.gpr[16]);
    f13 = std::bit_cast<float>(ctx.gpr[17]);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (16512u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    g5 = (16576u << 16u);
    g4 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[28] = std::bit_cast<float>(g5);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f13));
    g5 = (g4 + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g5);
    g4 = (2234u << 16u);
    f26 = std::bit_cast<float>(g18);
    g4 = (g4 + static_cast<std::uint32_t>(4588));
    g5 = (2234u << 16u);
    f24 = std::bit_cast<float>(ctx.gpr[19]);
    g21 = (2234u << 16u);
    g18 = (2247u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4748));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g4);
    f26 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f26)));
    ctx.gpr[23] = (0u | 0u);
    f24 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f24)));
    g21 = (g21 + static_cast<std::uint32_t>(4264));
    g18 = (g18 + static_cast<std::uint32_t>(18640));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    ctx.gpr[21] = g21;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[24] = f24;
    ctx.fpr[26] = f26;
    goto L_08982438;
}
}
L_08982438:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (ctx.gpr[23] << 7u);
    g5 = (ctx.gpr[23] << 4u);
    g6 = (g6 - g5);
    ctx.gpr[17] = (g6 + ctx.gpr[18]);
    hot_regs.g4 = (0u | 5u);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08982450;
}
L_08982450:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (g4 + g4);
    g7 = (hot_regs.g6 + g7);
    g7 = (g7 + ctx.gpr[18]);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(56))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(68))))));
    ctx.gpr[10] = (hot_regs.g6 + g4);
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g8));
    g8 = (ctx.gpr[10] + ctx.gpr[18]);
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(g9));
    g7 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(81)));
    g9 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(87)));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(g9));
    g9 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(99)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(g7));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(g9));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08982450;
      }
      goto L_089824A4;
    }
}
L_089824A4:
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_089824AC;
    }
L_089824AC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    // nop
      if (branch_taken) {
          goto L_089824C4;
      }
      goto L_089824B8;
    }
L_089824B8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_089824C4;
    }
L_089824C4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    hot_regs.g31 = (0x089824DCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089824DCu) goto L_089824DC;
    return;
L_089824DC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_08982AD0;
      }
      goto L_089824E4;
    }
L_089824E4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    hot_regs.f14 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g4 = (g4 & hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08982540;
      }
      goto L_08982504;
    }
}
L_08982504:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
        goto L_08982544;
    }
    goto L_08982518;
L_08982518:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
        goto L_08982544;
    }
    goto L_0898252C;
L_0898252C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(76)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08982560;
      }
      goto L_08982540;
    }
L_08982540:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    goto L_08982544;
L_08982544:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g4 | 2u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(56))))));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(52)));
    g5 = (g5 & ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089826B8;
      }
      goto L_08982560;
    }
}
L_08982560:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (g5 + static_cast<std::uint32_t>(2000));
    g5 = (g5 < hot_regs.g4 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089825F8;
      }
      goto L_08982578;
    }
}
L_08982578:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    hot_regs.g5 = (g4 & 8u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089825F0;
      }
      goto L_0898258C;
    }
}
L_0898258C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g6 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    hot_regs.g31 = (0x089825DCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089825DCu) goto L_089825DC;
    return;
L_089825DC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
      if (branch_taken) {
          goto L_089825F0;
      }
      goto L_089825E4;
    }
L_089825E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089825F8;
      }
      goto L_089825F0;
    }
}
L_089825F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089825F8;
}
L_089825F8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(56))))));
    hot_regs.g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(52)));
    hot_regs.g6 = (g5 & 16u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    g5 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(101)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0898264C;
      }
      goto L_0898260C;
    }
}
L_0898260C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g6 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(48)));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g7 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(g6));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(g6));
    g6 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(g6));
    g6 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(g7));
    g7 = (0u | 1u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(g7));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_0898264C;
}
}
L_0898264C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089826B8;
      }
      goto L_08982654;
    }
L_08982654:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(58))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(60))))));
    g5 = (g5 - hot_regs.g6);
    if (static_cast<std::int32_t>(g5) < 0) {
    g5 = (0u - g5);
    hot_regs.g5 = g5;
        goto L_08982668;
    }
    goto L_08982668;
}
L_08982668:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(g5);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g5 = (16968u << 16u);
    f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 <= f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089826B4;
      }
      goto L_08982688;
    }
}
}
L_08982688:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(70))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(72))))));
    g5 = (g5 - hot_regs.g6);
    if (static_cast<std::int32_t>(g5) < 0) {
    g5 = (0u - g5);
    hot_regs.g5 = g5;
        goto L_0898269C;
    }
    goto L_0898269C;
}
L_0898269C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(hot_regs.g5);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    ctx.set_fpu_condition((f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089826B8;
      }
      goto L_089826B4;
    }
}
L_089826B4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    goto L_089826B8;
L_089826B8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_089826C0;
    }
L_089826C0:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g5 = (16128u << 16u);
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_089826D8;
    }
L_089826D8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f13 = std::bit_cast<float>(g5);
    g4 = (g4 & 255u);
    g5 = (16256u << 16u);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(g5);
    g5 = (g4 << 16u);
    hot_regs.f22 = hot_regs.f15 / hot_regs.f14;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56))))));
    f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08982728;
      }
      goto L_08982710;
    }
}
}
L_08982710:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g19 = ctx.gpr[19];
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    g19 = (hot_regs.g5 << 16u);
    { const bool branch_taken = 0u == 0u;
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g19) >> 16u));
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08982748;
      }
      goto L_08982728;
    }
}
}
L_08982728:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g19 = ctx.gpr[19];
    f14 = f14 - f12;
    f12 = f14 / f12;
    f12 = hot_regs.f15 - f12;
    { const float fs = hot_regs.f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    g19 = (hot_regs.g5 << 16u);
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g19) >> 16u));
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_08982748;
}
}
L_08982748:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08982770;
      }
      goto L_08982754;
    }
}
L_08982754:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08982790;
      }
      goto L_0898275C;
    }
L_0898275C:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08982768u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982768u) goto L_08982768;
    return;
L_08982768:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08982794;
      }
      goto L_08982770;
    }
L_08982770:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08982790;
      }
      goto L_0898277C;
    }
}
L_0898277C:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08982788u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982788u) goto L_08982788;
    return;
L_08982788:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08982794;
      }
      goto L_08982790;
    }
L_08982790:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08982794;
L_08982794:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0898298C;
      }
      goto L_0898279C;
    }
L_0898279C:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16928u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f13 = std::bit_cast<float>(g4);
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((f12 < f20));
    // nop
    if (ctx.fpu_condition()) {
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
        goto L_089827C0;
    }
    goto L_089827C0;
}
}
L_089827C0:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    { const float fs = f12; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f20 = f12 / hot_regs.f13;
    hot_regs.g6 = (16256u << 16u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    f20 = f20 + hot_regs.f14;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08982800;
      }
      goto L_089827E0;
    }
}
L_089827E0:
    hot_regs.g31 = (0x089827E8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 116u, 0x088907E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089827E8u) goto L_089827E8;
    return;
L_089827E8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16243u << 16u);
    g4 = (g4 | 13107u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08982800;
}
}
L_08982800:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0898280Cu);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898280Cu) goto L_0898280C;
    return;
L_0898280C:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(40)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(28)));
    f14 = f14 - f12;
    hot_regs.g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(48)));
    hot_regs.g7 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f19 = std::bit_cast<float>(hot_regs.g6);
    ctx.gpr[8] = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(50)));
    f0 = std::bit_cast<float>(hot_regs.g7);
    { const float fs = f17; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f2 = std::bit_cast<float>(ctx.gpr[8]);
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    f0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const float fs = f18; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f2 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f2)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    { const float fs = f17; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08982938;
      }
      goto L_0898286C;
    }
}
}
L_0898286C:
{
    float f1 = ctx.fpr[1];
    float f3 = ctx.fpr[3];
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (16329u << 16u);
    g4 = (g4 | 4059u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    f16 = std::bit_cast<float>(g4);
    f15 = f15 / f16;
    g4 = (16256u << 16u);
    hot_regs.g5 = (16128u << 16u);
    g6 = (15733u << 16u);
    g6 = (g6 | 49807u);
    g7 = (16051u << 16u);
    g7 = (g7 | 13107u);
    g8 = (15897u << 16u);
    g8 = (g8 | 39322u);
    f1 = std::bit_cast<float>(hot_regs.g5);
    f3 = std::bit_cast<float>(g6);
    f16 = std::bit_cast<float>(g4);
    f15 = f16 - f15;
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(g7);
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f15; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = f15 + f1;
    ctx.fpr[4] = f15 - f1;
    { const float fs = ctx.fpr[4]; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    f1 = std::bit_cast<float>(g8);
    f16 = f16 - f3;
    ctx.set_fpu_condition((f1 <= f16));
    // nop
    if (!ctx.fpu_condition()) {
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f1));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.fpr[1] = f1;
    ctx.fpr[3] = f3;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
        goto L_089828E8;
    }
    goto L_089828E8;
}
}
L_089828E8:
    ctx.fpr[19] = ctx.fpr[19] / hot_regs.f20;
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[0] = ctx.fpr[0] / hot_regs.f20;
    ctx.fpr[2] = ctx.fpr[2] / hot_regs.f20;
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    { const float fs = ctx.fpr[17]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    hot_regs.g31 = (0x08982930u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 68u, 0x08AA8C8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982930u) goto L_08982930;
    return;
L_08982930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898298C;
      }
      goto L_08982938;
    }
L_08982938:
    hot_regs.f15 = ctx.fpr[19] / hot_regs.f20;
    hot_regs.g4 = (16800u << 16u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[16] = ctx.fpr[0] / hot_regs.f20;
    ctx.fpr[2] = ctx.fpr[2] / hot_regs.f20;
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f15));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[17]; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    { const float fs = hot_regs.f22; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g31 = (0x0898298Cu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 81u, 0x08AA9084u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898298Cu) goto L_0898298C;
    return;
L_0898298C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_08982998;
    }
L_08982998:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
        goto L_089829B8;
    }
    goto L_089829A4;
}
L_089829A4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089829CC;
      }
      goto L_089829AC;
    }
L_089829AC:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_089829D0;
      }
      goto L_089829B8;
    }
L_089829B8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089829CC;
      }
      goto L_089829C0;
    }
L_089829C0:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_089829D0;
      }
      goto L_089829CC;
    }
L_089829CC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    goto L_089829D0;
L_089829D0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08982AC8;
      }
      goto L_089829D8;
    }
L_089829D8:
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[21]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x089829F0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089829F0u) goto L_089829F0;
    return;
L_089829F0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[26];
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = hot_regs.f13 - ctx.fpr[24];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f15 = hot_regs.f15 / hot_regs.f14;
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g6 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    hot_regs.g7 = (hot_regs.g7 << 16u);
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f12;
    hot_regs.f13 = ctx.fpr[24] + hot_regs.f13;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (ctx.lo);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    ctx.gpr[8] = (0u | 255u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 16u));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g31 = (0x08982AB8u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 68u, 0x08AA8C8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982AB8u) goto L_08982AB8;
    return;
L_08982AB8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(20));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089829D8;
      }
      goto L_08982AC8;
    }
}
L_08982AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08982AE4;
      }
      goto L_08982AD0;
    }
L_08982AD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g4 | 2u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(56))))));
    g4 = (g4 & ctx.gpr[30]);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08982AE4;
}
L_08982AE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    g4 = (g23 + static_cast<std::uint32_t>(1));
    g23 = (g4 << 16u);
    g23 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g23) >> 16u));
    g4 = (static_cast<std::int32_t>(g23) < 56 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08982438;
      }
      goto L_08982AFC;
    }
}
L_08982AFC:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08982B08u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982B08u) goto L_08982B08;
    return;
L_08982B08:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08982B14u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982B14u) goto L_08982B14;
    return;
L_08982B14:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08982B20u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982B20u) goto L_08982B20;
    return;
L_08982B20:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08982B2Cu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982B2Cu) goto L_08982B2C;
    return;
L_08982B2C:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08982B38u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982B38u) goto L_08982B38;
    return;
L_08982B38:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x08982B44u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982B44u) goto L_08982B44;
    return;
L_08982B44:
{
    std::uint32_t g21 = ctx.gpr[21];
    hot_regs.g4 = (17152u << 16u);
    g21 = (2247u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[20] = (0u | 5u);
    g21 = (g21 + static_cast<std::uint32_t>(18608));
    ctx.gpr[21] = g21;
    goto L_08982B5C;
}
L_08982B5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (ctx.gpr[16] << 7u);
    g4 = (ctx.gpr[16] << 4u);
    g17 = (g17 - g4);
    g4 = (g17 + ctx.gpr[18]);
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08982CFC;
      }
      goto L_08982B78;
    }
}
L_08982B78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(56))))));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08982CFC;
      }
      goto L_08982B88;
    }
}
L_08982B88:
    ctx.gpr[19] = (0u | 0u);
    goto L_08982B8C;
L_08982B8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + ctx.gpr[19]);
    g4 = (g4 + ctx.gpr[18]);
    hot_regs.g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08982CE4;
      }
      goto L_08982BA0;
    }
}
L_08982BA0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(101)));
    { const bool branch_taken = g5 == 0u;
    g5 = (ctx.gpr[22] - ctx.gpr[19]);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08982CE4;
      }
      goto L_08982BAC;
    }
}
L_08982BAC:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g5 = (ctx.gpr[20] - ctx.gpr[19]);
    hot_regs.f12 = hot_regs.f12 / ctx.fpr[28];
    hot_regs.g6 = (ctx.gpr[19] + ctx.gpr[19]);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + ctx.gpr[18]);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(58))))));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(82)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(70))))));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(hot_regs.g7));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(88)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(60))))));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(72))))));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (0u | 255u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f13 = hot_regs.f13 / ctx.fpr[28];
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(hot_regs.g6));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(83)));
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(89)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[10]));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g2 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g2) >> 8u));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g7 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g6 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g6 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (ctx.lo);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08982CE4u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 477u, 0x08AEDF88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982CE4u) goto L_08982CE4;
    return;
L_08982CE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (g19 + static_cast<std::uint32_t>(1));
    g19 = (g4 << 16u);
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g19) >> 16u));
    g4 = (static_cast<std::int32_t>(g19) < 5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08982B8C;
      }
      goto L_08982CFC;
    }
}
L_08982CFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (g4 << 16u);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    g4 = (static_cast<std::int32_t>(g16) < 56 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08982B5C;
      }
      goto L_08982D14;
    }
}
L_08982D14:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08982D20u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982D20u) goto L_08982D20;
    return;
L_08982D20:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08982D2Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982D2Cu) goto L_08982D2C;
    return;
L_08982D2C:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08982D38u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982D38u) goto L_08982D38;
    return;
L_08982D38:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08982D80:
{
    float f26 = ctx.fpr[26];
{
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-224));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f26));
    f26 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), g21);
    g21 = (2247u << 16u);
    ctx.set_fpu_condition((hot_regs.f12 <= f26));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), hot_regs.g31);
    { const bool branch_taken = !ctx.fpu_condition();
    g21 = (g21 + static_cast<std::uint32_t>(18640));
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08982E20;
      }
      goto L_08982DDC;
    }
}
}
L_08982DDC:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-65));
    hot_regs.g6 = (hot_regs.g5 << 7u);
    goto L_08982DE8;
L_08982DE8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g5 << 4u);
    g6 = (g6 - g7);
    g6 = (g6 + ctx.gpr[21]);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(56))))));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g7 = (g7 & hot_regs.g4);
    g5 = (g5 << 16u);
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g7));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (static_cast<std::int32_t>(g5) < 56 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g6 = (g5 << 7u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08982DE8;
      }
      goto L_08982E18;
    }
}
L_08982E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983268;
      }
      goto L_08982E20;
    }
L_08982E20:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08982E2Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982E2Cu) goto L_08982E2C;
    return;
L_08982E2C:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08982E38u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982E38u) goto L_08982E38;
    return;
L_08982E38:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08982E44u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982E44u) goto L_08982E44;
    return;
L_08982E44:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08982E50u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982E50u) goto L_08982E50;
    return;
L_08982E50:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08982E5Cu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982E5Cu) goto L_08982E5C;
    return;
L_08982E5C:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08982E68u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982E68u) goto L_08982E68;
    return;
L_08982E68:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4264));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x08982E80u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982E80u) goto L_08982E80;
    return;
L_08982E80:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), g4);
    g4 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (16800u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[17] = (0u | 0u);
    g4 = (16988u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(48));
    g4 = (16192u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(80));
    g4 = (16256u << 16u);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(96));
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(36));
    hot_regs.g4 = g4;
    goto L_08982ED4;
}
L_08982ED4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (ctx.gpr[17] << 7u);
    hot_regs.g5 = (ctx.gpr[17] << 4u);
    g16 = (g4 - hot_regs.g5);
    g16 = (g16 + ctx.gpr[21]);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982EF0;
    }
}
L_08982EF0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    // nop
      if (branch_taken) {
          goto L_08982F08;
      }
      goto L_08982EFC;
    }
L_08982EFC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982F08;
    }
L_08982F08:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982F14;
    }
L_08982F14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08982F84;
      }
      goto L_08982F24;
    }
}
L_08982F24:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 & 15u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08982FD8;
      }
      goto L_08982F38;
    }
}
L_08982F38:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    hot_regs.g31 = (0x08982F68u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982F68u) goto L_08982F68;
    return;
L_08982F68:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08982FD8;
      }
      goto L_08982F70;
    }
L_08982F70:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    f12 = f12 - hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08982FD8;
      }
      goto L_08982F84;
    }
}
L_08982F84:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    hot_regs.g31 = (0x08982FB4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08982FB4u) goto L_08982FB4;
    return;
L_08982FB4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08982FD8;
      }
      goto L_08982FBC;
    }
L_08982FBC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(56))))));
    f12 = f12 - hot_regs.f13;
    g4 = (g4 | 64u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08982FD8;
}
}
L_08982FD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982FE8;
    }
}
L_08982FE8:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((hot_regs.f20 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08982FFC;
    }
L_08982FFC:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(124)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    f12 = f12 - hot_regs.f20;
    ctx.set_fpu_condition((hot_regs.f13 < f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_0898301C;
    }
}
L_0898301C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08983054u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983054u) goto L_08983054;
    return;
L_08983054:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_0898305C;
    }
L_0898305C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[30] < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f12 = f12;
        goto L_08983074;
    }
    goto L_08983074;
}
L_08983074:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08983208;
      }
      goto L_08983088;
    }
L_08983088:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.g4 = (16128u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089830B0;
    }
    goto L_089830A8;
}
L_089830A8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_089830DC;
      }
      goto L_089830B0;
    }
L_089830B0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f22 = hot_regs.f22;
    f13 = f13 - f12;
    f12 = f13 / f12;
    f12 = f22 - f12;
    ctx.set_fpu_condition((f12 <= f22));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089830CC;
    }
    goto L_089830CC;
}
L_089830CC:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_089830DC;
    }
    goto L_089830DC;
L_089830DC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f14 = ctx.fpr[24] - hot_regs.f20;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    hot_regs.g4 = (17254u << 16u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17279u << 16u);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / ctx.fpr[24];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (16384u << 16u);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    hot_regs.f13 = ctx.fpr[16] / hot_regs.f13;
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g6);
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g6 << 16u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const float fs = hot_regs.f15; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    hot_regs.g5 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    ctx.gpr[16] = (hot_regs.g5 & 255u);
    hot_regs.g5 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    ctx.gpr[22] = (hot_regs.g5 & 255u);
    hot_regs.g5 = (ctx.lo);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g31 = (0x089831BCu);
    ctx.gpr[23] = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 122u, 0x08890830u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089831BCu) goto L_089831BC;
    return;
L_089831BC:
    hot_regs.g4 = (18303u << 16u);
    ctx.fpr[17] = hot_regs.f22 / ctx.fpr[0];
    ctx.gpr[9] = (hot_regs.g4 | 64000u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[9]);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g31 = (0x089831F4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 141u, 0x08AA9B20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089831F4u) goto L_089831F4;
    return;
L_089831F4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    goto L_08983208;
}
L_08983208:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (g4 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    hot_regs.g5 = (50298u << 16u);
    g4 = (static_cast<std::int32_t>(g17) < 56 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08982ED4;
      }
      goto L_08983224;
    }
}
L_08983224:
    hot_regs.g31 = (0x0898322Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 59u, 0x08AA8BDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898322Cu) goto L_0898322C;
    return;
L_0898322C:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08983238u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983238u) goto L_08983238;
    return;
L_08983238:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08983244u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983244u) goto L_08983244;
    return;
L_08983244:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08983250u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983250u) goto L_08983250;
    return;
L_08983250:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x0898325Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898325Cu) goto L_0898325C;
    return;
L_0898325C:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08983268u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983268u) goto L_08983268;
    return;
L_08983268:
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
L_089832B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11224)));
    g6 = (g6 << 4u);
    g5 = (48460u << 16u);
    g4 = (g4 + g6);
    g5 = (g5 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08983B70;
      }
      goto L_08983304;
    }
}
L_08983304:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11224)));
    g5 = (g5 << 4u);
    g4 = (g4 + g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (16000u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (16025u << 16u);
    f13 = f13 - hot_regs.f12;
    g4 = (g4 | 39322u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f13 < hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
        goto L_0898334C;
    }
    goto L_0898334C;
}
}
L_0898334C:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    f13 = hot_regs.f22 - f13;
    g4 = (16469u << 16u);
    g4 = (g4 | 20447u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8396)));
    hot_regs.f14 = std::bit_cast<float>(g4);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7900)));
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8348)));
    f15 = f24 - f15;
    f16 = f24 - f16;
    f17 = f24 - f17;
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08983B70;
      }
      goto L_08983394;
    }
}
}
L_08983394:
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11116)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11104)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[18] = (hot_regs.g5 & 255u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11120)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11108)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[19] = (hot_regs.g5 & 255u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11124)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11112)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[20] = (hot_regs.g5 & 255u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11224)));
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16928u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g5);
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
    hot_regs.g5 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(32304));
    hot_regs.g31 = (0x0898344Cu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0898344Cu) goto L_0898344C;
    return;
L_0898344C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (16579u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 13107u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11224)));
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(2));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g6);
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12016));
    hot_regs.g6 = (hot_regs.g6 + ctx.gpr[16]);
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(hot_regs.g7));
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(hot_regs.g7));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[17] = (2238u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-272));
    hot_regs.g7 = (hot_regs.g4 + ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[18] & 255u);
    hot_regs.g5 = (ctx.gpr[19] & 255u);
    hot_regs.g6 = (ctx.gpr[20] & 255u);
    ctx.gpr[8] = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g7 = (hot_regs.g7 << 3u);
    ctx.gpr[9] = (hot_regs.g7 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[9]);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[17]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (16880u << 16u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[17]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = ctx.fpr[18] + hot_regs.f22;
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g7 = (hot_regs.g7 << 3u);
    ctx.gpr[9] = (hot_regs.g7 + hot_regs.g7);
    ctx.gpr[9] = (hot_regs.g7 + ctx.gpr[9]);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[9] = (ctx.gpr[9] + hot_regs.g7);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] + hot_regs.g7);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = hot_regs.f13 - hot_regs.f14;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[17]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = ctx.fpr[18] + hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (17008u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    hot_regs.f13 = hot_regs.f13 + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[18]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    hot_regs.f13 = hot_regs.f13 + ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[0] + ctx.fpr[18];
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = ctx.fpr[18] - hot_regs.f14;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[17] + hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    hot_regs.f13 = hot_regs.f13 + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[18]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    hot_regs.f13 = hot_regs.f13 - ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[0] + ctx.fpr[16];
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = ctx.fpr[16] + hot_regs.f14;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[17] + hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + hot_regs.g7);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + hot_regs.g7);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 20u);
    ctx.gpr[9] = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (15177u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 4059u);
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (16672u << 16u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (15692u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g2 = (0u | 0u);
    goto L_08983808;
L_08983808:
{
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g28 = ctx.gpr[28];
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8452)));
    g12 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g3 = (g3 + g3);
    g3 = (g3 + ctx.gpr[16]);
    aot_mem.aot_store16(g3 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g12));
    g13 = (g12 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g3 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g13));
    ctx.gpr[14] = (g12 + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store16(g3 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[14]));
    aot_mem.aot_store16(g3 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g12));
    g12 = (g12 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g3 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g12));
    aot_mem.aot_store16(g3 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g13));
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7660)));
    g3 = (g3 + hot_regs.g2);
    g3 = (g3 & 2047u);
    f19 = std::bit_cast<float>(g3);
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    g12 = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[11]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g12 = (g12 + static_cast<std::uint32_t>(60));
    f17 = std::bit_cast<float>(g12);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    g12 = (ctx.lo);
    g12 = (g12 + static_cast<std::uint32_t>(30));
    f18 = std::bit_cast<float>(g12);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    if (static_cast<std::int32_t>(g3) < 0) {
    f19 = f19 + hot_regs.f13;
    ctx.gpr[3] = g3;
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
        goto L_08983888;
    }
    goto L_08983888;
}
}
L_08983888:
{
    float f19 = ctx.fpr[19];
{
    std::uint32_t g3 = ctx.gpr[3];
    { const float fs = f19; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    g3 = (std::bit_cast<std::uint32_t>(f19));
    ctx.set_vfpu_scalar_bits_ct<0u>(g3);
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
    g3 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(g3);
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + f19;
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    g3 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[3] = g3;
    ctx.fpr[19] = f19;
        goto L_089838C8;
    }
    goto L_089838C0;
}
}
L_089838C0:
    hot_regs.f22 = hot_regs.f22 - ctx.fpr[16];
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    goto L_089838C8;
L_089838C8:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f2 = ctx.fpr[2];
    float f3 = ctx.fpr[3];
    float f4 = ctx.fpr[4];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g12 = (0u | 255u);
    g3 = (g3 << 3u);
    g13 = (g3 + g3);
    g3 = (g3 + g13);
    g3 = (g3 + g17);
    aot_mem.aot_store8(g3 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(g3 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(g3 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(g3 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g12));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const float fs = f17; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f4 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g3 = (g3 << 3u);
    f2 = f1 + f2;
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    { const float fs = f18; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    g13 = (g3 + g3);
    { const float fs = f18; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    g3 = (g3 + g13);
    f3 = f4 + f3;
    g3 = (g3 + g17);
    f1 = ctx.fpr[5] + hot_regs.f22;
    f0 = f2 + f0;
    f19 = f3 - f19;
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f0));
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f19));
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f1));
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g3 = (g3 << 3u);
    g13 = (g3 + g3);
    g3 = (g3 + g13);
    g3 = (g3 + g7);
    aot_mem.aot_store8(g3 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(g3 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(g3 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(g3 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g12));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const float fs = f17; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    { const float fs = f17; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g3 = (g3 << 3u);
    f2 = f1 + f2;
    f4 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g12 = (g3 + g3);
    { const float fs = f18; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    g3 = (g3 + g12);
    f17 = f3 + f17;
    g3 = (g3 + g7);
    f1 = f4 + hot_regs.f22;
    { const float fs = f18; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f19 = f2 - f0;
    f17 = f17 + f18;
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f19));
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f17));
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f1));
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g3 = (g3 << 3u);
    g12 = (g3 + g3);
    g3 = (g3 + g12);
    g3 = (g3 + g17);
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g3 = (g3 << 3u);
    g12 = (g3 + g3);
    g3 = (g3 + g12);
    g3 = (g3 + g17);
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g3 = (g3 << 3u);
    g12 = (g3 + g3);
    g3 = (g3 + g12);
    g3 = (g3 + g7);
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g3 = (g3 << 3u);
    g12 = (g3 + g3);
    g3 = (g3 + g12);
    g3 = (g3 + g7);
    aot_mem.aot_store32(g3 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8452)));
    g12 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g3 = (g3 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8452), g3);
    g3 = (g12 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8456), g3);
    g8 = (g8 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1440));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(970));
    g3 = (static_cast<std::int32_t>(g8) < 20 ? 1u : 0u);
    { const bool branch_taken = g3 != 0u;
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(900));
    ctx.gpr[3] = g3;
    ctx.gpr[8] = g8;
    ctx.gpr[12] = g12;
    ctx.gpr[13] = g13;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    ctx.fpr[3] = f3;
    ctx.fpr[4] = f4;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08983808;
      }
      goto L_08983A50;
    }
}
}
L_08983A50:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08983A5Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983A5Cu) goto L_08983A5C;
    return;
L_08983A5C:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08983A68u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983A68u) goto L_08983A68;
    return;
L_08983A68:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08983A74u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983A74u) goto L_08983A74;
    return;
L_08983A74:
    hot_regs.g4 = (0u | 13u);
    hot_regs.g31 = (0x08983A80u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983A80u) goto L_08983A80;
    return;
L_08983A80:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08983A8Cu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983A8Cu) goto L_08983A8C;
    return;
L_08983A8C:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08983A98u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983A98u) goto L_08983A98;
    return;
L_08983A98:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08983AA4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983AA4u) goto L_08983AA4;
    return;
L_08983AA4:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4264));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x08983ABCu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983ABCu) goto L_08983ABC;
    return;
L_08983ABC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08983AD0u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983AD0u) goto L_08983AD0;
    return;
L_08983AD0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08983AF0;
      }
      goto L_08983AD8;
    }
L_08983AD8:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    hot_regs.g4 = (0u | 3u);
    hot_regs.g31 = (0x08983AE8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983AE8u) goto L_08983AE8;
    return;
L_08983AE8:
    hot_regs.g31 = (0x08983AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983AF0u) goto L_08983AF0;
    return;
L_08983AF0:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08983AFCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983AFCu) goto L_08983AFC;
    return;
L_08983AFC:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08983B08u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983B08u) goto L_08983B08;
    return;
L_08983B08:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08983B14u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983B14u) goto L_08983B14;
    return;
L_08983B14:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08983B20u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983B20u) goto L_08983B20;
    return;
L_08983B20:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08983B2Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983B2Cu) goto L_08983B2C;
    return;
L_08983B2C:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08983B38u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983B38u) goto L_08983B38;
    return;
L_08983B38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (2236u << 16u);
    g5 = (g4 + static_cast<std::uint32_t>(29552));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 >> 8u);
    hot_regs.g7 = (18176u << 16u);
    g5 = (g5 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08983B70;
}
L_08983B70:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08983B9C:
{
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g14 = ctx.gpr[14];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    g2 = (2236u << 16u);
    g14 = (g2 + static_cast<std::uint32_t>(32304));
    g14 = (g14 + static_cast<std::uint32_t>(48));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(0)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    f16 = f16 - f17;
    f18 = f18 - ctx.fpr[19];
    { const float fs = f16; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f18; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    ctx.gpr[3] = (g7 & 255u);
    g2 = (ctx.gpr[8] & 255u);
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    f16 = f16 + f17;
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    ctx.gpr[12] = (g6 & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[13] = (g5 & 255u);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((f16 <= f18));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    g7 = (g7 & 255u);
    g6 = (g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const bool branch_taken = !ctx.fpu_condition();
    g5 = (g5 & 255u);
    hot_regs.g2 = g2;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[14] = g14;
    hot_regs.g29 = g29;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_08983C20;
      }
      goto L_08983C10;
    }
}
}
L_08983C10:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08983C28;
      }
      goto L_08983C18;
    }
L_08983C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983CB0;
      }
      goto L_08983C20;
    }
L_08983C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983C28;
    }
L_08983C28:
    { const std::uint32_t vfpu_address = ctx.gpr[14] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.gpr[14] = (16908u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[14]);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08983C84;
      }
      goto L_08983C64;
    }
L_08983C64:
{
    std::uint32_t g14 = ctx.gpr[14];
    g14 = (16968u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(g14);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g14 = (16752u << 16u);
    ctx.gpr[14] = g14;
      if (branch_taken) {
          goto L_08983C8C;
      }
      goto L_08983C7C;
    }
}
L_08983C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983CB0;
      }
      goto L_08983C84;
    }
L_08983C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983C8C;
    }
L_08983C8C:
{
    float f16 = ctx.fpr[16];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g2 = hot_regs.g2;
    f16 = ctx.fpr[17] - f16;
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[14]);
    f16 = f16 / ctx.fpr[18];
    f19 = std::bit_cast<float>(g2);
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    { const float fs = f19; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    g2 = (std::bit_cast<std::uint32_t>(f16));
    g2 = (g2 & 255u);
    hot_regs.g2 = g2;
    ctx.fpr[16] = f16;
    ctx.fpr[19] = f19;
    goto L_08983CB0;
}
}
L_08983CB0:
{
    std::uint32_t g14 = ctx.gpr[14];
    g14 = (2247u << 16u);
    ctx.gpr[15] = (0u | 0u);
    ctx.gpr[25] = (0u | 1u);
    ctx.gpr[24] = (0u | 56u);
    g14 = (g14 + static_cast<std::uint32_t>(18640));
    ctx.gpr[14] = g14;
    goto L_08983CC4;
}
L_08983CC4:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_08983CF4;
      }
      goto L_08983CCC;
    }
L_08983CCC:
{
    std::uint32_t g25 = ctx.gpr[25];
    ctx.gpr[16] = (ctx.gpr[15] << 4u);
    g25 = (g25 - ctx.gpr[16]);
    g25 = (g25 + ctx.gpr[14]);
    g25 = (aot_mem.aot_load32(g25 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g25 == hot_regs.g4;
    // nop
    ctx.gpr[25] = g25;
      if (branch_taken) {
          goto L_08983CF4;
      }
      goto L_08983CE4;
    }
}
L_08983CE4:
{
    std::uint32_t g15 = ctx.gpr[15];
    g15 = (g15 + static_cast<std::uint32_t>(1));
    g15 = (g15 & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(g15) < 56 ? 1u : 0u);
    ctx.gpr[15] = g15;
      if (branch_taken) {
          goto L_08983CC4;
      }
      goto L_08983CF4;
    }
}
L_08983CF4:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[24];
    // nop
      if (branch_taken) {
          goto L_08983DD4;
      }
      goto L_08983CFC;
    }
L_08983CFC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08983D10;
      }
      goto L_08983D04;
    }
L_08983D04:
    ctx.gpr[15] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (0u | 1u);
      if (branch_taken) {
          goto L_08983D18;
      }
      goto L_08983D10;
    }
L_08983D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983D18;
    }
L_08983D18:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_08983D48;
      }
      goto L_08983D20;
    }
L_08983D20:
{
    std::uint32_t g25 = ctx.gpr[25];
    ctx.gpr[16] = (ctx.gpr[15] << 4u);
    g25 = (g25 - ctx.gpr[16]);
    g25 = (g25 + ctx.gpr[14]);
    g25 = (aot_mem.aot_load32(g25 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g25 == 0u;
    // nop
    ctx.gpr[25] = g25;
      if (branch_taken) {
          goto L_08983D48;
      }
      goto L_08983D38;
    }
}
L_08983D38:
{
    std::uint32_t g15 = ctx.gpr[15];
    g15 = (g15 + static_cast<std::uint32_t>(1));
    g15 = (g15 & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(g15) < 56 ? 1u : 0u);
    ctx.gpr[15] = g15;
      if (branch_taken) {
          goto L_08983D18;
      }
      goto L_08983D48;
    }
}
L_08983D48:
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[24];
    ctx.gpr[25] = (ctx.gpr[15] << 7u);
      if (branch_taken) {
          goto L_08983D58;
      }
      goto L_08983D50;
    }
L_08983D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983D58;
    }
L_08983D58:
{
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g24 = ctx.gpr[24];
    std::uint32_t g25 = ctx.gpr[25];
    g15 = (g15 << 4u);
    g25 = (g25 - g15);
    g24 = (g25 + ctx.gpr[14]);
    g15 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g24 + static_cast<std::uint32_t>(56))))));
    g15 = (g15 | 2u);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g15));
    g15 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g24 + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    g15 = (g15 | 4u);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g15));
    g15 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g24 + static_cast<std::uint32_t>(56))))));
    g16 = (0u + static_cast<std::uint32_t>(-65));
    g15 = (g15 & g16);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g15));
    g15 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g24 + static_cast<std::uint32_t>(56))))));
    g16 = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(20), 0u);
    g15 = (g15 & g16);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g15));
    g15 = (0u | 0u);
    ctx.gpr[15] = g15;
    ctx.gpr[16] = g16;
    ctx.gpr[24] = g24;
    ctx.gpr[25] = g25;
    goto L_08983DA8;
}
L_08983DA8:
{
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (ctx.gpr[25] + g15);
    g15 = (g15 + static_cast<std::uint32_t>(1));
    g16 = (g16 + ctx.gpr[14]);
    g15 = (g15 << 16u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    g15 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g15) >> 16u));
    g16 = (static_cast<std::int32_t>(g15) < 6 ? 1u : 0u);
    { const bool branch_taken = g16 != 0u;
    // nop
    ctx.gpr[15] = g15;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08983DA8;
      }
      goto L_08983DCC;
    }
}
L_08983DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08983DF4;
      }
      goto L_08983DD4;
    }
L_08983DD4:
{
    std::uint32_t g14 = ctx.gpr[14];
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g24 = ctx.gpr[24];
    g24 = (g15 << 7u);
    g15 = (g15 << 4u);
    g24 = (g24 - g15);
    g24 = (g24 + g14);
    g14 = (aot_mem.aot_load8(g24 + static_cast<std::uint32_t>(52)));
    g14 = (g14 | hot_regs.g2);
    { const bool branch_taken = g14 == 0u;
    // nop
    ctx.gpr[14] = g14;
    ctx.gpr[15] = g15;
    ctx.gpr[24] = g24;
      if (branch_taken) {
          goto L_08983E38;
      }
      goto L_08983DF4;
    }
}
L_08983DF4:
{
    std::uint32_t g24 = ctx.gpr[24];
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(16), hot_regs.g4);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[13]));
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[12]));
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[3]));
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(hot_regs.g2));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g24 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08983E40;
      }
      goto L_08983E24;
    }
}
L_08983E24:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11132)));
    { const float fs = f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08983E48;
      }
      goto L_08983E38;
    }
}
L_08983E38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08983EB8;
      }
      goto L_08983E40;
    }
L_08983E40:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08983E48;
}
L_08983E48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g24 = ctx.gpr[24];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g24 + static_cast<std::uint32_t>(56))))));
    g9 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & g9);
    g7 = (g7 & 1u);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f14));
    g9 = (0u | 1u);
    g4 = (g4 | g7);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(g9));
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g24 + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    g7 = (0u + static_cast<std::uint32_t>(-9));
    g6 = (g6 & 1u);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[11]));
    g4 = (g4 & g7);
    g6 = (g6 << 3u);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[8]));
    g4 = (g4 | g6);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g24 + static_cast<std::uint32_t>(56))))));
    g6 = (0u + static_cast<std::uint32_t>(-33));
    g5 = (g5 & 1u);
    g4 = (g4 & g6);
    g5 = (g5 << 5u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g24 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    goto L_08983EB8;
}
L_08983EB8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08983EC4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08983EE8u);
    hot_regs.g5 = (g29 | 0u);
    hot_regs.g29 = g29;
    goto L_08983F38;
}
L_08983EE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08983EFC;
      }
      goto L_08983EF4;
    }
}
L_08983EF4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08983EFC;
      }
      goto L_08983EFC;
    }
L_08983EFC:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08983F08u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983F08u) goto L_08983F08;
    return;
L_08983F08:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
        goto L_08983F20;
    }
    goto L_08983F14;
L_08983F14:
    hot_regs.g31 = (0x08983F1Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983F1Cu) goto L_08983F1C;
    return;
L_08983F1C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    goto L_08983F20;
L_08983F20:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08983F38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g17);
    g17 = (g4 | 0u);
    g4 = (2233u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-4560));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g22);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g23);
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-16544));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g23 = (2232u << 16u);
    g22 = (2232u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    ctx.gpr[30] = (0u | 59u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g6);
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    g23 = (g23 + static_cast<std::uint32_t>(-6800));
    g22 = (g22 + static_cast<std::uint32_t>(-6780));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    goto L_08983FA4;
}
L_08983FA4:
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08983FAC;
    }
    goto L_08983FAC;
L_08983FAC:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 55u, 0x089842D4u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08983FB8;
    }
L_08983FB8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    g4 = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (hot_regs.g5 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
        goto L_08983FCC;
    }
    goto L_08983FCC;
}
L_08983FCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[23] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08983FE4;
      }
      goto L_08983FD8;
    }
}
L_08983FD8:
    hot_regs.g5 = (0u | 153u);
    hot_regs.g31 = (0x08983FE4u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08983FE4u) goto L_08983FE4;
    return;
L_08983FE4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    hot_regs.g4 = (hot_regs.g5 + ctx.gpr[16]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (0u | 38u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g4;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 28u, 0x0898414Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 1u, 0x08984004u>(ctx, &aot_mem, &hot_regs); return;
    }
}

void recomp_unit_0095(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0095_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_95(Runtime &runtime) {
    runtime.register_generated_unit(95u, 0x08980000u, 16384u, &recomp_unit_0095, &recomp_unit_0095_entry);
    runtime.register_function(0x08980000u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980004u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898000Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898001Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980024u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980068u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980074u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980078u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980080u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898008Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980098u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089800F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980100u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898013Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980148u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898015Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980164u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898018Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980194u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898019Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089801F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980200u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898020Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980214u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898021Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980224u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898022Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980234u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980244u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980254u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898025Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980264u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980270u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898027Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980288u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980298u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089802F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980340u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898034Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980360u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898036Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980378u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898037Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980384u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898038Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980398u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089803D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980408u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980420u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980428u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980430u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980438u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980440u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980448u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980450u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980458u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980460u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980468u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980470u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980478u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980480u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980488u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980490u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980498u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898049Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089804FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898050Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980520u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980550u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980558u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980560u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980568u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980580u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980590u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980598u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089805F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980600u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980608u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980620u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898062Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980634u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980640u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898064Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980654u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898065Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980668u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980688u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980694u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089806DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980708u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980740u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898075Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898076Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980774u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898077Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980784u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980788u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980790u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980798u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089807ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898080Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980824u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898082Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980830u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980850u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898085Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980870u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980880u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980888u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980890u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898089Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089808F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980900u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980928u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980938u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980940u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980954u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980958u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898096Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980974u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980988u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089809E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980A9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980ADCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980AF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B60u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980B9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980BFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C0Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980C94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980CF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980D90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980DF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980E94u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980ED4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980EECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F00u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F4Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980F98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08980FF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898102Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981044u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981048u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981050u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898105Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981090u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898109Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089810FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981104u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981124u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981194u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089811F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981208u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898120Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981214u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981220u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981228u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981238u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898124Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898126Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981274u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898127Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981290u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089812E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981308u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981324u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898138Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981398u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089813F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981400u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981418u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981428u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981434u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981450u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898145Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981464u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981468u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981470u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814A0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089814B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981504u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981544u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898154Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981554u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898156Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898158Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981618u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898163Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981648u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089816F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898171Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898175Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981770u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981790u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089817ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981804u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981810u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981818u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981820u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981828u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981830u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981844u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981868u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981880u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981888u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981898u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089818E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898190Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981910u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981918u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981928u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981938u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981954u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981978u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981980u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981984u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819D4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089819FCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A3Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A54u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981A88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ABCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981ACCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981B90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981BF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C30u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C6Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981C88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981CF8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981D9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981E90u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981EFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981F34u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FC0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FE0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08981FE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898203Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982044u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898204Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089820DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982190u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089821ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982208u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089822ECu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898231Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982398u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089823BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982438u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982450u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824C4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089824E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982504u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982518u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898252Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982540u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982544u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982560u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982578u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898258Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825E4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089825F8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898260Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898264Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982654u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982668u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982688u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898269Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826B4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089826D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982710u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982728u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982748u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982754u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898275Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982768u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982770u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898277Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982788u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982790u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982794u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898279Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827E0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089827E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982800u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898280Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898286Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089828E8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982930u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982938u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898298Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982998u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829A4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829ACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829B8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829D0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829D8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089829F0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AC8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982AFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B78u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B88u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982B8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BA0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982BACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982CFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982D80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DDCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982DE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E44u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982E80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982ED4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982EFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982F84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FB4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FBCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08982FFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898301Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983054u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898305Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983074u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983088u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830A8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830CCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089830DCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831BCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089831F4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983208u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983224u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898322Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983238u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983244u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983250u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898325Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983268u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089832B0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983304u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898334Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983394u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x0898344Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983808u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983888u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838C0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x089838C8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A5Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A68u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A74u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A80u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983A98u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983ABCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AD0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AF0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983AFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B2Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B70u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983B9Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C28u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C64u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C7Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C84u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983C8Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CB0u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CE4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983CFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D04u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D10u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D18u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D50u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983D58u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DA8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DD4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983DF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E24u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E40u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983E48u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EC4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EE8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EF4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983EFCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F08u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F14u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F1Cu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F20u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983F38u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FA4u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FACu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FB8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FCCu, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FD8u, &recomp_unit_0095, "recomp_unit_0095");
    runtime.register_function(0x08983FE4u, &recomp_unit_0095, "recomp_unit_0095");
}
} // namespace psprecomp
