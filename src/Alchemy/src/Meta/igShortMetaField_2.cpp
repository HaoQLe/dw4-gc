// igShortMetaField: Alchemy class registration (0x80025B8C..0x80025C3C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igShortMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void *fn_80025B04();
extern char igShortMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igShortMetaField)

void igShortMetaField_register()
{
    meta_registerClass(0, &igShortMetaField_meta, igMetaField_register,
                       fn_80021D70, igShortMetaField_getMetaCall,
                       igShortMetaField_className, 0x34,
                       fn_80025B04, 0, 0, igShortMetaField_dependencies);
}

META_GET_META_CALL(igShortMetaField)

}
#pragma pop
