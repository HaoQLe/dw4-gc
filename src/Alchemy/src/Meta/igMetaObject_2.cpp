// igMetaObject: Alchemy class registration (0x8002A0A8..0x8002A164). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMetaObject)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void *fn_80029FFC();
extern char igMetaObject_dependencies[16];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igMetaObject)

void igMetaObject_register()
{
    meta_registerClass(0, &igMetaObject_meta, igObject_register,
                       fn_800237D0, igMetaObject_getMetaCall,
                       igMetaObject_className, 0x64,
                       fn_80029FFC, igMetaObject_fieldInit, 0, igMetaObject_dependencies);
}

META_GET_META_CALL(igMetaObject)

}
#pragma pop
