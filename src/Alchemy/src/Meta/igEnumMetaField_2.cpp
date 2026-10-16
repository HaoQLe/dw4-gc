// igEnumMetaField: Alchemy class registration (0x8003155C..0x80031690). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igRawRefMetaField.h>

META_DECLARE(igEnumMetaField)
META_DECLARE(igMetaField)

extern "C" {
void *fn_80021D70();
void *fn_800314D4();
extern char igEnumMetaField_dependencies[8];
extern char igEnumMetaField_fieldNames[4];
extern char igEnumMetaField_fieldOffsets[4];
extern char igEnumMetaField_fieldStorage[4];
extern char igEnumMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igEnumMetaField)

void igEnumMetaField_register()
{
    meta_registerClass(0, &igEnumMetaField_meta, igMetaField_register,
                       fn_80021D70, igEnumMetaField_getMetaCall,
                       igEnumMetaField_className, 0x38,
                       fn_800314D4, igEnumMetaField_fieldInit, 0, igEnumMetaField_dependencies);
}

META_GET_META_CALL(igEnumMetaField)

void igEnumMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igEnumMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igEnumMetaField_fieldTypes, 1);
    Meta::igRawRefMetaField *getMetaEnumFunctionField = static_cast<Meta::igRawRefMetaField *>(meta_field(meta, base));
    getMetaEnumFunctionField->_persistent = false;
    meta_setupFields(meta, igEnumMetaField_fieldNames, igEnumMetaField_fieldStorage, igEnumMetaField_fieldOffsets, base);
}

}
#pragma pop
