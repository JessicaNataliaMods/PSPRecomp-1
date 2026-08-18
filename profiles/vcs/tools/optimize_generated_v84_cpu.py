#!/usr/bin/env python3
from __future__ import annotations
import argparse, pathlib, re

LOAD = re.compile(
    r'float vfpu_value\[4\]\{\s*'
    r'std::bit_cast<float>\(aot_mem\.aot_(?:direct_)?load32\(vfpu_address \+ 0u\)\),\s*'
    r'std::bit_cast<float>\(aot_mem\.aot_(?:direct_)?load32\(vfpu_address \+ 4u\)\),\s*'
    r'std::bit_cast<float>\(aot_mem\.aot_(?:direct_)?load32\(vfpu_address \+ 8u\)\),\s*'
    r'std::bit_cast<float>\(aot_mem\.aot_(?:direct_)?load32\(vfpu_address \+ 12u\)\)\};', re.S)
STORE = re.compile(
    r'aot_mem\.aot_(?:direct_)?store32\(vfpu_address \+ 0u, (?P<v0>[^;]+)\);\s*'
    r'aot_mem\.aot_(?:direct_)?store32\(vfpu_address \+ 4u, (?P<v1>[^;]+)\);\s*'
    r'aot_mem\.aot_(?:direct_)?store32\(vfpu_address \+ 8u, (?P<v2>[^;]+)\);\s*'
    r'aot_mem\.aot_(?:direct_)?store32\(vfpu_address \+ 12u, (?P<v3>[^;]+)\);')


_SIMPLE_GPR_LOAD = re.compile(
    r'^(?P<indent>\s*)ctx\.gpr\[(?P<dst>\d+)\] = \(aot_mem\.aot_direct_load32\('
    r'ctx\.gpr\[(?P<base>\d+)\] \+ static_cast<std::uint32_t>\((?P<offset>-?\d+)\)\)\);$')
_SIMPLE_FPR_LOAD = re.compile(
    r'^(?P<indent>\s*)ctx\.fpr\[(?P<dst>\d+)\] = std::bit_cast<float>\(aot_mem\.aot_direct_load32\('
    r'ctx\.gpr\[(?P<base>\d+)\] \+ static_cast<std::uint32_t>\((?P<offset>-?\d+)\)\)\);$')
_SIMPLE_STORE = re.compile(
    r'^(?P<indent>\s*)aot_mem\.aot_direct_store32\('
    r'ctx\.gpr\[(?P<base>\d+)\] \+ static_cast<std::uint32_t>\((?P<offset>-?\d+)\), '
    r'(?P<value>.+)\);$')
_SAFE_STORE_VALUE = re.compile(
    r'^(?:ctx\.gpr\[\d+\]|std::bit_cast<std::uint32_t>\(ctx\.fpr\[\d+\]\)|'
    r'static_cast<std::uint32_t>\([^;]+\)|0x[0-9A-Fa-f]+u|\d+u?)$')

# These ten source units feed the protected V8.2.7A Tier-2 extractor. Leave
# their ordinary scalar runs intact so Tier-2 generation remains byte-identical;
# they still receive branchless direct accessors and LV.Q/SV.Q block lowering.
_TIER2_SOURCE_UNITS = {'0043','0044','0084','0085','0086','0129','0154','0155','0157','0158'}

def _match_load(line: str):
    m=_SIMPLE_GPR_LOAD.match(line)
    if m: return m,'gpr'
    m=_SIMPLE_FPR_LOAD.match(line)
    if m: return m,'fpr'
    return None,None

def batch_direct_runs(text: str):
    lines=text.splitlines(); out=[]; i=0; lr=lw=sr=sw=0
    while i < len(lines):
        first,kind0=_match_load(lines[i])
        if first is not None:
            base=int(first.group('base')); indent=first.group('indent')
            group=[(first,kind0)]; j=i+1; expected=int(first.group('offset'))+4
            while j < len(lines):
                m,kind=_match_load(lines[j])
                if m is None or int(m.group('base')) != base or m.group('indent') != indent or int(m.group('offset')) != expected:
                    break
                if kind == 'gpr' and int(m.group('dst')) == base:
                    break
                group.append((m,kind)); expected += 4; j += 1
            if len(group) >= 3 and not (kind0 == 'gpr' and int(first.group('dst')) == base):
                n=len(group); start=int(first.group('offset'))
                out.append(f'{indent}{{ std::uint32_t aot_run_words[{n}]{{}};')
                out.append(f'{indent}  aot_mem.aot_direct_load32_block(ctx.gpr[{base}] + static_cast<std::uint32_t>({start}), aot_run_words);')
                for k,(m,kind) in enumerate(group):
                    if kind == 'gpr': out.append(f'{indent}  ctx.gpr[{m.group("dst")}] = aot_run_words[{k}];')
                    else: out.append(f'{indent}  ctx.fpr[{m.group("dst")}] = std::bit_cast<float>(aot_run_words[{k}]);')
                out.append(f'{indent}}}')
                lr += 1; lw += n; i=j; continue
        first=_SIMPLE_STORE.match(lines[i])
        if first is not None and _SAFE_STORE_VALUE.match(first.group('value').strip()):
            base=int(first.group('base')); indent=first.group('indent'); group=[first]
            j=i+1; expected=int(first.group('offset'))+4
            while j < len(lines):
                m=_SIMPLE_STORE.match(lines[j])
                if (m is None or int(m.group('base')) != base or m.group('indent') != indent or
                    int(m.group('offset')) != expected or _SAFE_STORE_VALUE.match(m.group('value').strip()) is None):
                    break
                group.append(m); expected += 4; j += 1
            if len(group) >= 3:
                n=len(group); start=int(first.group('offset'))
                values=', '.join(m.group('value').strip() for m in group)
                out.append(f'{indent}{{ const std::uint32_t aot_run_words[{n}]{{{values}}};')
                out.append(f'{indent}  aot_mem.aot_direct_store32_block(ctx.gpr[{base}] + static_cast<std::uint32_t>({start}), aot_run_words); }}')
                sr += 1; sw += n; i=j; continue
        out.append(lines[i]); i += 1
    return '\n'.join(out)+('\n' if text.endswith('\n') else ''), {'load_runs':lr,'load_words':lw,'store_runs':sr,'store_words':sw}

DIRECT_NAMES = (
    'load8','load16','load32','store8','store16','store32',
    'load_word_left','load_word_right','store_word_left','store_word_right'
)

def optimize(text: str, unit_id: str):
    stats={'lvq':0,'svq':0,'direct':0,'load_runs':0,'load_words':0,'store_runs':0,'store_words':0}
    def lr(_):
        stats['lvq'] += 1
        return ('std::uint32_t vfpu_words[4]{};\n'
                '      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);\n'
                '      float vfpu_value[4]{\n'
                '        std::bit_cast<float>(vfpu_words[0]),\n'
                '        std::bit_cast<float>(vfpu_words[1]),\n'
                '        std::bit_cast<float>(vfpu_words[2]),\n'
                '        std::bit_cast<float>(vfpu_words[3])};')
    text=LOAD.sub(lr,text)
    def sr(m):
        stats['svq'] += 1
        return ('const std::uint32_t vfpu_words[4]{' + ', '.join(m.group(f'v{i}').strip() for i in range(4)) + '};\n'
                '      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words);')
    text=STORE.sub(sr,text)
    # Any remaining scalar/unaligned AOT access in the VCS automatic corpus is
    # valid only after VCSNative's hard direct-fastmem launch check.
    for name in DIRECT_NAMES:
        old=f'aot_mem.aot_{name}('
        new=f'aot_mem.aot_direct_{name}('
        c=text.count(old)
        if c:
            stats['direct'] += c
            text=text.replace(old,new)
    # Normalize block helper names if generated by the new codegen.
    text=text.replace('aot_mem.aot_load32_block(', 'aot_mem.aot_direct_load32_block(')
    text=text.replace('aot_mem.aot_store32_block(', 'aot_mem.aot_direct_store32_block(')
    if unit_id not in _TIER2_SOURCE_UNITS:
        text, run_stats = batch_direct_runs(text)
        stats.update(run_stats)
    return text,stats

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('profile', type=pathlib.Path)
    a=ap.parse_args()
    gen=a.profile/'generated'
    totals={'files':0,'changed':0,'lvq':0,'svq':0,'direct':0,'load_runs':0,'load_words':0,'store_runs':0,'store_words':0}
    for p in sorted(gen.glob('generated_unit_*.cpp')):
        old=p.read_text(encoding='utf-8')
        unit_id=p.stem.rsplit('_',1)[-1]
        new,st=optimize(old, unit_id)
        totals['files']+=1
        for k in ('lvq','svq','direct','load_runs','load_words','store_runs','store_words'): totals[k]+=st[k]
        if new!=old:
            p.write_text(new,encoding='utf-8',newline='\n')
            totals['changed']+=1
    print('V8.4 AOT direct optimizer: ' + ' '.join(f'{k}={v}' for k,v in totals.items()))
    return 0
if __name__=='__main__': raise SystemExit(main())
