from pathlib import Path
import sys
root=Path(__file__).resolve().parents[1]
dx=(root/'host/ge_gpu_backend_dx12.cpp').read_text(encoding='utf-8', errors='ignore')
ui=(root/'host/savedata_utility_ui.cpp').read_text(encoding='utf-8', errors='ignore')
req=[
 ('host marker helper','explicit_host_decoded_texture' in dx),
 ('triple host key contract','draw.texture_cache_key_hint == draw.texture_image_key_hint' in dx and 'draw.texture_cache_key_hint == draw.texture_content_signature' in dx),
 ('texture availability bypasses framebuffer','!explicit_host_decoded_texture(draw)' in dx),
 ('font uses host triple keys','text_draw.texture_cache_key_hint = kSavedataFontCacheKey' in ui and 'text_draw.texture_content_signature = kSavedataFontCacheKey' in ui),
 ('icons use host triple keys','icon_draw.texture_cache_key_hint = icon.cache_key' in ui and 'icon_draw.texture_content_signature = icon.cache_key' in ui),
 ('v95 physical diag','V9.5 host font atlas uploaded as cache texture' in ui),
]
fail=[name for name,ok in req if not ok]
if fail:
 print('V9.5 HOST TEXTURE ISOLATION AUDIT: FAIL')
 for x in fail: print(' -',x)
 sys.exit(1)
print('V9.5 HOST TEXTURE ISOLATION AUDIT: PASS')
for name,_ in req: print(' -',name)
