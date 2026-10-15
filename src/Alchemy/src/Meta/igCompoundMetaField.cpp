// igCompoundMetaField: Alchemy class registration (0x800378D4..0x80037A54). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igCompoundMetaField)
META_DECLARE(igMetaField)

extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_80034048();
extern char igCompoundMetaField_dependencies[12];
extern char igCompoundMetaField_fieldNames[4];
extern char igCompoundMetaField_fieldOffsets[4];
extern char igCompoundMetaField_fieldStorage[4];
extern char igCompoundMetaField_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCompoundMetaField)

META_ARK_REGISTER(igCompoundMetaField)

void igCompoundMetaField_register()
{
    fn_80021B94();
    meta_registerClass(1, &igCompoundMetaField_meta, igMetaField_register,
                       fn_80021D70, igCompoundMetaField_getMetaCall,
                       igCompoundMetaField_className, 0x38,
                       0, igCompoundMetaField_fieldInit, 0, igCompoundMetaField_dependencies);
}

META_GET_META_CALL(igCompoundMetaField)

void igCompoundMetaField_fieldInit()
{
    Meta::igMetaObject *meta = igCompoundMetaField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCompoundMetaField_fieldTypes, 1);
    Meta::igObjectRefMetaField *fieldListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80034048();
    fieldListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    fieldListField->_construct = true;
    meta_setupFields(meta, igCompoundMetaField_fieldNames, igCompoundMetaField_fieldStorage, igCompoundMetaField_fieldOffsets, base);
}

}
#pragma pop
