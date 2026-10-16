// igStringMetaField: Alchemy class registration (0x800253DC..0x80025494). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringMetaField)
META_DECLARE(igRefMetaField)

extern "C" {
void *fn_80025348();
void *fn_80025494();
extern char igStringMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igStringMetaField)

void igStringMetaField_register()
{
    meta_registerClass(0, &igStringMetaField_meta, igRefMetaField_register,
                       fn_80025494, igStringMetaField_getMetaCall,
                       igStringMetaField_className, 0x3C,
                       fn_80025348, igStringMetaField_fieldInit, 0, igStringMetaField_dependencies);
}

META_GET_META_CALL(igStringMetaField)

}
#pragma pop
