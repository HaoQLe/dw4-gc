// igIterateDerived: Alchemy class registration (0x80144678..0x801448BC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igIterateDerived)
META_DECLARE(igIterator)

extern "C" {
void *fn_80029F84();
void fn_8012FC48();
void *fn_80143FCC();
extern char igIterateDerived_dependencies[8];
extern char igIterateDerived_fieldNames[8];
extern char igIterateDerived_fieldOffsets[8];
extern char igIterateDerived_fieldStorage[8];
extern char igIterateDerived_fieldTypes[8];
extern char lbl_804A9C44[];
}

struct igIterateDerivedInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _iterated;
    char unknown0C[4];
    inline ~igIterateDerivedInstance() { __vtable = igIterateDerived_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIterateDerived)

META_GET_META(igIterateDerived)

void *igIterateDerived_vtableRead()
{
    igIterateDerivedInstance object;
    object.__vtable = lbl_804A9C44;
    object.__vtable = igIterateDerived_vtable;
    object._iterated._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIterateDerived)

void igIterateDerived_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igIterateDerived_meta, igIterator_register,
                       fn_80143FCC, igIterateDerived_getMetaCall,
                       igIterateDerived_className, 0x10,
                       igIterateDerived_vtableRead, igIterateDerived_fieldInit, 0, igIterateDerived_dependencies);
}

META_GET_META_CALL(igIterateDerived)

void igIterateDerived_fieldInit()
{
    Meta::igMetaObject *meta = igIterateDerived_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igIterateDerived_fieldTypes, 2);
    Meta::igObjectRefMetaField *iteratedField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029F84();
    iteratedField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igIterateDerived_fieldNames, igIterateDerived_fieldStorage, igIterateDerived_fieldOffsets, base);
}

}
#pragma pop
