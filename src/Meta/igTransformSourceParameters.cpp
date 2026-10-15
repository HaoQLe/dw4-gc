// igTransformSourceParameters: Alchemy class registration (0x801AB1CC..0x801AB2B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformSourceParameters)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransformSourceParameters)

META_ARK_REGISTER(igTransformSourceParameters)

void igTransformSourceParameters_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igTransformSourceParameters_meta, igObject_register,
                       fn_800237D0, igTransformSourceParameters_getMetaCall,
                       igTransformSourceParameters_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igTransformSourceParameters)

}
#pragma pop
