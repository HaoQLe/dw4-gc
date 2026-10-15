// igImageLoader: Alchemy class registration (0x800D1CBC..0x800D1DA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igImageLoader)
META_DECLARE(igImageUtils)

extern "C" {
void fn_800CE2F8();
void *fn_800D1DA4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igImageLoader)

META_ARK_REGISTER(igImageLoader)

void igImageLoader_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igImageLoader_meta, igImageUtils_register,
                       fn_800D1DA4, igImageLoader_getMetaCall,
                       igImageLoader_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igImageLoader)

}
#pragma pop
