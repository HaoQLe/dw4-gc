// igTransformSource: Alchemy class registration (0x801AB2F0..0x801AB3D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformSource)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransformSource)

META_ARK_REGISTER(igTransformSource)

void igTransformSource_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igTransformSource_meta, igObject_register,
                       fn_800237D0, igTransformSource_getMetaCall,
                       igTransformSource_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igTransformSource)

}
#pragma pop
