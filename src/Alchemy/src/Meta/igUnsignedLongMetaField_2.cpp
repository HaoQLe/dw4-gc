// igUnsignedLongMetaField: Alchemy class registration (0x80022634..0x800226E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedLongMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void *fn_800225AC();
extern char igUnsignedLongMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igUnsignedLongMetaField)

void igUnsignedLongMetaField_register()
{
    meta_registerClass(0, &igUnsignedLongMetaField_meta, igMetaField_register,
                       fn_80021D70, igUnsignedLongMetaField_getMetaCall,
                       igUnsignedLongMetaField_className, 0x34,
                       fn_800225AC, 0, 0, igUnsignedLongMetaField_dependencies);
}

META_GET_META_CALL(igUnsignedLongMetaField)

}
#pragma pop
