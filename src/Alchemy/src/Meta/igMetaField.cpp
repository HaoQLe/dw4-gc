// igMetaField: Alchemy class registration (0x8002A674..0x8002A764). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMetaField)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
extern char igMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMetaField)

META_ARK_REGISTER(igMetaField)

void igMetaField_register()
{
    meta_registerClass(1, &igMetaField_meta, igObject_register,
                       fn_800237D0, igMetaField_getMetaCall,
                       igMetaField_className, 0x34,
                       0, igMetaField_fieldInit, 0, igMetaField_dependencies);
}

META_GET_META_CALL(igMetaField)

}
#pragma pop
