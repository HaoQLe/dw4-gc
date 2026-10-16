// igCharMetaField: Alchemy class registration (0x80037D00..0x80037DB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCharMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void *fn_80037C78();
extern char igCharMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igCharMetaField)

void igCharMetaField_register()
{
    meta_registerClass(0, &igCharMetaField_meta, igMetaField_register,
                       fn_80021D70, igCharMetaField_getMetaCall,
                       igCharMetaField_className, 0x34,
                       fn_80037C78, 0, 0, igCharMetaField_dependencies);
}

META_GET_META_CALL(igCharMetaField)

}
#pragma pop
