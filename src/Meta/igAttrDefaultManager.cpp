// igAttrDefaultManager: Alchemy class registration (0x800BB1C4..0x800BB2AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAttrDefaultManager)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800ABC8C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrDefaultManager)

META_ARK_REGISTER(igAttrDefaultManager)

void igAttrDefaultManager_register()
{
    fn_800ABC8C();
    meta_registerClass(1, &igAttrDefaultManager_meta, igObject_register,
                       fn_800237D0, igAttrDefaultManager_getMetaCall,
                       igAttrDefaultManager_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igAttrDefaultManager)

}
#pragma pop
