// igUnsignedShortMetaField: Alchemy class registration (0x80021FF4..0x800220A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedShortMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void *fn_80021F6C();
extern char igUnsignedShortMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igUnsignedShortMetaField)

void igUnsignedShortMetaField_register()
{
    meta_registerClass(0, &igUnsignedShortMetaField_meta, igMetaField_register,
                       fn_80021D70, igUnsignedShortMetaField_getMetaCall,
                       igUnsignedShortMetaField_className, 0x34,
                       fn_80021F6C, 0, 0, igUnsignedShortMetaField_dependencies);
}

META_GET_META_CALL(igUnsignedShortMetaField)

}
#pragma pop
