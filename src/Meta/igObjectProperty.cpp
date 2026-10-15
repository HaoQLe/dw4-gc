// igObjectProperty: Alchemy class registration (0x80140880..0x801409F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igObjectProperty)
META_DECLARE(igItemBase)
META_DECLARE(igObject)

extern "C" {
void fn_8012FC48();
void *fn_8013496C();
extern char igObjectProperty_dependencies[8];
extern char igObjectProperty_fieldNames[4];
extern char igObjectProperty_fieldOffsets[4];
extern char igObjectProperty_fieldStorage[4];
extern char igObjectProperty_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectProperty)

META_ARK_REGISTER(igObjectProperty)

void igObjectProperty_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igObjectProperty_meta, igItemBase_register,
                       fn_8013496C, igObjectProperty_getMetaCall,
                       igObjectProperty_className, 0x24,
                       0, igObjectProperty_fieldInit, 0, igObjectProperty_dependencies);
}

META_GET_META_CALL(igObjectProperty)

void igObjectProperty_fieldInit()
{
    Meta::igMetaObject *meta = igObjectProperty_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igObjectProperty_fieldTypes, 1);
    Meta::igObjectRefMetaField *objectField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    objectField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(igObject_meta);
    meta_setupFields(meta, igObjectProperty_fieldNames, igObjectProperty_fieldStorage, igObjectProperty_fieldOffsets, base);
}

}
#pragma pop
