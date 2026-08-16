# VCS Tier-2 Superblock V1 — Python launcher fix (2026-08-16)

## Problem
`profiles/vcs/scripts/build_release_ninja.bat` invoked the superblock generator with the hard-coded command `python`. On Windows systems where Python is installed through the standard `py` launcher but `python.exe` resolves only to the Microsoft Store app-execution alias, build step `[0b2/7]` failed before CMake/Ninja.

The preceding Tier-2 transform step already used `py -3` successfully, so no new dependency is required.

## Fix
The build script now probes Python 3 in this order:
1. `py -3`
2. `python`

Each candidate is executed with a real Python 3 version check. The Microsoft Store alias therefore cannot be mistaken for a usable interpreter.

The selected command is printed before running `tools/build_tier2_superblocks.py`.

## Scope
No C++, generated AOT corpus, superblock CFG, scheduler accounting, CMake flags, or runtime behavior changed. This is build-script-only.

## Expected output
```
[0b2/7] Building profile-guided Tier-2 superblock cluster 0154+0155...
  Python 3:        py -3
...
```
