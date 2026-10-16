// igRefMetaField: Alchemy class registration (0x800272FC..0x80027454). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRefMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
extern char igRefMetaField_dependencies[8];
extern char igRefMetaField_fieldNames[8];
extern char igRefMetaField_fieldOffsets[8];
extern char igRefMetaField_fieldStorage[8];
extern char igRefMetaField_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRefMetaField)

META_ARK_REGISTER(igRefMetaField)

void igRefMetaField_register()
{
    meta_registerClass(1, &igRefMetaField_meta, igMetaField_register,
                       fn_80021D70, igRefMetaField_getMetaCall,
                       igRefMetaField_className, 0x38,
                       0, igRefMetaField_fieldInit, 0, igRefMetaField_dependencies);
}

META_GET_META_CALL(igRefMetaField)

void igRefMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igRefMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRefMetaField_fieldTypes, 2);
    meta_setupFields(meta, igRefMetaField_fieldNames, igRefMetaField_fieldStorage, igRefMetaField_fieldOffsets, base);
}

}
#pragma pop
