#!/usr/bin/env python3
"""Read-only basic-block GPR cache for measured VCS AOT hotspots.

Safety rule: ONLY cache GPRs that are read but never written anywhere in the
same guest basic block. There is therefore no dirty state and no writeback.
Blocks containing Runtime calls or AllegrexContext member-function calls are
skipped because those calls may observe/mutate architectural GPR state.
Guest-memory AotFastView calls are allowed: they operate on guest memory and do
not receive AllegrexContext.
"""
from __future__ import annotations
import argparse, collections, pathlib, re
from dataclasses import dataclass

LABEL_RE = re.compile(r"(?m)^L_[0-9A-F]+:\n")
GPR_RE = re.compile(r"ctx\.gpr\[([1-9]|[12][0-9]|3[01])\]")
CTX_METHOD_RE = re.compile(r"ctx\.[A-Za-z_]\w*\s*\(")
MARKER = "// PSPRECOMP_TIER2_GPR_READONLY_CACHE_V1"

@dataclass
class Stats:
    blocks_cached: int = 0
    registers_cached: int = 0
    occurrences_replaced: int = 0
    blocks_skipped_runtime: int = 0
    blocks_skipped_ctx_method: int = 0
    def add(self, other: 'Stats') -> None:
        for name in self.__dataclass_fields__:
            setattr(self, name, getattr(self, name) + getattr(other, name))

def _written(block: str, reg: int) -> bool:
    tok = re.escape(f"ctx.gpr[{reg}]")
    # Direct/compound assignment, increment/decrement, or prefix increment.
    if re.search(tok + r"\s*(?:=|\+=|-=|\*=|/=|%=|&=|\|=|\^=|<<=|>>=|\+\+|--)", block):
        return True
    if re.search(r"(?:\+\+|--)\s*" + tok, block):
        return True
    return False

def _transform_block(label: str, block: str, threshold: int) -> tuple[str, Stats]:
    s = Stats()
    if "rt." in block or "ctx.execute_" in block:
        s.blocks_skipped_runtime = 1
        return label + block, s
    # Any AllegrexContext method call is conservatively a synchronization
    # boundary. Direct ctx.gpr/fpr/vfpu field accesses are not matched here.
    if CTX_METHOD_RE.search(block):
        s.blocks_skipped_ctx_method = 1
        return label + block, s

    counts = collections.Counter(GPR_RE.findall(block))
    selected = []
    for reg_s, count in counts.items():
        reg = int(reg_s)
        if count >= threshold and not _written(block, reg):
            selected.append(reg)
    selected.sort()
    if not selected:
        return label + block, s

    original_counts = {r: block.count(f"ctx.gpr[{r}]") for r in selected}
    for r in selected:
        block = block.replace(f"ctx.gpr[{r}]", f"g{r}_ro")

    init = ''.join(f"    const std::uint32_t g{r}_ro = ctx.gpr[{r}];\n" for r in selected)
    s.blocks_cached = 1
    s.registers_cached = len(selected)
    s.occurrences_replaced = sum(original_counts.values())
    # Per-label scope prevents any generated goto from bypassing a C++ local
    # initialization belonging to a different guest basic block.
    return label + "{\n" + init + block + "}\n", s

def transform_text(text: str, threshold: int = 4) -> tuple[str, Stats]:
    if MARKER in text:
        return text, Stats()
    matches = list(LABEL_RE.finditer(text))
    if not matches:
        return text, Stats()
    out=[]; last=0; total=Stats()
    for i,m in enumerate(matches):
        start=m.end()
        if i+1 < len(matches):
            end=matches[i+1].start()
        else:
            end=text.find("\n}\n\nvoid ", start)
            if end < 0: end=len(text)
        out.append(text[last:m.start()])
        transformed, s = _transform_block(text[m.start():start], text[start:end], threshold)
        out.append(transformed); total.add(s); last=end
    out.append(text[last:])
    result=''.join(out)
    if result != text:
        result = MARKER + "\n" + result
    return result, total

def optimize_file(path: pathlib.Path, threshold: int, check: bool) -> Stats:
    original=path.read_text(encoding='utf-8')
    transformed,s=transform_text(original, threshold)
    if transformed != original and not check:
        path.write_text(transformed, encoding='utf-8', newline='\n')
    return s

def main() -> int:
    ap=argparse.ArgumentParser()
    ap.add_argument('paths', nargs='+', type=pathlib.Path)
    ap.add_argument('--threshold', type=int, default=4)
    ap.add_argument('--check', action='store_true')
    a=ap.parse_args(); total=Stats(); files=[]
    for p in a.paths:
        files.extend(sorted(p.glob('generated_unit_*.cpp'))) if p.is_dir() else files.append(p)
    changed=0
    for p in files:
        before=p.read_text(encoding='utf-8')
        s=optimize_file(p,a.threshold,a.check); total.add(s)
        if MARKER not in before and s.blocks_cached: changed += 1
    print(f"GPR-RO cache: files={len(files)} changed={changed} blocks={total.blocks_cached} "
          f"locals={total.registers_cached} occurrences={total.occurrences_replaced} "
          f"skip_runtime={total.blocks_skipped_runtime} skip_ctx_method={total.blocks_skipped_ctx_method} "
          f"threshold={a.threshold} check={int(a.check)}")
    return 0
if __name__ == '__main__': raise SystemExit(main())
