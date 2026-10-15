// igIterateField: Alchemy class registration (0x80144434..0x80144678). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igIterateField)
META_DECLARE(igIterator)

extern "C" {
void *fn_80029F84();
void fn_8012FC48();
void *fn_80143FCC();
extern char igIterateField_dependencies[8];
extern char igIterateField_fieldNames[8];
extern char igIterateField_fieldOffsets[8];
extern char igIterateField_fieldStorage[8];
extern char igIterateField_fieldTypes[8];
extern char lbl_804A9C44[];
}

struct igIterateFieldInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _iterated;
    char unknown0C[4];
    inline ~igIterateFieldInstance() { __vtable = igIterateField_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIterateField)

META_GET_META(igIterateField)

void *igIterateField_vtableRead()
{
    igIterateFieldInstance object;
    object.__vtable = lbl_804A9C44;
    object.__vtable = igIterateField_vtable;
    object._iterated._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIterateField)

void igIterateField_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igIterateField_meta, igIterator_register,
                       fn_80143FCC, igIterateField_getMetaCall,
                       igIterateField_className, 0x10,
                       igIterateField_vtableRead, igIterateField_fieldInit, 0, igIterateField_dependencies);
}

META_GET_META_CALL(igIterateField)

void igIterateField_fieldInit()
{
    Meta::igMetaObject *meta = igIterateField_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igIterateField_fieldTypes, 2);
    Meta::igObjectRefMetaField *iteratedField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029F84();
    iteratedField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igIterateField_fieldNames, igIterateField_fieldStorage, igIterateField_fieldOffsets, base);
}

}
#pragma pop
