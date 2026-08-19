#!/usr/bin/env python3
from __future__ import annotations
import argparse, collections, json, re
from pathlib import Path

BEGIN='// PSPRECOMP_AOT_REGCACHE_BEGIN\n'
END='// PSPRECOMP_AOT_REGCACHE_END\n'
META_RE=re.compile(r'// PSPRECOMP_AOT_REGCACHE_META gprs=([0-9,]*) fprs=([0-9,]*) gpr_occ=(\d+) fpr_occ=(\d+) gpr_total=(\d+) fpr_total=(\d+)')

ENTRY_RE=re.compile(r'(void\s+(recomp_unit_\d+)_entry\(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem\)\s*\{\n)')
WRAPPER_RE_TEMPLATE=r'\nvoid\s+{name}\(Runtime &rt, AllegrexContext &ctx\)\s*\{{'
# All generated chain helpers return bool and may mutate the full guest context.
CHAIN_RE=re.compile(
    r'(rt\.invoke_(?:chained_trusted_direct|chained_direct|compact_generated_leaf)<[^;\n]+?>\(ctx, &aot_mem\)|rt\.invoke_chained_call\(ctx, &aot_mem\))')
RESIDENT_RE=re.compile(
    r'(rt\.invoke_resident_generated_leaf<&(?P<fn>[A-Za-z_]\w*),\s*'
    r'(?P<unit>\d+)u,\s*(?P<entry>\d+)u,\s*(?P<pc>0x[0-9A-Fa-f]+)u>'
    r'\(ctx, &aot_mem(?P<args>[^\)]*)\))')
NATIVE_RE=re.compile(r'(rt\.invoke_native_fast_path\([^;\n]*?,\s*ctx\))')
SIGNED_RE=re.compile(r'(ctx\.execute_signed_(?:add|sub)\([^\)]*\))')
TIER2_CALL_RE=re.compile(r'(?m)^(\s*)(((?:[A-Za-z_]\w*::)*tier2_superblock_[A-Za-z0-9_]+)\(rt, ctx, aot_mem, [^;]+\);)')
TERMINAL_RE=re.compile(r'(?m)^(\s*)(rt\.(?:unsupported|arithmetic_overflow)\([^;]+\);)')
RETURN_RE=re.compile(r'\breturn;')



CHAIN_WRAP_RE=re.compile(r'\(\[&\]\(\) \{ AOT_REGCACHE_SYNC_OUT\(\); const bool aot_regcache_same_ = \((rt\.invoke_(?:chained_trusted_direct|chained_direct|compact_generated_leaf)<[^;\n]+?>\(ctx, &aot_mem\)|rt\.invoke_chained_call\(ctx, &aot_mem\))\); if \(aot_regcache_same_\) AOT_REGCACHE_SYNC_IN\(\); else aot_regcache_valid = false; return aot_regcache_same_; \}\(\)\)')
RESIDENT_WRAP_RE=re.compile(r'\(\[&\]\(\) \{ /\*PSPRECOMP_RESIDENT_SCHED_SAFE\*/ .*?return (?P<resident>rt\.invoke_resident_generated_leaf<[^;\n]+?>\(ctx, &aot_mem[^;\n]*\)); .*?return aot_regcache_same_; \}\(\)\)')
NATIVE_WRAP_RE=re.compile(r'\(\[&\]\(\) \{ AOT_REGCACHE_SYNC_OUT\(\); (rt\.invoke_native_fast_path\([^;\n]+\)); AOT_REGCACHE_SYNC_IN\(\); \}\(\)\)')
SIGNED_WRAP_RE=re.compile(r'\(\[&\]\(\) \{ AOT_REGCACHE_SYNC_OUT\(\); const bool aot_regcache_ok_ = (ctx\.execute_signed_(?:add|sub)\([^\)]*\)); AOT_REGCACHE_SYNC_IN\(\); return aot_regcache_ok_; \}\(\)\)')

def strip_transform(path:Path):
    text=path.read_text(encoding='utf-8',errors='ignore')
    begin=text.find(BEGIN)
    if begin<0: return False, {'file':path.name,'already_stripped':True}
    end=text.find(END,begin)
    if end<0: raise RuntimeError(f'{path}: regcache end marker missing')
    end += len(END)
    meta=META_RE.search(text[begin:end])
    if not meta: raise RuntimeError(f'{path}: regcache metadata missing')
    gsel=[int(x) for x in meta.group(1).split(',') if x]
    fsel=[int(x) for x in meta.group(2).split(',') if x]
    text=text[:begin]+text[end:]
    text=text.replace('\n#undef AOT_REGCACHE_SYNC_IN\n#undef AOT_REGCACHE_SYNC_OUT\n','')
    text=RESIDENT_WRAP_RE.sub(lambda m:m.group('resident'),text)
    text=CHAIN_WRAP_RE.sub(lambda m:m.group(1),text)
    text=NATIVE_WRAP_RE.sub(lambda m:m.group(1),text)
    text=SIGNED_WRAP_RE.sub(lambda m:m.group(1),text)
    # Tier2/fatal visibility spill lines were inserted as standalone statements.
    text=re.sub(r'(?m)^(\s*)AOT_REGCACHE_SYNC_OUT\(\); aot_regcache_valid = false;\n(?=\1(?:[A-Za-z_]\w*::)*tier2_superblock_)','',text)
    text=re.sub(r'(?m)^\s*AOT_REGCACHE_SYNC_OUT\(\);\n(?=\s*rt\.(?:unsupported|arithmetic_overflow)\()','',text)
    text=text.replace('AOT_REGCACHE_SYNC_OUT(); return;','return;')
    # Replace resident aliases by complete identifier token. A naïve per-register
    # .replace() corrupts names such as aot_gpr_29 when aot_gpr_2 is replaced first.
    text=re.sub(r'\baot_gpr_(\d+)\b', lambda m: f'ctx.gpr[{m.group(1)}]', text)
    text=re.sub(r'\baot_fpr_(\d+)\b', lambda m: f'ctx.fpr[{m.group(1)}]', text)
    # No transform-only symbol may survive a canonical strip.
    leftovers=('AOT_REGCACHE_','aot_regcache_','aot_gpr_','aot_fpr_')
    if any(x in text for x in leftovers):
        raise RuntimeError(f'{path}: regcache strip left transform-only symbols')
    path.write_text(text,encoding='utf-8')
    return True, {'file':path.name,'stripped':True,'gpr_regs':gsel,'fpr_regs':fsel}


def choose_regs(body:str, kind:str, count:int, resident_weight:int=1):
    pat = r'ctx\.gpr\[(\d+)\]' if kind=='gpr' else r'ctx\.fpr\[(\d+)\]'
    c=collections.Counter(int(x) for x in re.findall(pat, body))
    if kind=='gpr': c.pop(0, None)
    score=c.copy()
    if resident_weight > 1:
        for call in re.findall(r'invoke_resident_generated_leaf<[^;\n]+?>\(ctx, &aot_mem([^\)]*)\)', body):
            rc=collections.Counter(int(x) for x in re.findall(pat, call))
            if kind=='gpr': rc.pop(0, None)
            for reg, hits in rc.items(): score[reg] += (resident_weight - 1) * hits
    regs=[r for r,_ in score.most_common(count)]
    return regs, c


def transform(path:Path, gprs:int, fprs:int, resident_weight:int=1):
    text=path.read_text(encoding='utf-8', errors='ignore')
    if BEGIN in text:
        mm=META_RE.search(text)
        if mm:
            gsel=[int(x) for x in mm.group(1).split(',') if x]; fsel=[int(x) for x in mm.group(2).split(',') if x]
            return False, {'file':path.name,'already':True,'gpr_regs':gsel,'fpr_regs':fsel,'gpr_occurrences':int(mm.group(3)),'fpr_occurrences':int(mm.group(4)),'gpr_total':int(mm.group(5)),'fpr_total':int(mm.group(6))}
        return False, {'file':path.name,'already':True}
    m=ENTRY_RE.search(text)
    if not m: return False, {'file':path.name,'skipped':'no-entry'}
    unit_name=m.group(2)
    body_start=m.end()
    wm=re.search(WRAPPER_RE_TEMPLATE.format(name=re.escape(unit_name)), text[body_start:])
    if not wm: return False, {'file':path.name,'skipped':'no-wrapper'}
    body_end=body_start+wm.start()
    body=text[body_start:body_end]
    gsel,gcnt=choose_regs(body,'gpr',gprs,resident_weight)
    fsel,fcnt=choose_regs(body,'fpr',fprs,resident_weight)
    if not gsel and not fsel: return False, {'file':path.name,'skipped':'no-regs'}

    # Resident regions keep register-file values native only between scheduler
    # safe-points. If this logical dispatch can preempt, fall back to the
    # ordinary V8.9 fully synchronized chain before PSP thread ownership changes.
    def wrap_resident(mm):
        expr=mm.group(1)
        unit=int(mm.group('unit')); entry=int(mm.group('entry')); pc=int(mm.group('pc'),16)
        fallback=(f'rt.invoke_resident_scheduler_fallback<&recomp_unit_{unit:04d}_entry, '
                  f'{unit}u, {entry}u, 0x{pc:08X}u>(ctx, &aot_mem)')
        return ('([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ '
                'if (rt.resident_generated_leaf_fast_allowed()) return '+expr+'; '
                'AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = ('+fallback+'); '
                'if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; '
                'return aot_regcache_same_; }())')
    # First wrap context-visible boundaries while expressions still use ctx.*.
    def wrap_chain(mm):
        expr=mm.group(1)
        return ('([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = ('+expr+'); '
                'if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; '
                'return aot_regcache_same_; }())')
    body=CHAIN_RE.sub(wrap_chain, body)
    # Apply resident safe-point wrappers after ordinary chains so the fallback
    # chained call inserted here is not wrapped a second time.
    body=RESIDENT_RE.sub(wrap_resident, body)
    def wrap_native(mm):
        expr=mm.group(1)
        return ('([&]() { AOT_REGCACHE_SYNC_OUT(); '+expr+'; AOT_REGCACHE_SYNC_IN(); }())')
    body=NATIVE_RE.sub(wrap_native, body)
    def wrap_signed(mm):
        expr=mm.group(1)
        return ('([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_ok_ = '+expr+'; '
                'AOT_REGCACHE_SYNC_IN(); return aot_regcache_ok_; }())')
    body=SIGNED_RE.sub(wrap_signed, body)
    # Tier2 superblocks own the context after the call and the generated entry returns.
    body=TIER2_CALL_RE.sub(lambda mm: f'{mm.group(1)}AOT_REGCACHE_SYNC_OUT(); aot_regcache_valid = false;\n{mm.group(1)}{mm.group(2)}', body)
    # Fatal/unsupported paths should expose current architectural GPR/FPR values.
    body=TERMINAL_RE.sub(lambda mm: f'{mm.group(1)}AOT_REGCACHE_SYNC_OUT();\n{mm.group(1)}{mm.group(2)}', body)
    # Every ordinary function exit materializes resident registers. Do this before
    # inserting lambdas/macros so their internal returns are not rewritten.
    body=RETURN_RE.sub('AOT_REGCACHE_SYNC_OUT(); return;', body)

    # Replace architectural array traffic only after visibility wrappers exist.
    for r in gsel: body=body.replace(f'ctx.gpr[{r}]', f'aot_gpr_{r}')
    for r in fsel: body=body.replace(f'ctx.fpr[{r}]', f'aot_fpr_{r}')

    gdecl=''.join(f'    std::uint32_t aot_gpr_{r} = ctx.gpr[{r}];\n' for r in gsel)
    fdecl=''.join(f'    float aot_fpr_{r} = ctx.fpr[{r}];\n' for r in fsel)
    out=' '.join([*(f'ctx.gpr[{r}] = aot_gpr_{r};' for r in gsel), *(f'ctx.fpr[{r}] = aot_fpr_{r};' for r in fsel)])
    inn=' '.join([*(f'aot_gpr_{r} = ctx.gpr[{r}];' for r in gsel), *(f'aot_fpr_{r} = ctx.fpr[{r}];' for r in fsel)])
    meta=(f'// PSPRECOMP_AOT_REGCACHE_META gprs={",".join(map(str,gsel))} fprs={",".join(map(str,fsel))} gpr_occ={sum(gcnt[r] for r in gsel)} fpr_occ={sum(fcnt[r] for r in fsel)} gpr_total={sum(gcnt.values())} fpr_total={sum(fcnt.values())}\n')
    pre=(BEGIN+meta+gdecl+fdecl+
         '    bool aot_regcache_valid = true;\n'+
         f'#define AOT_REGCACHE_SYNC_OUT() do {{ if (aot_regcache_valid) {{ {out} }} }} while (false)\n'+
         f'#define AOT_REGCACHE_SYNC_IN() do {{ if (aot_regcache_valid) {{ {inn} }} }} while (false)\n'+END)
    post=('\n#undef AOT_REGCACHE_SYNC_IN\n#undef AOT_REGCACHE_SYNC_OUT\n')
    new=text[:body_start]+pre+body+post+text[body_end:]
    path.write_text(new, encoding='utf-8')
    return True, {
        'file':path.name,'gpr_regs':gsel,'fpr_regs':fsel,
        'gpr_occurrences':sum(gcnt[r] for r in gsel),
        'fpr_occurrences':sum(fcnt[r] for r in fsel),
        'gpr_total':sum(gcnt.values()),'fpr_total':sum(fcnt.values()),
    }


def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('directory', type=Path)
    ap.add_argument('--gprs',type=int,default=6)
    ap.add_argument('--fprs',type=int,default=4)
    ap.add_argument('--stats',type=Path)
    ap.add_argument('--resident-weight',type=int,default=1)
    ap.add_argument('--strip',action='store_true')
    ns=ap.parse_args()
    rows=[]; changed=0
    for p in sorted(ns.directory.glob('generated_unit_*.cpp')):
        if ns.strip: ch,st=strip_transform(p)
        else: ch,st=transform(p,ns.gprs,ns.fprs,ns.resident_weight)
        changed+=int(ch); rows.append(st)
    summary={
        'mode':'strip' if ns.strip else 'apply',
        'files':len(rows),'changed':changed,
        'gpr_occurrences':sum(r.get('gpr_occurrences',0) for r in rows),
        'fpr_occurrences':sum(r.get('fpr_occurrences',0) for r in rows),
        'gpr_total':sum(r.get('gpr_total',0) for r in rows),
        'fpr_total':sum(r.get('fpr_total',0) for r in rows),
        'resident_weight':ns.resident_weight,
        'units':rows,
    }
    if ns.stats:
        ns.stats.parent.mkdir(parents=True,exist_ok=True)
        ns.stats.write_text(json.dumps(summary,indent=2),encoding='utf-8')
    print(('AOT register residency strip' if ns.strip else 'AOT register residency') + ': files=%d changed=%d gpr=%d/%d fpr=%d/%d' % (
        summary['files'],changed,summary['gpr_occurrences'],summary['gpr_total'],summary['fpr_occurrences'],summary['fpr_total']))
if __name__=='__main__': main()
