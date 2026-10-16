// igBoolMetaField: Alchemy class registration (0x80038800..0x800388B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBoolMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void *fn_80038778();
extern char igBoolMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igBoolMetaField)

void igBoolMetaField_register()
{
    meta_registerClass(0, &igBoolMetaField_meta, igMetaField_register,
                       fn_80021D70, igBoolMetaField_getMetaCall,
                       igBoolMetaField_className, 0x34,
                       fn_80038778, 0, 0, igBoolMetaField_dependencies);
}

META_GET_META_CALL(igBoolMetaField)

}
#pragma pop
