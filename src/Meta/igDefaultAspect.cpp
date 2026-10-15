// igDefaultAspect: Alchemy class registration (0x801131AC..0x801133CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igDefaultAspect)
META_DECLARE(igGuiComponentAspect)

extern "C" {
void fn_8010CBD4();
void *fn_8010DB2C();
void *fn_801133CC();
extern char igDefaultAspect_dependencies[8];
extern char igDefaultAspect_fieldNames[4];
extern char igDefaultAspect_fieldOffsets[4];
extern char igDefaultAspect_fieldStorage[4];
extern char igDefaultAspect_fieldTypes[4];
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
}

struct igDefaultAspectInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _elementList;
    char unknown2C[4];
    inline ~igDefaultAspectInstance() { __vtable = igDefaultAspect_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDefaultAspect)

void *igDefaultAspect_vtableRead()
{
    igDefaultAspectInstance object;
    object.__vtable = lbl_80495AD8;
    object.__vtable = lbl_8049652C;
    object.__vtable = igDefaultAspect_vtable;
    object._elementList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDefaultAspect)

void igDefaultAspect_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igDefaultAspect_meta, igGuiComponentAspect_register,
                       fn_8010DB2C, igDefaultAspect_getMetaCall,
                       igDefaultAspect_className, 0x2C,
                       igDefaultAspect_vtableRead, igDefaultAspect_fieldInit, 0, igDefaultAspect_dependencies);
}

META_GET_META_CALL(igDefaultAspect)

void igDefaultAspect_fieldInit()
{
    Meta::igMetaObject *meta = igDefaultAspect_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDefaultAspect_fieldTypes, 1);
    Meta::igObjectRefMetaField *elementListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801133CC();
    elementListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    elementListField->_construct = true;
    meta_setupFields(meta, igDefaultAspect_fieldNames, igDefaultAspect_fieldStorage, igDefaultAspect_fieldOffsets, base);
}

}
#pragma pop
