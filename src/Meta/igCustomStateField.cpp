// igCustomStateField: Alchemy class registration (0x800D30A4..0x800D3334). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igCustomStateField)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void *fn_8002A638();
void fn_800CE2F8();
extern char igCustomStateField_dependencies[8];
extern char igCustomStateField_fieldNames[8];
extern char igCustomStateField_fieldOffsets[8];
extern char igCustomStateField_fieldStorage[8];
extern char igCustomStateField_fieldTypes[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igCustomStateFieldInstance : igNamedObjectInstance {
    char unknown0C[4];
    igObjectRefMember _stateField;
    char unknown14[12];
    inline ~igCustomStateFieldInstance() { __vtable = igCustomStateField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCustomStateField)

META_GET_META(igCustomStateField)

void *igCustomStateField_vtableRead()
{
    igCustomStateFieldInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igCustomStateField_vtable;
    object._stateField._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCustomStateField)

void igCustomStateField_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igCustomStateField_meta, igNamedObject_register,
                       fn_80023CF4, igCustomStateField_getMetaCall,
                       igCustomStateField_className, 0x14,
                       igCustomStateField_vtableRead, igCustomStateField_fieldInit, 0, igCustomStateField_dependencies);
}

META_GET_META_CALL(igCustomStateField)

void igCustomStateField_fieldInit()
{
    Meta::igMetaObject *meta = igCustomStateField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCustomStateField_fieldTypes, 2);
    Meta::igObjectRefMetaField *stateFieldField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_8002A638();
    stateFieldField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igCustomStateField_fieldNames, igCustomStateField_fieldStorage, igCustomStateField_fieldOffsets, base);
}

}
#pragma pop
