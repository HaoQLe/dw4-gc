// igUnsignedIntMetaField: Alchemy class registration (0x80022CB0..0x80022D60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedIntMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void *fn_80022C28();
extern char igUnsignedIntMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igUnsignedIntMetaField)

void igUnsignedIntMetaField_register()
{
    meta_registerClass(0, &igUnsignedIntMetaField_meta, igMetaField_register,
                       fn_80021D70, igUnsignedIntMetaField_getMetaCall,
                       igUnsignedIntMetaField_className, 0x34,
                       fn_80022C28, 0, 0, igUnsignedIntMetaField_dependencies);
}

META_GET_META_CALL(igUnsignedIntMetaField)

}
#pragma pop
