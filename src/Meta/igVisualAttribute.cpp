// igVisualAttribute: Alchemy class registration (0x800ABFD0..0x800AC0B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVisualAttribute)
META_DECLARE(igAttr)

extern "C" {
void fn_800ABC8C();
void *fn_800AC0B8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVisualAttribute)

META_ARK_REGISTER(igVisualAttribute)

void igVisualAttribute_register()
{
    fn_800ABC8C();
    meta_registerClass(1, &igVisualAttribute_meta, igAttr_register,
                       fn_800AC0B8, igVisualAttribute_getMetaCall,
                       igVisualAttribute_className, 0xC,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igVisualAttribute)

}
#pragma pop
