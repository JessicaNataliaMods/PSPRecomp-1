#!/usr/bin/env python3
from __future__ import annotations
import collections, json, pathlib, re, sys

PROFILE = pathlib.Path(sys.argv[1]).resolve() if len(sys.argv) > 1 else pathlib.Path(__file__).resolve().parents[1]
GEN = PROFILE / 'generated'
MANIFEST = GEN / 'v87_tiny_leaf_manifest.json'
MARK = '// V87_TINY_LEAF_INLINE '
MIN_SITES = 40
MAX_STATEMENTS = 4
LABEL_RE = re.compile(r'^L_([0-9A-F]{8}):\n', re.M)
ENTRY_RE = re.compile(r'case (\d+)u: goto L_([0-9A-F]{8});')
CALL_RE = re.compile(
    r'(?P<indent>[ \t]*)if \(rt\.invoke_chained_direct<&recomp_unit_(?P<unit>\d+)_entry, '
    r'(?P<unit_arg>\d+)u, (?P<entry>\d+)u, (?P<pc>0x[0-9A-F]+)u>\(ctx, &aot_mem\) && '
    r'ctx\.pc == (?P<cont>0x[0-9A-F]+)u\) goto L_(?P<cont_label>[0-9A-F]{8});\n(?P=indent)return;')

def parse_units():
    out={}
    for path in sorted(GEN.glob('generated_unit_*.cpp')):
        unit=int(path.stem.rsplit('_',1)[1]); text=path.read_text(encoding='utf-8',errors='ignore')
        labels=list(LABEL_RE.finditer(text)); code_end=text.find('void register_generated_unit_'); code_end=len(text) if code_end<0 else code_end
        blocks={}
        for i,m in enumerate(labels):
            end=min(labels[i+1].start() if i+1<len(labels) else code_end, code_end)
            blocks[int(m.group(1),16)]=text[m.start():end]
        entries={int(pc,16):int(eid) for eid,pc in ENTRY_RE.findall(text)}
        out[unit]=(path,text,blocks,entries)
    return out

def body_for(block:str):
    if any(x in block for x in ('invoke_chained_direct','invoke_chained_call','invoke_hle','invoke_syscall','rt.unsupported')): return None
    if re.search(r'goto L_[0-9A-F]{8};',block): return None
    if any(v.strip()!='ctx.gpr[31]' for v in re.findall(r'jump_target = ([^;]+);',block)): return None
    semantic=[]
    for raw in block.splitlines()[1:]:
        s=raw.strip()
        if not s or s.startswith('//') or s in {'jump_target = ctx.gpr[31];','local_pc = jump_target;','ctx.pc = jump_target;','return;'} or '++local_transfers' in s: continue
        if ('jump_target' in s or 'local_pc' in s or 'local_transfers' in s or
            not s.endswith(';') or '{' in s or '}' in s): return None
        semantic.append(s)
    return semantic if len(semantic)<=MAX_STATEMENTS else None

units=parse_units()
existing=sum(text.count(MARK) for _p,text,_b,_e in units.values())
if MANIFEST.exists() and existing:
    data=json.loads(MANIFEST.read_text())
    if existing==data.get('sites'):
        print(f'V8.7 tiny-leaf inline already applied: targets={data["targets"]} sites={data["sites"]}')
        raise SystemExit(0)
    MANIFEST.unlink()

calls=collections.Counter()
for _u,(_p,text,_b,_e) in units.items():
    for m in CALL_RE.finditer(text): calls[(int(m.group('unit')),int(m.group('pc'),16))]+=1
selected={}
for unit,(_p,_text,blocks,entries) in units.items():
    for pc,entry in entries.items():
        sites=calls[(unit,pc)]
        if sites < MIN_SITES: continue
        body=body_for(blocks.get(pc,''))
        if body is not None:
            selected[(unit,pc)]={'entry':entry,'body':body,'sites':sites}

replaced=0; changed=0
for source_unit,(path,text,_blocks,_entries) in units.items():
    def repl(m):
        nonlocal_dummy = None
        unit=int(m.group('unit')); pc=int(m.group('pc'),16); key=(unit,pc)
        if int(m.group('unit_arg')) != unit: return m.group(0)
        info=selected.get(key)
        if info is None: return m.group(0)
        if int(m.group('entry')) != info['entry']: return m.group(0)
        cont=int(m.group('cont'),16)
        if cont != int(m.group('cont_label'),16): return m.group(0)
        indent=m.group('indent')
        body='\n'.join(f'{indent}    {line}' for line in info['body'])
        original=m.group(0)
        fallback='\n'.join(indent+line if line else line for line in original[len(indent):].splitlines())
        return (f'{indent}{MARK}unit={unit:04d} pc=0x{pc:08X}\n'
                f'{indent}if (rt.can_inline_generated_leaf<{unit}u>()) {{\n'
                f'{body}\n'
                f'{indent}    ctx.pc = 0x{cont:08X}u;\n'
                f'{indent}    if (!rt.account_inlined_generated_leaf(ctx)) return;\n'
                f'{indent}    goto L_{cont:08X};\n'
                f'{indent}}}\n'
                f'{original}')
    new,n=CALL_RE.subn(repl,text)
    if n and new!=text:
        path.write_text(new,encoding='utf-8'); changed+=1
        replaced += new.count(MARK)-text.count(MARK)

manifest={'version':1,'targets':len(selected),'sites':replaced,'changed_units':changed,
          'selection':{'min_static_jal_sites':MIN_SITES,'max_simple_statements':MAX_STATEMENTS},
          'targets_detail':[{'unit':u,'pc':f'0x{pc:08X}','sites':v['sites'],'statements':len(v['body'])} for (u,pc),v in sorted(selected.items())]}
MANIFEST.write_text(json.dumps(manifest,indent=2)+'\n')
print(f'V8.7 tiny-leaf inline: targets={len(selected)} sites={replaced} changed_units={changed}')
if len(selected)!=26 or replaced!=2017:
    raise SystemExit(f'unexpected V8.7 corpus shape targets={len(selected)} sites={replaced}; expected 26/2017')
