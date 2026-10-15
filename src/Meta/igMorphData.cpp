// igMorphData: Alchemy class registration (0x800B3EA4..0x800B3F8C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMorphData)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800ABC8C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMorphData)

META_ARK_REGISTER(igMorphData)

void igMorphData_register()
{
    fn_800ABC8C();
    meta_registerClass(1, &igMorphData_meta, igObject_register,
                       fn_800237D0, igMorphData_getMetaCall,
                       igMorphData_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igMorphData)

}
#pragma pop
