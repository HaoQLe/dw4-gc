// igProperty: Alchemy class registration (0x801B4808..0x801B4A64). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igProperty)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
void *fn_801B43B0();
void *fn_801B44D4();
extern char igProperty_dependencies[12];
extern char igProperty_fieldNames[8];
extern char igProperty_fieldOffsets[8];
extern char igProperty_fieldStorage[8];
extern char igProperty_fieldTypes[8];
}

struct igPropertyInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _key;
    igObjectRefMember _value;
    inline ~igPropertyInstance() { __vtable = igProperty_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igProperty)

void *igProperty_vtableRead()
{
    igPropertyInstance object;
    object.__vtable = igProperty_vtable;
    object._key._value = 0;
    object._value._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igProperty)

void igProperty_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igProperty_meta, igObject_register,
                       fn_800237D0, igProperty_getMetaCall,
                       igProperty_className, 0x10,
                       igProperty_vtableRead, igProperty_fieldInit, 0, igProperty_dependencies);
}

META_GET_META_CALL(igProperty)

void igProperty_fieldInit()
{
    Meta::igMetaObject *meta = igProperty_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igProperty_fieldTypes, 2);
    Meta::igObjectRefMetaField *keyField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B44D4();
    keyField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *valueField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_801B43B0();
    valueField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    meta_setupFields(meta, igProperty_fieldNames, igProperty_fieldStorage, igProperty_fieldOffsets, base);
}

}
#pragma pop
