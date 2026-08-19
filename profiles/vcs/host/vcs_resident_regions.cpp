#include "vcs_resident_regions.hpp"

#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {

void vcs_resident_region_08806634(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08806634;
RL_08806634:
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
    r4 = (r5 - r4);
    r5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(r4) >> 3u));
    r5 = (r5 >> 29u);
    r2 = (r4 + r5);
    jump_target = r31;
    r2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(r2) >> 3u));
    pc = jump_target;
    return;
}

void vcs_resident_region_08806654(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08806654;
RL_08806654:
    r7 = (r5 | 0u);
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(r7) < 0;
    r5 = (r7 << 3u);
      if (branch_taken) {
          goto RL_088066AC;
      }
      goto RL_08806664;
    }
RL_08806664:
    r7 = (r6 | 0u);
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
    r6 = (r6 + r5);
    r7 = (r7 < r6 ? 1u : 0u);
    { const bool branch_taken = r7 == 0u;
    r7 = (r4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto RL_088066A4;
      }
      goto RL_0880667C;
    }
RL_0880667C:
    r6 = (aot_mem.aot_direct_load32(r7 + static_cast<std::uint32_t>(0)));
    goto RL_08806680;
RL_08806680:
    r8 = (r6 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(r7 + static_cast<std::uint32_t>(0), r8);
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(0), 0u);
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r6 = (r6 + r5);
    r8 = (r8 < r6 ? 1u : 0u);
    if (r8 != 0u) {
    r6 = (aot_mem.aot_direct_load32(r7 + static_cast<std::uint32_t>(0)));
        goto RL_08806680;
    }
    goto RL_088066A4;
RL_088066A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(8), r6);
      if (branch_taken) {
          goto RL_088066B8;
      }
      goto RL_088066AC;
    }
RL_088066AC:
    r5 = (r5 + static_cast<std::uint32_t>(8));
    r5 = (r6 + r5);
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(8), r5);
    goto RL_088066B8;
RL_088066B8:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_0880682C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r16, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0880682C;
RL_08806308:
    r6 = (static_cast<std::int32_t>(r5) < -9999 ? 1u : 0u);
    { const bool branch_taken = r6 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806338;
      }
      goto RL_08806314;
    }
RL_08806314:
    r6 = (r5 | 0u);
    r7 = (static_cast<std::int32_t>(r6) < -10000 ? 1u : 0u);
    if (r7 == 0u) {
    r6 = (static_cast<std::int32_t>(r6) < -9999 ? 1u : 0u);
        goto RL_08806348;
    }
    goto RL_08806324;
RL_08806324:
    r6 = (static_cast<std::int32_t>(r6) < -10001 ? 1u : 0u);
    if (r6 != 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806330;
RL_08806330:
    { const bool branch_taken = 0u == 0u;
    r2 = (r4 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806338;
    }
RL_08806338:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r4 = (r5 << 3u);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + r4);
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806348;
    }
RL_08806348:
    if (r6 == 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806350;
RL_08806350:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_0880635C;
    }
RL_0880635C:
    r6 = (0u + static_cast<std::uint32_t>(-10001));
    r4 = (r4 + static_cast<std::uint32_t>(-8));
    r7 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r6 - r5);
    r6 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(7)));
    r6 = (static_cast<std::int32_t>(r6) < static_cast<std::int32_t>(r5) ? 1u : 0u);
    { const bool branch_taken = r6 != 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_0880638C;
      }
      goto RL_0880637C;
    }
RL_0880637C:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r5 << 3u);
    r2 = (r4 + r5);
    r2 = (r2 + static_cast<std::uint32_t>(8));
    goto RL_0880638C;
RL_0880638C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806394;
    }
RL_08806394:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_0880639C:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = static_cast<std::int32_t>(r6) <= 0;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_088063C8;
      }
      goto RL_088063B4;
    }
RL_088063B4:
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(12)));
    r4 = (r4 << 3u);
    r2 = (r5 + r4);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto RL_088063E0;
      }
      goto RL_088063C8;
    }
RL_088063C8:
    r6 = (r4 | 0u);
    r4 = (r5 | 0u);
    r31 = (0x088063D8u);
    r5 = (r6 | 0u);
    goto RL_08806308;
RL_088063E0:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_0880682C:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    r16 = (r4 | 0u);
    r4 = (r5 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r31);
    r5 = (r4 | 0u);
    r31 = (0x0880684Cu);
    r4 = (r16 | 0u);
    goto RL_0880639C;
}

void vcs_resident_region_08806888(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08806888;
RL_08806308:
    r6 = (static_cast<std::int32_t>(r5) < -9999 ? 1u : 0u);
    { const bool branch_taken = r6 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806338;
      }
      goto RL_08806314;
    }
RL_08806314:
    r6 = (r5 | 0u);
    r7 = (static_cast<std::int32_t>(r6) < -10000 ? 1u : 0u);
    if (r7 == 0u) {
    r6 = (static_cast<std::int32_t>(r6) < -9999 ? 1u : 0u);
        goto RL_08806348;
    }
    goto RL_08806324;
RL_08806324:
    r6 = (static_cast<std::int32_t>(r6) < -10001 ? 1u : 0u);
    if (r6 != 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806330;
RL_08806330:
    { const bool branch_taken = 0u == 0u;
    r2 = (r4 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806338;
    }
RL_08806338:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r4 = (r5 << 3u);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + r4);
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806348;
    }
RL_08806348:
    if (r6 == 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806350;
RL_08806350:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_0880635C;
    }
RL_0880635C:
    r6 = (0u + static_cast<std::uint32_t>(-10001));
    r4 = (r4 + static_cast<std::uint32_t>(-8));
    r7 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r6 - r5);
    r6 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(7)));
    r6 = (static_cast<std::int32_t>(r6) < static_cast<std::int32_t>(r5) ? 1u : 0u);
    { const bool branch_taken = r6 != 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_0880638C;
      }
      goto RL_0880637C;
    }
RL_0880637C:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r5 << 3u);
    r2 = (r4 + r5);
    r2 = (r2 + static_cast<std::uint32_t>(8));
    goto RL_0880638C;
RL_0880638C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806394;
    }
RL_08806394:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_088063EC:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = static_cast<std::int32_t>(r6) <= 0;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_08806434;
      }
      goto RL_08806404;
    }
RL_08806404:
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(12)));
    r4 = (r4 << 3u);
    r2 = (r6 + r4);
    r4 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(8)));
    r2 = (r2 + static_cast<std::uint32_t>(-8));
    r4 = (r2 < r4 ? 1u : 0u);
    { const bool branch_taken = r4 != 0u;
    // nop
      if (branch_taken) {
          goto RL_0880642C;
      }
      goto RL_08806424;
    }
RL_08806424:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_08806444;
      }
      goto RL_0880642C;
    }
RL_0880642C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806444;
      }
      goto RL_08806434;
    }
RL_08806434:
    r6 = (r4 | 0u);
    r4 = (r5 | 0u);
    r31 = (0x08806444u);
    r5 = (r6 | 0u);
    goto RL_08806308;
RL_08806444:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_08806888:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    r31 = (0x08806898u);
    // nop
    goto RL_088063EC;
}

void vcs_resident_region_0880692C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r16, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0880692C;
RL_08806308:
    r6 = (static_cast<std::int32_t>(r5) < -9999 ? 1u : 0u);
    { const bool branch_taken = r6 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806338;
      }
      goto RL_08806314;
    }
RL_08806314:
    r6 = (r5 | 0u);
    r7 = (static_cast<std::int32_t>(r6) < -10000 ? 1u : 0u);
    if (r7 == 0u) {
    r6 = (static_cast<std::int32_t>(r6) < -9999 ? 1u : 0u);
        goto RL_08806348;
    }
    goto RL_08806324;
RL_08806324:
    r6 = (static_cast<std::int32_t>(r6) < -10001 ? 1u : 0u);
    if (r6 != 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806330;
RL_08806330:
    { const bool branch_taken = 0u == 0u;
    r2 = (r4 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806338;
    }
RL_08806338:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r4 = (r5 << 3u);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + r4);
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806348;
    }
RL_08806348:
    if (r6 == 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806350;
RL_08806350:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_0880635C;
    }
RL_0880635C:
    r6 = (0u + static_cast<std::uint32_t>(-10001));
    r4 = (r4 + static_cast<std::uint32_t>(-8));
    r7 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r6 - r5);
    r6 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(7)));
    r6 = (static_cast<std::int32_t>(r6) < static_cast<std::int32_t>(r5) ? 1u : 0u);
    { const bool branch_taken = r6 != 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_0880638C;
      }
      goto RL_0880637C;
    }
RL_0880637C:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r5 << 3u);
    r2 = (r4 + r5);
    r2 = (r2 + static_cast<std::uint32_t>(8));
    goto RL_0880638C;
RL_0880638C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806394;
    }
RL_08806394:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_088063EC:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = static_cast<std::int32_t>(r6) <= 0;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_08806434;
      }
      goto RL_08806404;
    }
RL_08806404:
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(12)));
    r4 = (r4 << 3u);
    r2 = (r6 + r4);
    r4 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(8)));
    r2 = (r2 + static_cast<std::uint32_t>(-8));
    r4 = (r2 < r4 ? 1u : 0u);
    { const bool branch_taken = r4 != 0u;
    // nop
      if (branch_taken) {
          goto RL_0880642C;
      }
      goto RL_08806424;
    }
RL_08806424:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_08806444;
      }
      goto RL_0880642C;
    }
RL_0880642C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806444;
      }
      goto RL_08806434;
    }
RL_08806434:
    r6 = (r4 | 0u);
    r4 = (r5 | 0u);
    r31 = (0x08806444u);
    r5 = (r6 | 0u);
    goto RL_08806308;
RL_08806444:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_0880692C:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(8), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(12), r31);
    r31 = (0x08806940u);
    // nop
    goto RL_088063EC;
}

void vcs_resident_region_08806A88(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08806A88;
RL_08806308:
    r6 = (static_cast<std::int32_t>(r5) < -9999 ? 1u : 0u);
    { const bool branch_taken = r6 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806338;
      }
      goto RL_08806314;
    }
RL_08806314:
    r6 = (r5 | 0u);
    r7 = (static_cast<std::int32_t>(r6) < -10000 ? 1u : 0u);
    if (r7 == 0u) {
    r6 = (static_cast<std::int32_t>(r6) < -9999 ? 1u : 0u);
        goto RL_08806348;
    }
    goto RL_08806324;
RL_08806324:
    r6 = (static_cast<std::int32_t>(r6) < -10001 ? 1u : 0u);
    if (r6 != 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806330;
RL_08806330:
    { const bool branch_taken = 0u == 0u;
    r2 = (r4 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806338;
    }
RL_08806338:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r4 = (r5 << 3u);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + r4);
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806348;
    }
RL_08806348:
    if (r6 == 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806350;
RL_08806350:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_0880635C;
    }
RL_0880635C:
    r6 = (0u + static_cast<std::uint32_t>(-10001));
    r4 = (r4 + static_cast<std::uint32_t>(-8));
    r7 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r6 - r5);
    r6 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(7)));
    r6 = (static_cast<std::int32_t>(r6) < static_cast<std::int32_t>(r5) ? 1u : 0u);
    { const bool branch_taken = r6 != 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_0880638C;
      }
      goto RL_0880637C;
    }
RL_0880637C:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r5 << 3u);
    r2 = (r4 + r5);
    r2 = (r2 + static_cast<std::uint32_t>(8));
    goto RL_0880638C;
RL_0880638C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806394;
    }
RL_08806394:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_088063EC:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = static_cast<std::int32_t>(r6) <= 0;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_08806434;
      }
      goto RL_08806404;
    }
RL_08806404:
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(12)));
    r4 = (r4 << 3u);
    r2 = (r6 + r4);
    r4 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(8)));
    r2 = (r2 + static_cast<std::uint32_t>(-8));
    r4 = (r2 < r4 ? 1u : 0u);
    { const bool branch_taken = r4 != 0u;
    // nop
      if (branch_taken) {
          goto RL_0880642C;
      }
      goto RL_08806424;
    }
RL_08806424:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_08806444;
      }
      goto RL_0880642C;
    }
RL_0880642C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806444;
      }
      goto RL_08806434;
    }
RL_08806434:
    r6 = (r4 | 0u);
    r4 = (r5 | 0u);
    r31 = (0x08806444u);
    r5 = (r6 | 0u);
    goto RL_08806308;
RL_08806444:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_08806A88:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(8), r31);
    r31 = (0x08806A98u);
    // nop
    goto RL_088063EC;
}

void vcs_resident_region_08806AE0(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08806AE0;
RL_08806308:
    r6 = (static_cast<std::int32_t>(r5) < -9999 ? 1u : 0u);
    { const bool branch_taken = r6 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806338;
      }
      goto RL_08806314;
    }
RL_08806314:
    r6 = (r5 | 0u);
    r7 = (static_cast<std::int32_t>(r6) < -10000 ? 1u : 0u);
    if (r7 == 0u) {
    r6 = (static_cast<std::int32_t>(r6) < -9999 ? 1u : 0u);
        goto RL_08806348;
    }
    goto RL_08806324;
RL_08806324:
    r6 = (static_cast<std::int32_t>(r6) < -10001 ? 1u : 0u);
    if (r6 != 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806330;
RL_08806330:
    { const bool branch_taken = 0u == 0u;
    r2 = (r4 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806338;
    }
RL_08806338:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r4 = (r5 << 3u);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + r4);
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806348;
    }
RL_08806348:
    if (r6 == 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806350;
RL_08806350:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_0880635C;
    }
RL_0880635C:
    r6 = (0u + static_cast<std::uint32_t>(-10001));
    r4 = (r4 + static_cast<std::uint32_t>(-8));
    r7 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r6 - r5);
    r6 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(7)));
    r6 = (static_cast<std::int32_t>(r6) < static_cast<std::int32_t>(r5) ? 1u : 0u);
    { const bool branch_taken = r6 != 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_0880638C;
      }
      goto RL_0880637C;
    }
RL_0880637C:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r5 << 3u);
    r2 = (r4 + r5);
    r2 = (r2 + static_cast<std::uint32_t>(8));
    goto RL_0880638C;
RL_0880638C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806394;
    }
RL_08806394:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_088063EC:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = static_cast<std::int32_t>(r6) <= 0;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_08806434;
      }
      goto RL_08806404;
    }
RL_08806404:
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(12)));
    r4 = (r4 << 3u);
    r2 = (r6 + r4);
    r4 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(8)));
    r2 = (r2 + static_cast<std::uint32_t>(-8));
    r4 = (r2 < r4 ? 1u : 0u);
    { const bool branch_taken = r4 != 0u;
    // nop
      if (branch_taken) {
          goto RL_0880642C;
      }
      goto RL_08806424;
    }
RL_08806424:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_08806444;
      }
      goto RL_0880642C;
    }
RL_0880642C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806444;
      }
      goto RL_08806434;
    }
RL_08806434:
    r6 = (r4 | 0u);
    r4 = (r5 | 0u);
    r31 = (0x08806444u);
    r5 = (r6 | 0u);
    goto RL_08806308;
RL_08806444:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_08806AE0:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    r31 = (0x08806AF0u);
    // nop
    goto RL_088063EC;
}

void vcs_resident_region_08806DC0(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r31, float &f12) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08806DC0;
RL_08806DC0:
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r6 = (0u | 3u);
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r6);
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r5 = (r5 + static_cast<std::uint32_t>(8));
    jump_target = r31;
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(8), r5);
    pc = jump_target;
    return;
}

void vcs_resident_region_08807098(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08807098;
RL_08807098:
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r7 = (0u | 1u);
    r5 = (0u < r5 ? 1u : 0u);
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(0), r7);
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(4), r5);
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r5 = (r5 + static_cast<std::uint32_t>(8));
    jump_target = r31;
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(8), r5);
    pc = jump_target;
    return;
}

void vcs_resident_region_088073CC(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r16, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_088073CC;
RL_08806308:
    r6 = (static_cast<std::int32_t>(r5) < -9999 ? 1u : 0u);
    { const bool branch_taken = r6 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806338;
      }
      goto RL_08806314;
    }
RL_08806314:
    r6 = (r5 | 0u);
    r7 = (static_cast<std::int32_t>(r6) < -10000 ? 1u : 0u);
    if (r7 == 0u) {
    r6 = (static_cast<std::int32_t>(r6) < -9999 ? 1u : 0u);
        goto RL_08806348;
    }
    goto RL_08806324;
RL_08806324:
    r6 = (static_cast<std::int32_t>(r6) < -10001 ? 1u : 0u);
    if (r6 != 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806330;
RL_08806330:
    { const bool branch_taken = 0u == 0u;
    r2 = (r4 + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806338;
    }
RL_08806338:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    r4 = (r5 << 3u);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + r4);
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806348;
    }
RL_08806348:
    if (r6 == 0u) {
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(12)));
        goto RL_0880635C;
    }
    goto RL_08806350;
RL_08806350:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_0880635C;
    }
RL_0880635C:
    r6 = (0u + static_cast<std::uint32_t>(-10001));
    r4 = (r4 + static_cast<std::uint32_t>(-8));
    r7 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r6 - r5);
    r6 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(7)));
    r6 = (static_cast<std::int32_t>(r6) < static_cast<std::int32_t>(r5) ? 1u : 0u);
    { const bool branch_taken = r6 != 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_0880638C;
      }
      goto RL_0880637C;
    }
RL_0880637C:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r5 = (r5 << 3u);
    r2 = (r4 + r5);
    r2 = (r2 + static_cast<std::uint32_t>(8));
    goto RL_0880638C;
RL_0880638C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08806394;
      }
      goto RL_08806394;
    }
RL_08806394:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_0880639C:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = static_cast<std::int32_t>(r6) <= 0;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_088063C8;
      }
      goto RL_088063B4;
    }
RL_088063B4:
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(12)));
    r4 = (r4 << 3u);
    r2 = (r5 + r4);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto RL_088063E0;
      }
      goto RL_088063C8;
    }
RL_088063C8:
    r6 = (r4 | 0u);
    r4 = (r5 | 0u);
    r31 = (0x088063D8u);
    r5 = (r6 | 0u);
    goto RL_08806308;
RL_088063E0:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_088073CC:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r31);
    r31 = (0x088073E0u);
    r16 = (r4 | 0u);
    goto RL_0880639C;
}

void vcs_resident_region_0880A400(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r28, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0880A400;
RL_0880A400:
    r4 = (r5 + r5);
    r4 = (r5 + r4);
    r5 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-16328)));
    r4 = (r4 << 2u);
    r4 = (r5 + r4);
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(8)));
    pc = jump_target;
    return;
}

void vcs_resident_region_088305D8(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31, float &f12, float &f13, float &f14) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_088305D8;
RL_088305D8:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(f12), std::bit_cast<std::uint32_t>(f13), std::bit_cast<std::uint32_t>(f14)};
      aot_mem.aot_direct_store32_block(r4 + static_cast<std::uint32_t>(0), aot_run_words); }
    jump_target = r31;
    r2 = (r4 | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_088305EC(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r31, float &f12) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_088305EC;
RL_088305EC:
    f12 = std::bit_cast<float>(aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
    r2 = (r4 | 0u);
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(8)));
    jump_target = r31;
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    pc = jump_target;
    return;
}

void vcs_resident_region_0883079C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0883079C;
RL_0883079C:
    jump_target = r31;
    r2 = (r4 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
}

void vcs_resident_region_088307E0(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_088307E0;
RL_088307E0:
    jump_target = r31;
    r2 = (r4 + static_cast<std::uint32_t>(48));
    pc = jump_target;
    return;
}

void vcs_resident_region_08830934(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08830934;
RL_08830934:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(72)));
    r2 = (r4 & 496u);
    jump_target = r31;
    r2 = (r2 >> 4u);
    pc = jump_target;
    return;
}

void vcs_resident_region_08830A20(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08830A20;
RL_08830A20:
    jump_target = r31;
    r2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(r4 + static_cast<std::uint32_t>(86))))));
    pc = jump_target;
    return;
}

void vcs_resident_region_08830A50(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08830A50;
RL_08830A50:
    jump_target = r31;
    r2 = (r4 | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_08830B10(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08830B10;
RL_08830B10:
    jump_target = r31;
    r2 = (r4 + static_cast<std::uint32_t>(320));
    pc = jump_target;
    return;
}

void vcs_resident_region_08861668(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r1, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08861668;
RL_08861668:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r4 | 0u);
    r4 = (r5 | 0u);
    r5 = (r6 + static_cast<std::uint32_t>(-1));
    r6 = (r5 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r31);
    { const bool branch_taken = r6 == 0u;
    // nop
      if (branch_taken) {
          goto RL_088617FC;
      }
      goto RL_08861688;
    }
RL_08861688:
    r5 = (r5 << 2u);
    r1 = (2232u << 16u);
    r1 = (r1 + r5);
    r1 = (aot_mem.aot_direct_load32(r1 + static_cast<std::uint32_t>(-26472)));
    jump_target = r1;
    // nop
    pc = jump_target;
    return;
RL_088617FC:
    r2 = (0u | 0u);
    goto RL_08861800;
RL_08861800:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(4)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
}

void vcs_resident_region_08862890(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r9, std::uint32_t &r10, std::uint32_t &r11, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r18, std::uint32_t &r19, std::uint32_t &r20, std::uint32_t &r21, std::uint32_t &r28, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08862890;
RL_08861A7C:
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
    r7 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-29148)));
    r8 = (r6 + static_cast<std::uint32_t>(1));
    r6 = (r7 + r6);
    r6 = (aot_mem.aot_direct_load8(r6 + static_cast<std::uint32_t>(0)));
    r7 = (static_cast<std::int32_t>(r6) < 205 ? 1u : 0u);
    { const bool branch_taken = r7 == 0u;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r8);
      if (branch_taken) {
          goto RL_08861B44;
      }
      goto RL_08861A9C;
    }
RL_08861A9C:
    r7 = (static_cast<std::int32_t>(r6) < 109 ? 1u : 0u);
    if (r7 == 0u) {
    r7 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
        goto RL_08861ACC;
    }
    goto RL_08861AA8;
RL_08861AA8:
    r5 = (static_cast<std::int32_t>(r6) < 13 ? 1u : 0u);
    { const bool branch_taken = r5 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08861ABC;
      }
      goto RL_08861AB4;
    }
RL_08861AB4:
    { const bool branch_taken = 0u == 0u;
    r6 = (r6 + static_cast<std::uint32_t>(93));
      if (branch_taken) {
          goto RL_08861B34;
      }
      goto RL_08861ABC;
    }
RL_08861ABC:
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(508)));
    r6 = (r6 + r5);
    { const bool branch_taken = 0u == 0u;
    r6 = (r6 + static_cast<std::uint32_t>(-13));
      if (branch_taken) {
          goto RL_08861B34;
      }
      goto RL_08861ACC;
    }
RL_08861ACC:
    r8 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-29148)));
    r9 = (r7 + static_cast<std::uint32_t>(1));
    r7 = (r8 + r7);
    r7 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r9);
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(508)));
    r10 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-29148)));
    r7 = (r7 + r8);
    r8 = (r10 + r9);
    r8 = (aot_mem.aot_direct_load8(r8 + static_cast<std::uint32_t>(0)));
    r9 = (r9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r9);
    r5 = (r7 << 2u);
    r5 = (r4 + r5);
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(r5) < 0;
    r7 = (r8 | 0u);
      if (branch_taken) {
          goto RL_08861B1C;
      }
      goto RL_08861B10;
    }
RL_08861B10:
    r7 = (static_cast<std::int32_t>(r5) < static_cast<std::int32_t>(r7) ? 1u : 0u);
    { const bool branch_taken = r7 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08861B24;
      }
      goto RL_08861B1C;
    }
RL_08861B1C:
    { const bool branch_taken = 0u == 0u;
    r2 = (r28 + static_cast<std::uint32_t>(5996));
      if (branch_taken) {
          goto RL_08861BF4;
      }
      goto RL_08861B24;
    }
RL_08861B24:
    r7 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(508)));
    r6 = (r6 + r7);
    r6 = (r6 + r5);
    r6 = (r6 + static_cast<std::uint32_t>(-109));
    goto RL_08861B34;
RL_08861B34:
    r5 = (r6 << 2u);
    r2 = (r4 + r5);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto RL_08861BF4;
      }
      goto RL_08861B44;
    }
RL_08861B44:
    r7 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
    r8 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-29148)));
    r9 = (r7 + static_cast<std::uint32_t>(1));
    r7 = (r8 + r7);
    r7 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(0)));
    r8 = (static_cast<std::int32_t>(r6) < 230 ? 1u : 0u);
    { const bool branch_taken = r8 == 0u;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r9);
      if (branch_taken) {
          goto RL_08861B74;
      }
      goto RL_08861B64;
    }
RL_08861B64:
    r4 = (r6 + static_cast<std::uint32_t>(-205));
    r4 = (r4 << 8u);
    { const bool branch_taken = 0u == 0u;
    r7 = (r7 + r4);
      if (branch_taken) {
          goto RL_08861BE4;
      }
      goto RL_08861B74;
    }
RL_08861B74:
    r8 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
    r9 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-29148)));
    r10 = (r4 | 0u);
    r4 = (r9 + r8);
    r4 = (aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(0)));
    r8 = (r8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r8);
    r9 = (aot_mem.aot_direct_load32(r10 + static_cast<std::uint32_t>(508)));
    r11 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-29148)));
    r4 = (r4 + r9);
    r9 = (r11 + r8);
    r9 = (aot_mem.aot_direct_load8(r9 + static_cast<std::uint32_t>(0)));
    r8 = (r8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r8);
    r5 = (r4 << 2u);
    r5 = (r10 + r5);
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(r5) < 0;
    r4 = (r9 | 0u);
      if (branch_taken) {
          goto RL_08861BCC;
      }
      goto RL_08861BC0;
    }
RL_08861BC0:
    r4 = (static_cast<std::int32_t>(r5) < static_cast<std::int32_t>(r4) ? 1u : 0u);
    { const bool branch_taken = r4 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08861BD4;
      }
      goto RL_08861BCC;
    }
RL_08861BCC:
    { const bool branch_taken = 0u == 0u;
    r2 = (r28 + static_cast<std::uint32_t>(5996));
      if (branch_taken) {
          goto RL_08861BF4;
      }
      goto RL_08861BD4;
    }
RL_08861BD4:
    r4 = (r6 + static_cast<std::uint32_t>(-230));
    r4 = (r4 << 8u);
    r4 = (r4 + r5);
    r7 = (r4 + r7);
    goto RL_08861BE4;
RL_08861BE4:
    r2 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-29148)));
    r4 = (r7 << 2u);
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + r4);
      if (branch_taken) {
          goto RL_08861BF4;
      }
      goto RL_08861BF4;
    }
RL_08861BF4:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_088623D0:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    r31 = (0x088623E0u);
    // nop
    goto RL_08861A7C;
RL_08862890:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(16), r20);
    r20 = (r6 << 16u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r17);
    r20 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(r20) >> 16u));
    r17 = (r4 | 0u);
    r16 = (r5 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(8), r18);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(12), r19);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(20), r21);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(24), r31);
    r19 = (0u | 0u);
    r4 = (static_cast<std::int32_t>(r19) < static_cast<std::int32_t>(r20) ? 1u : 0u);
    { const bool branch_taken = r4 == 0u;
    r18 = (2236u << 16u);
      if (branch_taken) {
          goto RL_088628FC;
      }
      goto RL_088628D0;
    }
RL_088628D0:
    r18 = (r18 + static_cast<std::uint32_t>(29704));
    goto RL_088628D4;
RL_088628D4:
    r21 = (aot_mem.aot_direct_load32(r18 + static_cast<std::uint32_t>(0)));
    r4 = (r17 | 0u);
    r5 = (r16 | 0u);
    r31 = (0x088628E8u);
    r6 = (0u | 0u);
    goto RL_088623D0;
RL_088628FC:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(r29 + static_cast<std::uint32_t>(0), aot_run_words);
      r16 = aot_run_words[0];
      r17 = aot_run_words[1];
      r18 = aot_run_words[2];
      r19 = aot_run_words[3];
      r20 = aot_run_words[4];
      r21 = aot_run_words[5];
      r31 = aot_run_words[6];
    }
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(32));
    pc = jump_target;
    return;
}

void vcs_resident_region_0886D4BC(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0886D4BC;
RL_0886D4BC:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(24)));
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = r2 == 0u;
    // nop
      if (branch_taken) {
          goto RL_0886D4E4;
      }
      goto RL_0886D4CC;
    }
RL_0886D4CC:
    r4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(r2 + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = r4 == r5;
    // nop
      if (branch_taken) {
          goto RL_0886D4EC;
      }
      goto RL_0886D4D8;
    }
RL_0886D4D8:
    r2 = (aot_mem.aot_direct_load32(r2 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = r2 != 0u;
    // nop
      if (branch_taken) {
          goto RL_0886D4CC;
      }
      goto RL_0886D4E4;
    }
RL_0886D4E4:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_0886D4EC;
      }
      goto RL_0886D4EC;
    }
RL_0886D4EC:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08873400(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31, float &f12, float &f13, float &f14, float &f15) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08873400;
RL_08873400:
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    jump_target = r31;
    r2 = (r4 | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_088905F0(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_088905F0;
RL_088905F0:
    r7 = (0u | 1u);
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(52), r7);
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(56), r5);
    jump_target = r31;
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(60), r6);
    pc = jump_target;
    return;
}

void vcs_resident_region_088C95D8(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &hi, std::uint32_t &lo, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r9, std::uint32_t &r28, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_088C95D8;
RL_088C95D8:
    if (r8 != 0u) {
    r9 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(48)));
        goto RL_088C95F0;
    }
    goto RL_088C95E0;
RL_088C95E0:
    r4 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-16352)));
    r4 = (r4 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r4);
      if (branch_taken) {
          goto RL_088C9638;
      }
      goto RL_088C95F0;
    }
RL_088C95F0:
    r9 = (r9 & 3u);
    r9 = (r9 << 2u);
    r4 = (r4 + r9);
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = r4; const std::uint32_t divisor = r8; if (divisor == 0u) { lo = 0xFFFFFFFFu; hi = dividend; } else { lo = dividend / divisor; hi = dividend % divisor; } }
    r4 = (hi);
    r4 = (r7 + r4);
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r4);
    r9 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = r4 != r9;
    // nop
      if (branch_taken) {
          goto RL_088C9638;
      }
      goto RL_088C961C;
    }
RL_088C961C:
    r4 = (r4 + static_cast<std::uint32_t>(1));
    r8 = (r7 + r8);
    r8 = (r4 < r8 ? 1u : 0u);
    { const bool branch_taken = r8 != 0u;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r4);
      if (branch_taken) {
          goto RL_088C9638;
      }
      goto RL_088C9630;
    }
RL_088C9630:
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r7);
    r4 = (r7 | 0u);
    goto RL_088C9638;
RL_088C9638:
    jump_target = r31;
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(0), r4);
    pc = jump_target;
    return;
}

void vcs_resident_region_088C9640(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r1, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r28, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_088C9640;
RL_088C9640:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r7 = (r5 | 0u);
    r5 = (0u | 1u);
    r6 = (r6 & 65535u);
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(21540), static_cast<std::uint8_t>(r5));
    r6 = (r6 + static_cast<std::uint32_t>(-102));
    r5 = (r4 | 0u);
    r8 = (r6 < static_cast<std::uint32_t>(37) ? 1u : 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r31);
    { const bool branch_taken = r8 == 0u;
    r4 = (r7 | 0u);
      if (branch_taken) {
          goto RL_088C9708;
      }
      goto RL_088C966C;
    }
RL_088C966C:
    r6 = (r6 << 2u);
    r1 = (2232u << 16u);
    r1 = (r1 + r6);
    r1 = (aot_mem.aot_direct_load32(r1 + static_cast<std::uint32_t>(-20912)));
    jump_target = r1;
    // nop
    pc = jump_target;
    return;
RL_088C9708:
    r2 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-16352)));
    r2 = (r2 + static_cast<std::uint32_t>(6028));
    goto RL_088C9710;
RL_088C9710:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(4)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
}

void vcs_resident_region_088C971C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r1, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r28, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_088C971C;
RL_088C971C:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r7 = (r5 | 0u);
    r5 = (0u | 1u);
    r6 = (r6 & 65535u);
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(21540), static_cast<std::uint8_t>(r5));
    r6 = (r6 + static_cast<std::uint32_t>(-102));
    r5 = (r4 | 0u);
    r8 = (r6 < static_cast<std::uint32_t>(37) ? 1u : 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r31);
    { const bool branch_taken = r8 == 0u;
    r4 = (r7 | 0u);
      if (branch_taken) {
          goto RL_088C9804;
      }
      goto RL_088C9748;
    }
RL_088C9748:
    r6 = (r6 << 2u);
    r1 = (2232u << 16u);
    r1 = (r1 + r6);
    r1 = (aot_mem.aot_direct_load32(r1 + static_cast<std::uint32_t>(-20760)));
    jump_target = r1;
    // nop
    pc = jump_target;
    return;
RL_088C9804:
    r2 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-16352)));
    r2 = (r2 + static_cast<std::uint32_t>(6028));
    goto RL_088C980C;
RL_088C980C:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(4)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
}

void vcs_resident_region_08908E78(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08908E78;
RL_08908E78:
    jump_target = r31;
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(2232), r5);
    pc = jump_target;
    return;
}

void vcs_resident_region_08909B60(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r16, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08909B60;
RL_089098EC:
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(2228)));
    r6 = (0u | 55u);
    { const bool branch_taken = r5 == r6;
    r6 = (0u | 60u);
      if (branch_taken) {
          goto RL_0890993C;
      }
      goto RL_089098FC;
    }
RL_089098FC:
    { const bool branch_taken = r5 == r6;
    r6 = (0u | 17u);
      if (branch_taken) {
          goto RL_0890993C;
      }
      goto RL_08909904;
    }
RL_08909904:
    { const bool branch_taken = r5 == r6;
    // nop
      if (branch_taken) {
          goto RL_0890993C;
      }
      goto RL_0890990C;
    }
RL_0890990C:
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(460)));
    r5 = (r5 & 8192u);
    { const bool branch_taken = r5 != 0u;
    // nop
      if (branch_taken) {
          goto RL_0890993C;
      }
      goto RL_0890991C;
    }
RL_0890991C:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(776)));
    r5 = (0u | 47u);
    { const bool branch_taken = r4 == r5;
    r5 = (0u | 44u);
      if (branch_taken) {
          goto RL_0890993C;
      }
      goto RL_0890992C;
    }
RL_0890992C:
    { const bool branch_taken = r4 == r5;
    // nop
      if (branch_taken) {
          goto RL_0890993C;
      }
      goto RL_08909934;
    }
RL_08909934:
    { const bool branch_taken = r4 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08909944;
      }
      goto RL_0890993C;
    }
RL_0890993C:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_08909948;
      }
      goto RL_08909944;
    }
RL_08909944:
    r2 = (0u | 1u);
    goto RL_08909948;
RL_08909948:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_08909B60:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    r16 = (r4 | 0u);
    r4 = (aot_mem.aot_direct_load32(r16 + static_cast<std::uint32_t>(456)));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r31);
    r5 = (r4 & 16u);
    { const bool branch_taken = r5 == 0u;
    r5 = (r4 & 64u);
      if (branch_taken) {
          goto RL_08909C10;
      }
      goto RL_08909B80;
    }
RL_08909B80:
    { const bool branch_taken = r5 != 0u;
    r5 = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto RL_08909C10;
      }
      goto RL_08909B88;
    }
RL_08909B88:
    r4 = (r4 & r5);
    aot_mem.aot_direct_store32(r16 + static_cast<std::uint32_t>(456), r4);
    r4 = (r4 | 128u);
    r5 = (aot_mem.aot_direct_load32(r16 + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(r16 + static_cast<std::uint32_t>(456), r4);
    r4 = (0u + static_cast<std::uint32_t>(-257));
    r4 = (r5 & r4);
    aot_mem.aot_direct_store32(r16 + static_cast<std::uint32_t>(464), r4);
    r31 = (0x08909BB0u);
    r4 = (r16 | 0u);
    goto RL_089098EC;
RL_08909C10:
    r16 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(4)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
}

void vcs_resident_region_0890BE50(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0890BE50;
RL_0890BE50:
    jump_target = r31;
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(2244), r5);
    pc = jump_target;
    return;
}

void vcs_resident_region_0890D44C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0890D44C;
RL_0890D44C:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = r4 != 0u;
    // nop
      if (branch_taken) {
          goto RL_0890D460;
      }
      goto RL_0890D458;
    }
RL_0890D458:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 1u);
      if (branch_taken) {
          goto RL_0890D464;
      }
      goto RL_0890D460;
    }
RL_0890D460:
    r2 = (0u | 0u);
    goto RL_0890D464;
RL_0890D464:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_0890F694(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0890F694;
RL_0890F694:
    { const bool branch_taken = r5 == 0u;
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(780), r5);
      if (branch_taken) {
          goto RL_0890F6AC;
      }
      goto RL_0890F69C;
    }
RL_0890F69C:
    r6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(r5 + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(788), r6);
    r5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(r5 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(784), r5);
    goto RL_0890F6AC;
RL_0890F6AC:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_0890F6B4(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0890F6B4;
RL_0890F6B4:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(780)));
    pc = jump_target;
    return;
}

void vcs_resident_region_0890FF64(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0890FF64;
RL_0890FF64:
    jump_target = r31;
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(1032), 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_089101A4(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_089101A4;
RL_089101A4:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(1128)));
    pc = jump_target;
    return;
}

void vcs_resident_region_0893685C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0893685C;
RL_0893685C:
    jump_target = r31;
    r2 = (0u | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_089474C4(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_089474C4;
RL_089474C4:
    r5 = (r4 | 0u);
    r4 = (2238u << 16u);
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(-6992)));
    { const bool branch_taken = r6 != r5;
    // nop
      if (branch_taken) {
          goto RL_089474E0;
      }
      goto RL_089474D8;
    }
RL_089474D8:
    { const bool branch_taken = 0u == 0u;
    r2 = (r4 + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto RL_089474E4;
      }
      goto RL_089474E0;
    }
RL_089474E0:
    r2 = (0u | 0u);
    goto RL_089474E4;
RL_089474E4:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_0896918C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_0896918C;
RL_0896918C:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(40)));
    pc = jump_target;
    return;
}

void vcs_resident_region_08969194(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08969194;
RL_08969194:
    r7 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(48)));
    r4 = (r7 << 3u);
    r4 = (r6 + r4);
    r7 = (r6 | 0u);
    { const bool branch_taken = r7 == r4;
    // nop
      if (branch_taken) {
          goto RL_089691E8;
      }
      goto RL_089691B0;
    }
RL_089691B0:
    r8 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = r8 == r5;
    // nop
      if (branch_taken) {
          goto RL_089691D0;
      }
      goto RL_089691BC;
    }
RL_089691BC:
    r7 = (r7 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = r7 != r4;
    // nop
      if (branch_taken) {
          goto RL_089691B0;
      }
      goto RL_089691C8;
    }
RL_089691C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_089691E8;
      }
      goto RL_089691D0;
    }
RL_089691D0:
    r4 = (r7 - r6);
    r5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(r4) >> 3u));
    r5 = (r5 >> 29u);
    r2 = (r4 + r5);
    { const bool branch_taken = 0u == 0u;
    r2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(r2) >> 3u));
      if (branch_taken) {
          goto RL_089691EC;
      }
      goto RL_089691E8;
    }
RL_089691E8:
    r2 = (0u | 0u);
    goto RL_089691EC;
RL_089691EC:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_089B7A84(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &hi, std::uint32_t &lo, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r28, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_089B7A84;
RL_089B7A84:
    { const bool branch_taken = r5 == 0u;
    // nop
      if (branch_taken) {
          goto RL_089B7AD4;
      }
      goto RL_089B7A8C;
    }
RL_089B7A8C:
    r7 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(-13240)));
    r6 = (r4 | 0u);
    r4 = (0u | 5u);
    r8 = (r7 + r5);
    { const std::uint32_t dividend = r8; const std::uint32_t divisor = r4; if (divisor == 0u) { lo = 0xFFFFFFFFu; hi = dividend; } else { lo = dividend / divisor; hi = dividend % divisor; } }
    r4 = (aot_mem.aot_direct_load8(r28 + static_cast<std::uint32_t>(-13244)));
    r8 = (hi);
    r8 = (r8 << 2u);
    r6 = (r6 + r8);
    r6 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = r6; const std::uint32_t divisor = r5; if (divisor == 0u) { lo = 0xFFFFFFFFu; hi = dividend; } else { lo = dividend / divisor; hi = dividend % divisor; } }
    r2 = (hi);
    r5 = (r7 + r2);
    aot_mem.aot_direct_store32(r28 + static_cast<std::uint32_t>(-13240), r5);
    { const bool branch_taken = static_cast<std::int32_t>(r2) >= 0;
    r5 = (r2 & 1u);
      if (branch_taken) {
          goto RL_089B7ADC;
      }
      goto RL_089B7ACC;
    }
RL_089B7ACC:
    { const bool branch_taken = 0u == 0u;
    r5 = (0u - r5);
      if (branch_taken) {
          goto RL_089B7ADC;
      }
      goto RL_089B7AD4;
    }
RL_089B7AD4:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_089B7AFC;
      }
      goto RL_089B7ADC;
    }
RL_089B7ADC:
    { const bool branch_taken = r5 == 0u;
    // nop
      if (branch_taken) {
          goto RL_089B7AF0;
      }
      goto RL_089B7AE4;
    }
RL_089B7AE4:
    r4 = (r4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store8(r28 + static_cast<std::uint32_t>(-13244), static_cast<std::uint8_t>(r4));
    r4 = (aot_mem.aot_direct_load8(r28 + static_cast<std::uint32_t>(-13244)));
    goto RL_089B7AF0;
RL_089B7AF0:
    { const bool branch_taken = r4 != 0u;
    // nop
      if (branch_taken) {
          goto RL_089B7AFC;
      }
      goto RL_089B7AF8;
    }
RL_089B7AF8:
    r2 = (0u - r2);
    goto RL_089B7AFC;
RL_089B7AFC:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_089D1B1C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31, float &f12, float &f13, float &f14, float &f15) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_089D1B1C;
RL_089D1B1C:
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    jump_target = r31;
    r2 = (r4 | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_089F620C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_089F620C;
RL_089F620C:
    { const std::uint32_t aot_run_words[8]{0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(r4 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store16(r4 + static_cast<std::uint32_t>(2444), static_cast<std::uint16_t>(0u));
    r5 = (0u | 101u);
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(r5));
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(2448), static_cast<std::uint8_t>(0u));
    r6 = (0u | 0u);
    goto RL_089F6248;
RL_089F6248:
    r5 = (r4 + r6);
    r6 = (r6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(r5 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    r6 = (r6 & 65535u);
    r5 = (static_cast<std::int32_t>(r6) < 8 ? 1u : 0u);
    { const bool branch_taken = r5 != 0u;
    // nop
      if (branch_taken) {
          goto RL_089F6248;
      }
      goto RL_089F6264;
    }
RL_089F6264:
    r5 = (2279u << 16u);
    r6 = (0u | 0u);
    r5 = (r5 + static_cast<std::uint32_t>(20672));
    goto RL_089F6270;
RL_089F6270:
    r7 = (r6 + r6);
    r7 = (r7 + r5);
    r6 = (r6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(r7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    r6 = (r6 & 65535u);
    r7 = (static_cast<std::int32_t>(r6) < 25 ? 1u : 0u);
    { const bool branch_taken = r7 != 0u;
    // nop
      if (branch_taken) {
          goto RL_089F6270;
      }
      goto RL_089F6290;
    }
RL_089F6290:
    jump_target = r31;
    r2 = (r4 | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_08A28D00(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r18, std::uint32_t &r19, std::uint32_t &r20, std::uint32_t &r21, std::uint32_t &r22, std::uint32_t &r29, std::uint32_t &r31, float &f20, float &f22, float &f24) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08A28D00;
RL_08A28D00:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(r29 + static_cast<std::uint32_t>(960), aot_run_words);
      f20 = std::bit_cast<float>(aot_run_words[0]);
      f22 = std::bit_cast<float>(aot_run_words[1]);
      f24 = std::bit_cast<float>(aot_run_words[2]);
      r16 = aot_run_words[3];
      r17 = aot_run_words[4];
      r18 = aot_run_words[5];
      r19 = aot_run_words[6];
      r20 = aot_run_words[7];
      r21 = aot_run_words[8];
      r22 = aot_run_words[9];
      r31 = aot_run_words[10];
    }
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(1008));
    pc = jump_target;
    return;
}

void vcs_resident_region_08A3550C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08A3550C;
RL_08A3550C:
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(r5));
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(r6));
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(r7));
    aot_mem.aot_direct_store8(r4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(r8));
    jump_target = r31;
    r2 = (r4 | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_08A92F78(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r28, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08A92F78;
RL_08A92F78:
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(72)));
    r6 = (r6 & 14u);
    r6 = (r6 ^ 2u);
    r6 = (r6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    r6 = (r6 & 255u);
    { const bool branch_taken = r6 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08A92FA8;
      }
      goto RL_08A92F94;
    }
RL_08A92F94:
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = r6 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08A92FB0;
      }
      goto RL_08A92FA0;
    }
RL_08A92FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08A92FD8;
      }
      goto RL_08A92FA8;
    }
RL_08A92FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08A92FFC;
      }
      goto RL_08A92FB0;
    }
RL_08A92FB0:
    r7 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = r7 == r5;
    // nop
      if (branch_taken) {
          goto RL_08A92FD0;
      }
      goto RL_08A92FBC;
    }
RL_08A92FBC:
    r6 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = r6 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08A92FB0;
      }
      goto RL_08A92FC8;
    }
RL_08A92FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08A92FD8;
      }
      goto RL_08A92FD0;
    }
RL_08A92FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08A92FFC;
      }
      goto RL_08A92FD8;
    }
RL_08A92FD8:
    r6 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(10092)));
    { const bool branch_taken = r6 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08A92FFC;
      }
      goto RL_08A92FE4;
    }
RL_08A92FE4:
    r7 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(r28 + static_cast<std::uint32_t>(10092), r7);
    r7 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(0), r7);
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(68), r6);
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(4), r5);
    goto RL_08A92FFC;
RL_08A92FFC:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08A93004(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r28, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08A93004;
RL_08A93004:
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = r6 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08A93050;
      }
      goto RL_08A93010;
    }
RL_08A93010:
    { const bool branch_taken = r6 == 0u;
    r4 = (r4 + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto RL_08A93050;
      }
      goto RL_08A93018;
    }
RL_08A93018:
    r8 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = r8 == r5;
    r7 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto RL_08A9303C;
      }
      goto RL_08A93024;
    }
RL_08A93024:
    r4 = (r6 | 0u);
    r6 = (r7 | 0u);
    { const bool branch_taken = r6 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08A93018;
      }
      goto RL_08A93034;
    }
RL_08A93034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08A93050;
      }
      goto RL_08A9303C;
    }
RL_08A9303C:
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), r7);
    r4 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(10092)));
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(0), r4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(r28 + static_cast<std::uint32_t>(10092), r6);
      if (branch_taken) {
          goto RL_08A93050;
      }
      goto RL_08A93050;
    }
RL_08A93050:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08ABE2C0(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r18, std::uint32_t &r19, std::uint32_t &r20, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08ABE2C0;
RL_08ABE2C0:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r5 = (r4 | 0u);
    r4 = (2236u << 16u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    r31 = (0x08ABE2D8u);
    r4 = (r4 + static_cast<std::uint32_t>(25856));
    goto RL_08ABE8F4;
RL_08ABE8F4:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = r6 == 0u;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_08ABE924;
      }
      goto RL_08ABE90C;
    }
RL_08ABE90C:
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(16)));
    r6 = (r4 < r6 ? 1u : 0u);
    if (r6 == 0u) {
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(28)));
        goto RL_08ABE92C;
    }
    goto RL_08ABE91C;
RL_08ABE91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08ABE958;
      }
      goto RL_08ABE924;
    }
RL_08ABE924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08ABE97C;
      }
      goto RL_08ABE92C;
    }
RL_08ABE92C:
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(296)));
    r6 = (r6 - r4);
    r6 = (r6 + static_cast<std::uint32_t>(-1));
    r6 = (r6 >> 10u);
    r6 = (r6 << 2u);
    r5 = (r5 + r6);
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), r6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(4), r4);
      if (branch_taken) {
          goto RL_08ABE97C;
      }
      goto RL_08ABE958;
    }
RL_08ABE958:
    r6 = (r5 | 0u);
    r5 = (0u + static_cast<std::uint32_t>(8));
    r4 = (r4 - r5);
    r7 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(20)));
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    r5 = (r6 + static_cast<std::uint32_t>(8));
    r7 = (r7 - r8);
    r31 = (0x08ABE97Cu);
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(20), r7);
    goto RL_08ABF8B4;
RL_08ABE97C:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_08ABF8B4:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r17);
    r16 = (r5 | 0u);
    r17 = (r4 | 0u);
    { const std::uint32_t aot_run_words[4]{r18, r19, r20, r31};
      aot_mem.aot_direct_store32_block(r29 + static_cast<std::uint32_t>(8), aot_run_words); }
    r31 = (0x08ABF8E0u);
    r5 = (0u | 0u);
    goto RL_08ABFC04;
RL_08ABFC04:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08ABE2E4(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r18, std::uint32_t &r19, std::uint32_t &r20, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08ABE2E4;
RL_08ABE2E4:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r5 = (r4 | 0u);
    r4 = (2236u << 16u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    r31 = (0x08ABE2FCu);
    r4 = (r4 + static_cast<std::uint32_t>(25856));
    goto RL_08ABE8F4;
RL_08ABE8F4:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = r6 == 0u;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_08ABE924;
      }
      goto RL_08ABE90C;
    }
RL_08ABE90C:
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(16)));
    r6 = (r4 < r6 ? 1u : 0u);
    if (r6 == 0u) {
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(28)));
        goto RL_08ABE92C;
    }
    goto RL_08ABE91C;
RL_08ABE91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08ABE958;
      }
      goto RL_08ABE924;
    }
RL_08ABE924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08ABE97C;
      }
      goto RL_08ABE92C;
    }
RL_08ABE92C:
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(296)));
    r6 = (r6 - r4);
    r6 = (r6 + static_cast<std::uint32_t>(-1));
    r6 = (r6 >> 10u);
    r6 = (r6 << 2u);
    r5 = (r5 + r6);
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), r6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(4), r4);
      if (branch_taken) {
          goto RL_08ABE97C;
      }
      goto RL_08ABE958;
    }
RL_08ABE958:
    r6 = (r5 | 0u);
    r5 = (0u + static_cast<std::uint32_t>(8));
    r4 = (r4 - r5);
    r7 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(20)));
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    r5 = (r6 + static_cast<std::uint32_t>(8));
    r7 = (r7 - r8);
    r31 = (0x08ABE97Cu);
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(20), r7);
    goto RL_08ABF8B4;
RL_08ABE97C:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_08ABF8B4:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r17);
    r16 = (r5 | 0u);
    r17 = (r4 | 0u);
    { const std::uint32_t aot_run_words[4]{r18, r19, r20, r31};
      aot_mem.aot_direct_store32_block(r29 + static_cast<std::uint32_t>(8), aot_run_words); }
    r31 = (0x08ABF8E0u);
    r5 = (0u | 0u);
    goto RL_08ABFC04;
RL_08ABFC04:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08ABE398(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r18, std::uint32_t &r19, std::uint32_t &r20, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08ABE398;
RL_08ABE398:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r5 = (r4 | 0u);
    r4 = (2236u << 16u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    r31 = (0x08ABE3B0u);
    r4 = (r4 + static_cast<std::uint32_t>(25856));
    goto RL_08ABE8F4;
RL_08ABE8F4:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = r6 == 0u;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_08ABE924;
      }
      goto RL_08ABE90C;
    }
RL_08ABE90C:
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(16)));
    r6 = (r4 < r6 ? 1u : 0u);
    if (r6 == 0u) {
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(28)));
        goto RL_08ABE92C;
    }
    goto RL_08ABE91C;
RL_08ABE91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08ABE958;
      }
      goto RL_08ABE924;
    }
RL_08ABE924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08ABE97C;
      }
      goto RL_08ABE92C;
    }
RL_08ABE92C:
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(296)));
    r6 = (r6 - r4);
    r6 = (r6 + static_cast<std::uint32_t>(-1));
    r6 = (r6 >> 10u);
    r6 = (r6 << 2u);
    r5 = (r5 + r6);
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), r6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(4), r4);
      if (branch_taken) {
          goto RL_08ABE97C;
      }
      goto RL_08ABE958;
    }
RL_08ABE958:
    r6 = (r5 | 0u);
    r5 = (0u + static_cast<std::uint32_t>(8));
    r4 = (r4 - r5);
    r7 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(20)));
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    r5 = (r6 + static_cast<std::uint32_t>(8));
    r7 = (r7 - r8);
    r31 = (0x08ABE97Cu);
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(20), r7);
    goto RL_08ABF8B4;
RL_08ABE97C:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_08ABF8B4:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r17);
    r16 = (r5 | 0u);
    r17 = (r4 | 0u);
    { const std::uint32_t aot_run_words[4]{r18, r19, r20, r31};
      aot_mem.aot_direct_store32_block(r29 + static_cast<std::uint32_t>(8), aot_run_words); }
    r31 = (0x08ABF8E0u);
    r5 = (0u | 0u);
    goto RL_08ABFC04;
RL_08ABFC04:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08ABE8F4(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r18, std::uint32_t &r19, std::uint32_t &r20, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08ABE8F4;
RL_08ABE8F4:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r6 = (r5 | 0u);
    r5 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    { const bool branch_taken = r6 == 0u;
    r4 = (r6 | 0u);
      if (branch_taken) {
          goto RL_08ABE924;
      }
      goto RL_08ABE90C;
    }
RL_08ABE90C:
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(16)));
    r6 = (r4 < r6 ? 1u : 0u);
    if (r6 == 0u) {
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(28)));
        goto RL_08ABE92C;
    }
    goto RL_08ABE91C;
RL_08ABE91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08ABE958;
      }
      goto RL_08ABE924;
    }
RL_08ABE924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto RL_08ABE97C;
      }
      goto RL_08ABE92C;
    }
RL_08ABE92C:
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(296)));
    r6 = (r6 - r4);
    r6 = (r6 + static_cast<std::uint32_t>(-1));
    r6 = (r6 >> 10u);
    r6 = (r6 << 2u);
    r5 = (r5 + r6);
    r5 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
    r6 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), r6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(4), r4);
      if (branch_taken) {
          goto RL_08ABE97C;
      }
      goto RL_08ABE958;
    }
RL_08ABE958:
    r6 = (r5 | 0u);
    r5 = (0u + static_cast<std::uint32_t>(8));
    r4 = (r4 - r5);
    r7 = (aot_mem.aot_direct_load32(r6 + static_cast<std::uint32_t>(20)));
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    r5 = (r6 + static_cast<std::uint32_t>(8));
    r7 = (r7 - r8);
    r31 = (0x08ABE97Cu);
    aot_mem.aot_direct_store32(r6 + static_cast<std::uint32_t>(20), r7);
    goto RL_08ABF8B4;
RL_08ABE97C:
    r31 = (aot_mem.aot_direct_load32(r29 + static_cast<std::uint32_t>(0)));
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_08ABF8B4:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r17);
    r16 = (r5 | 0u);
    r17 = (r4 | 0u);
    { const std::uint32_t aot_run_words[4]{r18, r19, r20, r31};
      aot_mem.aot_direct_store32_block(r29 + static_cast<std::uint32_t>(8), aot_run_words); }
    r31 = (0x08ABF8E0u);
    r5 = (0u | 0u);
    goto RL_08ABFC04;
RL_08ABFC04:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08AC7670(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AC7670;
RL_08AC7670:
    jump_target = r31;
    r2 = (r4 + static_cast<std::uint32_t>(48));
    pc = jump_target;
    return;
}

void vcs_resident_region_08AC79D4(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AC79D4;
RL_08AC79D4:
    jump_target = r31;
    r2 = (r4 + static_cast<std::uint32_t>(2228));
    pc = jump_target;
    return;
}

void vcs_resident_region_08AC7C50(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AC7C50;
RL_08AC7C50:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(1152)));
    pc = jump_target;
    return;
}

void vcs_resident_region_08AC7C58(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AC7C58;
RL_08AC7C58:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(1156)));
    pc = jump_target;
    return;
}

void vcs_resident_region_08AC8054(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AC8054;
RL_08AC8054:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(2192)));
    pc = jump_target;
    return;
}

void vcs_resident_region_08ADC734(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08ADC734;
RL_08ADC734:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(20)));
    pc = jump_target;
    return;
}

void vcs_resident_region_08ADC754(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08ADC754;
RL_08ADC754:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(24)));
    pc = jump_target;
    return;
}

void vcs_resident_region_08ADC784(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08ADC784;
RL_08ADC784:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(40)));
    pc = jump_target;
    return;
}

void vcs_resident_region_08AF42C4(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AF42C4;
RL_08AF42C4:
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), 0u);
    jump_target = r31;
    r2 = (r4 | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_08AF42D0(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AF42D0;
RL_08AF42D0:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r17);
    r17 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(8), r31);
    { const bool branch_taken = r4 == 0u;
    r16 = (r5 | 0u);
      if (branch_taken) {
          goto RL_08AF4308;
      }
      goto RL_08AF42EC;
    }
RL_08AF42EC:
    r31 = (0x08AF42F4u);
    r4 = (r17 | 0u);
    goto RL_08AF44D0;
RL_08AF4308:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(r29 + static_cast<std::uint32_t>(0), aot_run_words);
      r16 = aot_run_words[0];
      r17 = aot_run_words[1];
      r31 = aot_run_words[2];
    }
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_08AF44D0:
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = r5 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08AF44E0;
      }
      goto RL_08AF44DC;
    }
RL_08AF44DC:
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), 0u);
    goto RL_08AF44E0;
RL_08AF44E0:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08AF44E8(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AF44E8;
RL_08AF44D0:
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = r5 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08AF44E0;
      }
      goto RL_08AF44DC;
    }
RL_08AF44DC:
    aot_mem.aot_direct_store32(r4 + static_cast<std::uint32_t>(0), 0u);
    goto RL_08AF44E0;
RL_08AF44E0:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_08AF44E8:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r17);
    r17 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(8), r31);
    r31 = (0x08AF4504u);
    r16 = (r5 | 0u);
    goto RL_08AF44D0;
}

void vcs_resident_region_08AF80D8(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r18, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AF80D8;
RL_08AF80D8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(r29 + static_cast<std::uint32_t>(84), aot_run_words);
      r16 = aot_run_words[0];
      r17 = aot_run_words[1];
      r18 = aot_run_words[2];
      r31 = aot_run_words[3];
    }
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(112));
    pc = jump_target;
    return;
}

void vcs_resident_region_08AFEDA8(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08AFEDA8;
RL_08AFEDA8:
    jump_target = r31;
    r2 = (r4 | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_08B01E00(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B01E00;
RL_08B01E00:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(352)));
    r5 = (256u << 16u);
    r6 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(208)));
    r5 = (r6 & r5);
    r5 = (0u < r5 ? 1u : 0u);
    r5 = (r5 & 255u);
    { const bool branch_taken = r5 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08B01E8C;
      }
      goto RL_08B01E20;
    }
RL_08B01E20:
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(208)));
    r6 = (512u << 16u);
    r5 = (r5 & r6);
    r5 = (0u < r5 ? 1u : 0u);
    r5 = (r5 & 255u);
    { const bool branch_taken = r5 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08B01E84;
      }
      goto RL_08B01E3C;
    }
RL_08B01E3C:
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(208)));
    r6 = (1024u << 16u);
    r5 = (r5 & r6);
    r5 = (0u < r5 ? 1u : 0u);
    r5 = (r5 & 255u);
    { const bool branch_taken = r5 != 0u;
    // nop
      if (branch_taken) {
          goto RL_08B01E7C;
      }
      goto RL_08B01E58;
    }
RL_08B01E58:
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(208)));
    r5 = (2048u << 16u);
    r4 = (r4 & r5);
    r4 = (0u < r4 ? 1u : 0u);
    r4 = (r4 & 255u);
    { const bool branch_taken = r4 == 0u;
    // nop
      if (branch_taken) {
          goto RL_08B01E94;
      }
      goto RL_08B01E74;
    }
RL_08B01E74:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 4u);
      if (branch_taken) {
          goto RL_08B01E98;
      }
      goto RL_08B01E7C;
    }
RL_08B01E7C:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 5u);
      if (branch_taken) {
          goto RL_08B01E98;
      }
      goto RL_08B01E84;
    }
RL_08B01E84:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 3u);
      if (branch_taken) {
          goto RL_08B01E98;
      }
      goto RL_08B01E8C;
    }
RL_08B01E8C:
    { const bool branch_taken = 0u == 0u;
    r2 = (0u | 2u);
      if (branch_taken) {
          goto RL_08B01E98;
      }
      goto RL_08B01E94;
    }
RL_08B01E94:
    r2 = (0u | 1u);
    goto RL_08B01E98;
RL_08B01E98:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08B0C05C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r16, std::uint32_t &r28, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B0C05C;
RL_08B0C05C:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(20), r16);
    r16 = (0u | 255u);
    aot_mem.aot_direct_store8(r29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(r16));
    aot_mem.aot_direct_store8(r29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(r16));
    aot_mem.aot_direct_store8(r29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(r16));
    aot_mem.aot_direct_store8(r29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(r16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(24), r31);
    r31 = (0x08B0C084u);
    r4 = (r29 | 0u);
    goto RL_08B0C4A8;
RL_08B0C4A8:
    r5 = (aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(0)));
    r6 = (aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(1)));
    r7 = (aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(r28 + static_cast<std::uint32_t>(10440), static_cast<std::uint8_t>(r5));
    r4 = (aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(r28 + static_cast<std::uint32_t>(10441), static_cast<std::uint8_t>(r6));
    aot_mem.aot_direct_store8(r28 + static_cast<std::uint32_t>(10442), static_cast<std::uint8_t>(r7));
    jump_target = r31;
    aot_mem.aot_direct_store8(r28 + static_cast<std::uint32_t>(10443), static_cast<std::uint8_t>(r4));
    pc = jump_target;
    return;
}

void vcs_resident_region_08B0C138(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r18, std::uint32_t &r19, std::uint32_t &r20, std::uint32_t &r28, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B0C138;
RL_08B0C138:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r17);
    r16 = (r6 | 0u);
    r17 = (r5 | 0u);
    { const std::uint32_t aot_run_words[4]{r18, r19, r20, r31};
      aot_mem.aot_direct_store32_block(r29 + static_cast<std::uint32_t>(8), aot_run_words); }
    r31 = (0x08B0C164u);
    r18 = (r4 | 0u);
    goto RL_08B0C4CC;
RL_08B0C4CC:
    jump_target = r31;
    r2 = (r28 + static_cast<std::uint32_t>(10440));
    pc = jump_target;
    return;
}

void vcs_resident_region_08B0C498(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r28, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B0C498;
RL_08B0C498:
    jump_target = r31;
    aot_mem.aot_direct_store32(r28 + static_cast<std::uint32_t>(1972), r4);
    pc = jump_target;
    return;
}

void vcs_resident_region_08B0C4A8(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r28, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B0C4A8;
RL_08B0C4A8:
    r5 = (aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(0)));
    r6 = (aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(1)));
    r7 = (aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(r28 + static_cast<std::uint32_t>(10440), static_cast<std::uint8_t>(r5));
    r4 = (aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(r28 + static_cast<std::uint32_t>(10441), static_cast<std::uint8_t>(r6));
    aot_mem.aot_direct_store8(r28 + static_cast<std::uint32_t>(10442), static_cast<std::uint8_t>(r7));
    jump_target = r31;
    aot_mem.aot_direct_store8(r28 + static_cast<std::uint32_t>(10443), static_cast<std::uint8_t>(r4));
    pc = jump_target;
    return;
}

void vcs_resident_region_08B0C604(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r28, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B0C604;
RL_08B0C4A0:
    jump_target = r31;
    r2 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(1972)));
    pc = jump_target;
    return;
RL_08B0C604:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    r31 = (0x08B0C614u);
    aot_mem.aot_direct_store32(r28 + static_cast<std::uint32_t>(1988), r4);
    goto RL_08B0C4A0;
}

void vcs_resident_region_08B0D88C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B0D88C;
RL_08B0D88C:
    r5 = (r5 << 1u);
    r4 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(16)));
    r5 = (r5 & 255u);
    r2 = (r4 >> (r5 & 31u));
    jump_target = r31;
    r2 = (r2 & 3u);
    pc = jump_target;
    return;
}

void vcs_resident_region_08B1FD70(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r28, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B1FD70;
RL_08B1FD70:
    r7 = (r4 << 7u);
    r6 = (aot_mem.aot_direct_load8(r28 + static_cast<std::uint32_t>(-7080)));
    r4 = (r4 << 4u);
    r5 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(10576)));
    { const bool branch_taken = r6 == 0u;
    r4 = (r7 - r4);
      if (branch_taken) {
          goto RL_08B1FD94;
      }
      goto RL_08B1FD88;
    }
RL_08B1FD88:
    r2 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    r2 = (r2 + r4);
      if (branch_taken) {
          goto RL_08B1FD9C;
      }
      goto RL_08B1FD94;
    }
RL_08B1FD94:
    r2 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(4)));
    r2 = (r2 + r4);
    goto RL_08B1FD9C;
RL_08B1FD9C:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08B20934(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &hi, std::uint32_t &lo, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r28, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B20934;
RL_08B20934:
    r4 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(3648)));
    r5 = (2u << 16u);
    r5 = (r5 + static_cast<std::uint32_t>(-3299));
    { const std::int32_t dividend = static_cast<std::int32_t>(r4); const std::int32_t divisor = static_cast<std::int32_t>(r5); if (divisor == 0) { lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { lo = 0x80000000u; hi = 0u; } else { lo = static_cast<std::uint32_t>(dividend / divisor); hi = static_cast<std::uint32_t>(dividend % divisor); } }
    r4 = (0u + static_cast<std::uint32_t>(16807));
    r5 = (0u + static_cast<std::uint32_t>(2836));
    r6 = (hi);
    r7 = (lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(r6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(r4)); lo = static_cast<std::uint32_t>(product); hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    r2 = (lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(r7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(r5)); lo = static_cast<std::uint32_t>(product); hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    r4 = (lo);
    r2 = (r2 - r4);
    { const bool branch_taken = static_cast<std::int32_t>(r2) > 0;
    aot_mem.aot_direct_store32(r28 + static_cast<std::uint32_t>(3648), r2);
      if (branch_taken) {
          goto RL_08B20990;
      }
      goto RL_08B20980;
    }
RL_08B20980:
    r4 = (32768u << 16u);
    r4 = (r4 + static_cast<std::uint32_t>(-1));
    r2 = (r2 + r4);
    aot_mem.aot_direct_store32(r28 + static_cast<std::uint32_t>(3648), r2);
    goto RL_08B20990;
RL_08B20990:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
}

void vcs_resident_region_08B20998(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &hi, std::uint32_t &lo, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r28, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B20998;
RL_08B20934:
    r4 = (aot_mem.aot_direct_load32(r28 + static_cast<std::uint32_t>(3648)));
    r5 = (2u << 16u);
    r5 = (r5 + static_cast<std::uint32_t>(-3299));
    { const std::int32_t dividend = static_cast<std::int32_t>(r4); const std::int32_t divisor = static_cast<std::int32_t>(r5); if (divisor == 0) { lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { lo = 0x80000000u; hi = 0u; } else { lo = static_cast<std::uint32_t>(dividend / divisor); hi = static_cast<std::uint32_t>(dividend % divisor); } }
    r4 = (0u + static_cast<std::uint32_t>(16807));
    r5 = (0u + static_cast<std::uint32_t>(2836));
    r6 = (hi);
    r7 = (lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(r6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(r4)); lo = static_cast<std::uint32_t>(product); hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    r2 = (lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(r7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(r5)); lo = static_cast<std::uint32_t>(product); hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    r4 = (lo);
    r2 = (r2 - r4);
    { const bool branch_taken = static_cast<std::int32_t>(r2) > 0;
    aot_mem.aot_direct_store32(r28 + static_cast<std::uint32_t>(3648), r2);
      if (branch_taken) {
          goto RL_08B20990;
      }
      goto RL_08B20980;
    }
RL_08B20980:
    r4 = (32768u << 16u);
    r4 = (r4 + static_cast<std::uint32_t>(-1));
    r2 = (r2 + r4);
    aot_mem.aot_direct_store32(r28 + static_cast<std::uint32_t>(3648), r2);
    goto RL_08B20990;
RL_08B20990:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_08B20998:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r31);
    r31 = (0x08B209A8u);
    // nop
    goto RL_08B20934;
}

void vcs_resident_region_08B58100(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r9, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B58100;
RL_08B58100:
    r7 = (r4 | 0u);
    r8 = (r6 | 0u);
    r4 = (r6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = r8 == 0u;
    r6 = (r4 | 0u);
      if (branch_taken) {
          goto RL_08B5813C;
      }
      goto RL_08B58114;
    }
RL_08B58114:
    r9 = (aot_mem.aot_direct_load8(r7 + static_cast<std::uint32_t>(0)));
    r8 = (aot_mem.aot_direct_load8(r5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = r9 != r8;
    // nop
      if (branch_taken) {
          goto RL_08B58144;
      }
      goto RL_08B58124;
    }
RL_08B58124:
    r8 = (r4 | 0u);
    r4 = (r6 + static_cast<std::uint32_t>(-1));
    r7 = (r7 + static_cast<std::uint32_t>(1));
    r5 = (r5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = r8 != 0u;
    r6 = (r4 | 0u);
      if (branch_taken) {
          goto RL_08B58114;
      }
      goto RL_08B5813C;
    }
RL_08B5813C:
    jump_target = r31;
    r2 = (0u | 0u);
    pc = jump_target;
    return;
RL_08B58144:
    jump_target = r31;
    r2 = (r9 - r8);
    pc = jump_target;
    return;
}

void vcs_resident_region_08B5814C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r9, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B5814C;
RL_08B5814C:
    r9 = (r6 | 0u);
    r7 = (r6 + static_cast<std::uint32_t>(-1));
    r8 = (r4 | 0u);
    { const bool branch_taken = r9 == 0u;
    r6 = (r7 | 0u);
      if (branch_taken) {
          goto RL_08B58178;
      }
      goto RL_08B58160;
    }
RL_08B58160:
    r9 = (r7 | 0u);
    aot_mem.aot_direct_store8(r8 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(r5));
    r7 = (r6 + static_cast<std::uint32_t>(-1));
    r8 = (r8 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = r9 != 0u;
    r6 = (r7 | 0u);
      if (branch_taken) {
          goto RL_08B58160;
      }
      goto RL_08B58178;
    }
RL_08B58178:
    jump_target = r31;
    r2 = (r4 | 0u);
    pc = jump_target;
    return;
}

void vcs_resident_region_08B58974(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B58974;
RL_08B58974:
    r6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = r6 == 0u;
    r5 = (r4 | 0u);
      if (branch_taken) {
          goto RL_08B58990;
      }
      goto RL_08B58980;
    }
RL_08B58980:
    r4 = (r4 + static_cast<std::uint32_t>(1));
    goto RL_08B58984;
RL_08B58984:
    r6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(r4 + static_cast<std::uint32_t>(0))))));
    if (r6 != 0u) {
    r4 = (r4 + static_cast<std::uint32_t>(1));
        goto RL_08B58984;
    }
    goto RL_08B58990;
RL_08B58990:
    jump_target = r31;
    r2 = (r4 - r5);
    pc = jump_target;
    return;
}

void vcs_resident_region_08B60680(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r1, std::uint32_t &r2, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r16, std::uint32_t &r17, std::uint32_t &r18, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B60680;
RL_08B60664:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(16), r31);
    r31 = (0x08B60674u);
    r4 = (0u | 4u);
    goto RL_08B607D8;
RL_08B60680:
    r29 = (r29 + static_cast<std::uint32_t>(-16));
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(0), r16);
    r16 = (r4 | 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(4), r17);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(8), r31);
    { const bool branch_taken = r5 != 0u;
    r17 = (2236u << 16u);
      if (branch_taken) {
          goto RL_08B606AC;
      }
      goto RL_08B606A0;
    }
RL_08B606A0:
    r4 = (aot_mem.aot_direct_load32(r17 + static_cast<std::uint32_t>(17068)));
    if (r16 != r4) {
    r4 = (aot_mem.aot_direct_load32(r17 + static_cast<std::uint32_t>(17068)));
        goto RL_08B606B8;
    }
    goto RL_08B606AC;
RL_08B606AC:
    r31 = (0x08B606B4u);
    // nop
    goto RL_08B60664;
RL_08B606B8:
    aot_mem.aot_direct_store32(r16 + static_cast<std::uint32_t>(0), r4);
    aot_mem.aot_direct_store32(r17 + static_cast<std::uint32_t>(17068), r16);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(r29 + static_cast<std::uint32_t>(0), aot_run_words);
      r16 = aot_run_words[0];
      r17 = aot_run_words[1];
      r31 = aot_run_words[2];
    }
    jump_target = r31;
    r29 = (r29 + static_cast<std::uint32_t>(16));
    pc = jump_target;
    return;
RL_08B606D4:
    r4 = (r4 + static_cast<std::uint32_t>(-1));
    r5 = (r4 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = r5 == 0u;
    r2 = (0u | 0u);
      if (branch_taken) {
          goto RL_08B60764;
      }
      goto RL_08B606E4;
    }
RL_08B606E4:
    r4 = (r4 << 2u);
    r1 = (2233u << 16u);
    r1 = (r1 + r4);
    r1 = (aot_mem.aot_direct_load32(r1 + static_cast<std::uint32_t>(-25032)));
    jump_target = r1;
    // nop
    pc = jump_target;
    return;
RL_08B60764:
    jump_target = r31;
    // nop
    pc = jump_target;
    return;
RL_08B6076C:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(16), r16);
    r16 = (r4 | 0u);
    r4 = (2234u << 16u);
    r5 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(20), r17);
    r17 = (aot_mem.aot_direct_load32(r5 + static_cast<std::uint32_t>(12)));
    r4 = (0u | 1u);
    r5 = (2233u << 16u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(24), r18);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(28), r31);
    r31 = (0x08B607A0u);
    r18 = (r5 + static_cast<std::uint32_t>(-25044));
    goto RL_08B606D4;
RL_08B607D8:
    r29 = (r29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(16), r31);
    r31 = (0x08B607E8u);
    // nop
    goto RL_08B6076C;
}

void vcs_resident_region_08B60E5C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &hi, std::uint32_t &lo, std::uint32_t &r2, std::uint32_t &r3, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r9, std::uint32_t &r10, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B60E5C;
RL_08B60E5C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(r5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(r6)); lo = static_cast<std::uint32_t>(product); hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    r10 = (lo);
    { const std::uint64_t product = static_cast<std::uint64_t>(r4) * static_cast<std::uint64_t>(r6); lo = static_cast<std::uint32_t>(product); hi = static_cast<std::uint32_t>(product >> 32u); }
    r9 = (hi);
    r2 = (lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(r4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(r7)); lo = static_cast<std::uint32_t>(product); hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    r4 = (lo);
    r4 = (r4 + r10);
    jump_target = r31;
    r3 = (r4 + r9);
    pc = jump_target;
    return;
}

void vcs_resident_region_08B61B60(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r3, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r29, std::uint32_t &r31, float &f12) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B61B60;
RL_08B61B60:
    r29 = (r29 + static_cast<std::uint32_t>(-48));
    r4 = (r29 + static_cast<std::uint32_t>(16));
    r5 = (r29 + 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(32), r31);
    r31 = (0x08B61B78u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    goto RL_08B62868;
RL_08B62868:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    r3 = (127u << 16u);
    r3 = (r3 | 65535u);
    r6 = (r2 >> 23u);
    r4 = (r2 >> 31u);
    r6 = (r6 & 255u);
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(4), r4);
    { const bool branch_taken = r6 != 0u;
    r7 = (r2 & r3);
      if (branch_taken) {
          goto RL_08B628E4;
      }
      goto RL_08B6288C;
    }
RL_08B6288C:
    { const bool branch_taken = r7 == 0u;
    r2 = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto RL_08B628DC;
      }
      goto RL_08B62894;
    }
RL_08B62894:
    r2 = (16383u << 16u);
    r7 = (r7 << 7u);
    r2 = (r2 | 65535u);
    r3 = (0u + static_cast<std::uint32_t>(-126));
    r4 = (0u + static_cast<std::uint32_t>(3));
    r2 = (r2 < r7 ? 1u : 0u);
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(8), r3);
    { const bool branch_taken = r2 != 0u;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r4);
      if (branch_taken) {
          goto RL_08B628D4;
      }
      goto RL_08B628B8;
    }
RL_08B628B8:
    r4 = (16383u << 16u);
    r4 = (r4 | 65535u);
    goto RL_08B628C0;
RL_08B628C0:
    r7 = (r7 << 1u);
    r2 = (r4 < r7 ? 1u : 0u);
    { const bool branch_taken = r2 == 0u;
    r3 = (r3 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto RL_08B628C0;
      }
      goto RL_08B628D0;
    }
RL_08B628D0:
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(8), r3);
    goto RL_08B628D4;
RL_08B628D4:
    jump_target = r31;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(12), r7);
    pc = jump_target;
    return;
RL_08B628DC:
    jump_target = r31;
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r2);
    pc = jump_target;
    return;
RL_08B628E4:
    r2 = (0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = r6 == r2;
    r2 = (r7 << 7u);
      if (branch_taken) {
          goto RL_08B6290C;
      }
      goto RL_08B628F0;
    }
RL_08B628F0:
    r3 = (16384u << 16u);
    r2 = (r2 | r3);
    r4 = (r6 + static_cast<std::uint32_t>(-127));
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(12), r2);
    r2 = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(8), r4);
    goto RL_08B628DC;
RL_08B6290C:
    if (r7 != 0u) {
    r2 = (16u << 16u);
        goto RL_08B6291C;
    }
    goto RL_08B62914;
RL_08B62914:
    r2 = (0u + static_cast<std::uint32_t>(4));
    goto RL_08B628DC;
RL_08B6291C:
    r2 = (r7 & r2);
    if (r2 == 0u) {
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), 0u);
        goto RL_08B628D4;
    }
    goto RL_08B62928;
RL_08B62928:
    r2 = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(r5 + static_cast<std::uint32_t>(0), r2);
    goto RL_08B628D4;
}

void vcs_resident_region_08B61EF4(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r3, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r9, std::uint32_t &r10, std::uint32_t &r16, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B61EF4;
RL_08B61EF4:
    r29 = (r29 + static_cast<std::uint32_t>(-144));
    r3 = (r5 + 0u);
    r2 = (r4 + 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(128), r16);
    r4 = (r29 + static_cast<std::uint32_t>(96));
    r16 = (r29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(132), r31);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(112), r6);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(116), r7);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(96), r2);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(100), r3);
    r31 = (0x08B61F28u);
    r5 = (r29 + 0u);
    goto RL_08B62C04;
RL_08B62C04:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r3 = (15u << 16u);
    r10 = (r5 + 0u);
    r7 = (r2 >> 20u);
    r5 = (r2 >> 31u);
    r3 = (r3 | 65535u);
    r7 = (r7 & 2047u);
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    r9 = (r2 & r3);
    { const bool branch_taken = r7 != 0u;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(4), r5);
      if (branch_taken) {
          goto RL_08B62CAC;
      }
      goto RL_08B62C30;
    }
RL_08B62C30:
    r2 = (r8 | r9);
    { const bool branch_taken = r2 != 0u;
    r2 = (r8 >> 24u);
      if (branch_taken) {
          goto RL_08B62C48;
      }
      goto RL_08B62C3C;
    }
RL_08B62C3C:
    r2 = (0u + static_cast<std::uint32_t>(2));
    goto RL_08B62C40;
RL_08B62C40:
    jump_target = r31;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r2);
    pc = jump_target;
    return;
RL_08B62C48:
    r4 = (4095u << 16u);
    r9 = (r9 << 8u);
    r9 = (r9 | r2);
    r4 = (r4 | 65535u);
    r2 = (0u + static_cast<std::uint32_t>(-1022));
    r3 = (0u + static_cast<std::uint32_t>(3));
    r4 = (r4 < r9 ? 1u : 0u);
    r8 = (r8 << 8u);
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r2);
    { const bool branch_taken = r4 != 0u;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r3);
      if (branch_taken) {
          goto RL_08B62CA0;
      }
      goto RL_08B62C74;
    }
RL_08B62C74:
    r5 = (4095u << 16u);
    r5 = (r5 | 65535u);
    r4 = (0u + static_cast<std::uint32_t>(-1022));
    goto RL_08B62C80;
RL_08B62C80:
    r3 = (r8 >> 31u);
    r9 = (r9 << 1u);
    r9 = (r9 | r3);
    r2 = (r5 < r9 ? 1u : 0u);
    r8 = (r8 << 1u);
    { const bool branch_taken = r2 == 0u;
    r4 = (r4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto RL_08B62C80;
      }
      goto RL_08B62C9C;
    }
RL_08B62C9C:
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r4);
    goto RL_08B62CA0;
RL_08B62CA0:
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(16), r8);
    jump_target = r31;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(20), r9);
    pc = jump_target;
    return;
RL_08B62CAC:
    r2 = (0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = r7 == r2;
    r6 = (r8 >> 24u);
      if (branch_taken) {
          goto RL_08B62CEC;
      }
      goto RL_08B62CB8;
    }
RL_08B62CB8:
    r3 = (r9 << 8u);
    r3 = (r3 | r6);
    r5 = (4096u << 16u);
    r4 = (0u + static_cast<std::uint32_t>(0));
    r2 = (r8 << 8u);
    r2 = (r2 | r4);
    r3 = (r3 | r5);
    r6 = (r7 + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(16), r2);
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(20), r3);
    r2 = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r6);
    goto RL_08B62C40;
RL_08B62CEC:
    r2 = (r8 | r9);
    { const bool branch_taken = r2 == 0u;
    r2 = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto RL_08B62C40;
      }
      goto RL_08B62CF8;
    }
RL_08B62CF8:
    r3 = (8u << 16u);
    r2 = (0u + static_cast<std::uint32_t>(0));
    r2 = (r8 & r2);
    r3 = (r9 & r3);
    r2 = (r2 | r3);
    if (r2 == 0u) {
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), 0u);
        goto RL_08B62CA0;
    }
    goto RL_08B62D14;
RL_08B62D14:
    r2 = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r2);
    goto RL_08B62CA0;
}

void vcs_resident_region_08B61FD0(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r3, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r9, std::uint32_t &r10, std::uint32_t &r16, std::uint32_t &r18, std::uint32_t &r19, std::uint32_t &r20, std::uint32_t &r21, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B61FD0;
RL_08B61FD0:
    r29 = (r29 + static_cast<std::uint32_t>(-160));
    r2 = (r4 + 0u);
    r3 = (r5 + 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(128), r16);
    r4 = (r29 + static_cast<std::uint32_t>(96));
    r5 = (r29 + 0u);
    r16 = (r29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(96), r2);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(100), r3);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(148), r31);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(112), r6);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(116), r7);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(144), r21);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(140), r20);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(136), r19);
    r31 = (0x08B62014u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(132), r18);
    goto RL_08B62C04;
RL_08B62C04:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r3 = (15u << 16u);
    r10 = (r5 + 0u);
    r7 = (r2 >> 20u);
    r5 = (r2 >> 31u);
    r3 = (r3 | 65535u);
    r7 = (r7 & 2047u);
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    r9 = (r2 & r3);
    { const bool branch_taken = r7 != 0u;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(4), r5);
      if (branch_taken) {
          goto RL_08B62CAC;
      }
      goto RL_08B62C30;
    }
RL_08B62C30:
    r2 = (r8 | r9);
    { const bool branch_taken = r2 != 0u;
    r2 = (r8 >> 24u);
      if (branch_taken) {
          goto RL_08B62C48;
      }
      goto RL_08B62C3C;
    }
RL_08B62C3C:
    r2 = (0u + static_cast<std::uint32_t>(2));
    goto RL_08B62C40;
RL_08B62C40:
    jump_target = r31;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r2);
    pc = jump_target;
    return;
RL_08B62C48:
    r4 = (4095u << 16u);
    r9 = (r9 << 8u);
    r9 = (r9 | r2);
    r4 = (r4 | 65535u);
    r2 = (0u + static_cast<std::uint32_t>(-1022));
    r3 = (0u + static_cast<std::uint32_t>(3));
    r4 = (r4 < r9 ? 1u : 0u);
    r8 = (r8 << 8u);
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r2);
    { const bool branch_taken = r4 != 0u;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r3);
      if (branch_taken) {
          goto RL_08B62CA0;
      }
      goto RL_08B62C74;
    }
RL_08B62C74:
    r5 = (4095u << 16u);
    r5 = (r5 | 65535u);
    r4 = (0u + static_cast<std::uint32_t>(-1022));
    goto RL_08B62C80;
RL_08B62C80:
    r3 = (r8 >> 31u);
    r9 = (r9 << 1u);
    r9 = (r9 | r3);
    r2 = (r5 < r9 ? 1u : 0u);
    r8 = (r8 << 1u);
    { const bool branch_taken = r2 == 0u;
    r4 = (r4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto RL_08B62C80;
      }
      goto RL_08B62C9C;
    }
RL_08B62C9C:
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r4);
    goto RL_08B62CA0;
RL_08B62CA0:
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(16), r8);
    jump_target = r31;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(20), r9);
    pc = jump_target;
    return;
RL_08B62CAC:
    r2 = (0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = r7 == r2;
    r6 = (r8 >> 24u);
      if (branch_taken) {
          goto RL_08B62CEC;
      }
      goto RL_08B62CB8;
    }
RL_08B62CB8:
    r3 = (r9 << 8u);
    r3 = (r3 | r6);
    r5 = (4096u << 16u);
    r4 = (0u + static_cast<std::uint32_t>(0));
    r2 = (r8 << 8u);
    r2 = (r2 | r4);
    r3 = (r3 | r5);
    r6 = (r7 + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(16), r2);
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(20), r3);
    r2 = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r6);
    goto RL_08B62C40;
RL_08B62CEC:
    r2 = (r8 | r9);
    { const bool branch_taken = r2 == 0u;
    r2 = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto RL_08B62C40;
      }
      goto RL_08B62CF8;
    }
RL_08B62CF8:
    r3 = (8u << 16u);
    r2 = (0u + static_cast<std::uint32_t>(0));
    r2 = (r8 & r2);
    r3 = (r9 & r3);
    r2 = (r2 | r3);
    if (r2 == 0u) {
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), 0u);
        goto RL_08B62CA0;
    }
    goto RL_08B62D14;
RL_08B62D14:
    r2 = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r2);
    goto RL_08B62CA0;
}

void vcs_resident_region_08B6256C(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r3, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r9, std::uint32_t &r10, std::uint32_t &r16, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B6256C;
RL_08B6256C:
    r29 = (r29 + static_cast<std::uint32_t>(-112));
    r3 = (r5 + 0u);
    r2 = (r4 + 0u);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(96), r16);
    r4 = (r29 + static_cast<std::uint32_t>(64));
    r16 = (r29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(100), r31);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(64), r2);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(68), r3);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(80), r6);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(84), r7);
    r31 = (0x08B625A0u);
    r5 = (r29 + 0u);
    goto RL_08B62C04;
RL_08B62C04:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r3 = (15u << 16u);
    r10 = (r5 + 0u);
    r7 = (r2 >> 20u);
    r5 = (r2 >> 31u);
    r3 = (r3 | 65535u);
    r7 = (r7 & 2047u);
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    r9 = (r2 & r3);
    { const bool branch_taken = r7 != 0u;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(4), r5);
      if (branch_taken) {
          goto RL_08B62CAC;
      }
      goto RL_08B62C30;
    }
RL_08B62C30:
    r2 = (r8 | r9);
    { const bool branch_taken = r2 != 0u;
    r2 = (r8 >> 24u);
      if (branch_taken) {
          goto RL_08B62C48;
      }
      goto RL_08B62C3C;
    }
RL_08B62C3C:
    r2 = (0u + static_cast<std::uint32_t>(2));
    goto RL_08B62C40;
RL_08B62C40:
    jump_target = r31;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r2);
    pc = jump_target;
    return;
RL_08B62C48:
    r4 = (4095u << 16u);
    r9 = (r9 << 8u);
    r9 = (r9 | r2);
    r4 = (r4 | 65535u);
    r2 = (0u + static_cast<std::uint32_t>(-1022));
    r3 = (0u + static_cast<std::uint32_t>(3));
    r4 = (r4 < r9 ? 1u : 0u);
    r8 = (r8 << 8u);
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r2);
    { const bool branch_taken = r4 != 0u;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r3);
      if (branch_taken) {
          goto RL_08B62CA0;
      }
      goto RL_08B62C74;
    }
RL_08B62C74:
    r5 = (4095u << 16u);
    r5 = (r5 | 65535u);
    r4 = (0u + static_cast<std::uint32_t>(-1022));
    goto RL_08B62C80;
RL_08B62C80:
    r3 = (r8 >> 31u);
    r9 = (r9 << 1u);
    r9 = (r9 | r3);
    r2 = (r5 < r9 ? 1u : 0u);
    r8 = (r8 << 1u);
    { const bool branch_taken = r2 == 0u;
    r4 = (r4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto RL_08B62C80;
      }
      goto RL_08B62C9C;
    }
RL_08B62C9C:
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r4);
    goto RL_08B62CA0;
RL_08B62CA0:
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(16), r8);
    jump_target = r31;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(20), r9);
    pc = jump_target;
    return;
RL_08B62CAC:
    r2 = (0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = r7 == r2;
    r6 = (r8 >> 24u);
      if (branch_taken) {
          goto RL_08B62CEC;
      }
      goto RL_08B62CB8;
    }
RL_08B62CB8:
    r3 = (r9 << 8u);
    r3 = (r3 | r6);
    r5 = (4096u << 16u);
    r4 = (0u + static_cast<std::uint32_t>(0));
    r2 = (r8 << 8u);
    r2 = (r2 | r4);
    r3 = (r3 | r5);
    r6 = (r7 + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(16), r2);
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(20), r3);
    r2 = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r6);
    goto RL_08B62C40;
RL_08B62CEC:
    r2 = (r8 | r9);
    { const bool branch_taken = r2 == 0u;
    r2 = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto RL_08B62C40;
      }
      goto RL_08B62CF8;
    }
RL_08B62CF8:
    r3 = (8u << 16u);
    r2 = (0u + static_cast<std::uint32_t>(0));
    r2 = (r8 & r2);
    r3 = (r9 & r3);
    r2 = (r2 | r3);
    if (r2 == 0u) {
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), 0u);
        goto RL_08B62CA0;
    }
    goto RL_08B62D14;
RL_08B62D14:
    r2 = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r2);
    goto RL_08B62CA0;
}

void vcs_resident_region_08B627F0(GuestMemory::AotFastView &aot_mem, std::uint32_t &pc, std::uint32_t &r2, std::uint32_t &r3, std::uint32_t &r4, std::uint32_t &r5, std::uint32_t &r6, std::uint32_t &r7, std::uint32_t &r8, std::uint32_t &r9, std::uint32_t &r10, std::uint32_t &r29, std::uint32_t &r31) noexcept {
    std::uint32_t jump_target = 0u;
    goto RL_08B627F0;
RL_08B627F0:
    r29 = (r29 + static_cast<std::uint32_t>(-64));
    r2 = (r4 + 0u);
    r3 = (r5 + 0u);
    r4 = (r29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(48), r31);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(32), r2);
    aot_mem.aot_direct_store32(r29 + static_cast<std::uint32_t>(36), r3);
    r31 = (0x08B62814u);
    r5 = (r29 + 0u);
    goto RL_08B62C04;
RL_08B62C04:
    r2 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(4)));
    r3 = (15u << 16u);
    r10 = (r5 + 0u);
    r7 = (r2 >> 20u);
    r5 = (r2 >> 31u);
    r3 = (r3 | 65535u);
    r7 = (r7 & 2047u);
    r8 = (aot_mem.aot_direct_load32(r4 + static_cast<std::uint32_t>(0)));
    r9 = (r2 & r3);
    { const bool branch_taken = r7 != 0u;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(4), r5);
      if (branch_taken) {
          goto RL_08B62CAC;
      }
      goto RL_08B62C30;
    }
RL_08B62C30:
    r2 = (r8 | r9);
    { const bool branch_taken = r2 != 0u;
    r2 = (r8 >> 24u);
      if (branch_taken) {
          goto RL_08B62C48;
      }
      goto RL_08B62C3C;
    }
RL_08B62C3C:
    r2 = (0u + static_cast<std::uint32_t>(2));
    goto RL_08B62C40;
RL_08B62C40:
    jump_target = r31;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r2);
    pc = jump_target;
    return;
RL_08B62C48:
    r4 = (4095u << 16u);
    r9 = (r9 << 8u);
    r9 = (r9 | r2);
    r4 = (r4 | 65535u);
    r2 = (0u + static_cast<std::uint32_t>(-1022));
    r3 = (0u + static_cast<std::uint32_t>(3));
    r4 = (r4 < r9 ? 1u : 0u);
    r8 = (r8 << 8u);
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r2);
    { const bool branch_taken = r4 != 0u;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r3);
      if (branch_taken) {
          goto RL_08B62CA0;
      }
      goto RL_08B62C74;
    }
RL_08B62C74:
    r5 = (4095u << 16u);
    r5 = (r5 | 65535u);
    r4 = (0u + static_cast<std::uint32_t>(-1022));
    goto RL_08B62C80;
RL_08B62C80:
    r3 = (r8 >> 31u);
    r9 = (r9 << 1u);
    r9 = (r9 | r3);
    r2 = (r5 < r9 ? 1u : 0u);
    r8 = (r8 << 1u);
    { const bool branch_taken = r2 == 0u;
    r4 = (r4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto RL_08B62C80;
      }
      goto RL_08B62C9C;
    }
RL_08B62C9C:
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r4);
    goto RL_08B62CA0;
RL_08B62CA0:
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(16), r8);
    jump_target = r31;
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(20), r9);
    pc = jump_target;
    return;
RL_08B62CAC:
    r2 = (0u + static_cast<std::uint32_t>(2047));
    { const bool branch_taken = r7 == r2;
    r6 = (r8 >> 24u);
      if (branch_taken) {
          goto RL_08B62CEC;
      }
      goto RL_08B62CB8;
    }
RL_08B62CB8:
    r3 = (r9 << 8u);
    r3 = (r3 | r6);
    r5 = (4096u << 16u);
    r4 = (0u + static_cast<std::uint32_t>(0));
    r2 = (r8 << 8u);
    r2 = (r2 | r4);
    r3 = (r3 | r5);
    r6 = (r7 + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(16), r2);
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(20), r3);
    r2 = (0u + static_cast<std::uint32_t>(3));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(8), r6);
    goto RL_08B62C40;
RL_08B62CEC:
    r2 = (r8 | r9);
    { const bool branch_taken = r2 == 0u;
    r2 = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto RL_08B62C40;
      }
      goto RL_08B62CF8;
    }
RL_08B62CF8:
    r3 = (8u << 16u);
    r2 = (0u + static_cast<std::uint32_t>(0));
    r2 = (r8 & r2);
    r3 = (r9 & r3);
    r2 = (r2 | r3);
    if (r2 == 0u) {
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), 0u);
        goto RL_08B62CA0;
    }
    goto RL_08B62D14;
RL_08B62D14:
    r2 = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(r10 + static_cast<std::uint32_t>(0), r2);
    goto RL_08B62CA0;
}

} // namespace psprecomp
