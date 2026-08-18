#!/usr/bin/env python3
from __future__ import annotations
import argparse, pathlib, re

BINARY = re.compile(
    r'\{ float vfpu_s\[4\]\{\}, vfpu_t\[4\]\{\}, vfpu_d\[4\]\{\};\s*'
    r'ctx\.read_vfpu_vector_with_source_prefix_ct<(?P<s>\d+)u, (?P<len>[1-4])u, 0u>\(vfpu_s\);\s*'
    r'ctx\.read_vfpu_vector_with_source_prefix_ct<(?P<t>\d+)u, (?P=len)u, 1u>\(vfpu_t\);\s*'
    r'for \(std::uint32_t i = 0; i < (?P=len)u; \+\+i\) vfpu_d\[i\] = (?P<expr>vfpu_s\[i\] [\+\-\*/] vfpu_t\[i\]);\s*'
    r'ctx\.write_vfpu_vector_with_destination_prefix_ct<(?P<d>\d+)u, (?P=len)u>\(vfpu_d\); \}', re.S)

UNARY = re.compile(
    r'\{ float vfpu_s\[4\]\{\}, vfpu_d\[4\]\{\};\s*'
    r'ctx\.read_vfpu_vector_with_source_prefix_ct<(?P<s>\d+)u, (?P<len>[1-4])u, 0u>\(vfpu_s\);\s*'
    r'for \(std::uint32_t i = 0; i < (?P=len)u; \+\+i\) vfpu_d\[i\] = (?P<expr>[^;]+);\s*'
    r'ctx\.write_vfpu_vector_with_destination_prefix_ct<(?P<d>\d+)u, (?P=len)u>\(vfpu_d\); \}', re.S)

BINARY_OP = {
    'vfpu_s[i] + vfpu_t[i]': 0,
    'vfpu_s[i] - vfpu_t[i]': 1,
    'vfpu_s[i] * vfpu_t[i]': 2,
    'vfpu_s[i] / vfpu_t[i]': 3,
}
UNARY_OP = {
    'vfpu_s[i]': 0,
    'std::fabs(vfpu_s[i])': 1,
    '-vfpu_s[i]': 2,
    'vfpu_s[i] <= 0.0f ? 0.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i])': 4,
    'vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i])': 5,
    '1.0f / vfpu_s[i]': 16,
    '1.0f / std::sqrt(vfpu_s[i])': 17,
    'std::sin(vfpu_s[i] * 1.57079632679489661923f)': 18,
    'std::cos(vfpu_s[i] * 1.57079632679489661923f)': 19,
    'std::exp2(vfpu_s[i])': 20,
    'std::log2(vfpu_s[i])': 21,
    'std::fabs(std::sqrt(vfpu_s[i]))': 22,
    'std::asin(vfpu_s[i]) * 0.63661977236758134308f': 23,
    '-1.0f / vfpu_s[i]': 24,
    '-std::sin(vfpu_s[i] * 1.57079632679489661923f)': 26,
    '1.0f / std::exp2(vfpu_s[i])': 31,
}

def optimize(text: str):
    stats={'vec3':0,'unary':0}
    def rb(m):
        op=BINARY_OP.get(m.group('expr'))
        if op is None: return m.group(0)
        stats['vec3'] += 1
        return (f'ctx.execute_vfpu_vec3_ct<{m.group("d")}u, {m.group("s")}u, '
                f'{m.group("t")}u, {m.group("len")}u, {op}u>();')
    text=BINARY.sub(rb,text)
    def ru(m):
        expr=m.group('expr').strip()
        op=UNARY_OP.get(expr)
        if op is None: return m.group(0)
        stats['unary'] += 1
        return (f'ctx.execute_vfpu_unary_ct<{m.group("d")}u, {m.group("s")}u, '
                f'{m.group("len")}u, {op}u>();')
    text=UNARY.sub(ru,text)
    return text,stats

def main():
    ap=argparse.ArgumentParser(); ap.add_argument('profile',type=pathlib.Path); a=ap.parse_args()
    totals={'files':0,'changed':0,'new_vec3':0,'new_unary':0,'vec3':0,'unary':0}
    for p in sorted((a.profile/'generated').glob('generated_unit_*.cpp')):
        old=p.read_text(encoding='utf-8'); new,st=optimize(old)
        totals['files']+=1; totals['new_vec3']+=st['vec3']; totals['new_unary']+=st['unary']
        totals['vec3'] += new.count('execute_vfpu_vec3_ct<')
        totals['unary'] += new.count('execute_vfpu_unary_ct<')
        if new!=old:
            p.write_text(new,encoding='utf-8',newline='\n'); totals['changed']+=1
    print('V8.5 VFPU fast-lane optimizer: ' + ' '.join(f'{k}={v}' for k,v in totals.items()))
    if totals['vec3'] < 2000 or totals['unary'] < 1000:
        raise SystemExit('V8.5 VFPU optimizer coverage unexpectedly low')
    return 0
if __name__=='__main__': raise SystemExit(main())
