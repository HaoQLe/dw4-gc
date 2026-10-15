// igDisplayListAttr: Alchemy class registration (0x800B794C..0x800B7B60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igDisplayListAttr)
META_DECLARE(igAttr)

extern "C" {
void fn_800ABC8C();
void *fn_800AC0B8();
void *fn_800BB448();
extern char igDisplayListAttr_dependencies[8];
extern char igDisplayListAttr_fieldNames[4];
extern char igDisplayListAttr_fieldOffsets[4];
extern char igDisplayListAttr_fieldStorage[4];
extern char igDisplayListAttr_fieldTypes[4];
extern char lbl_8047D578[];
}

struct igDisplayListAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _contents;
    inline ~igDisplayListAttrInstance() { __vtable = igDisplayListAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDisplayListAttr)

void *igDisplayListAttr_vtableRead()
{
    igDisplayListAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = igDisplayListAttr_vtable;
    object._contents._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDisplayListAttr)

void igDisplayListAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igDisplayListAttr_meta, igAttr_register,
                       fn_800AC0B8, igDisplayListAttr_getMetaCall,
                       igDisplayListAttr_className, 0x10,
                       igDisplayListAttr_vtableRead, igDisplayListAttr_fieldInit, 0, igDisplayListAttr_dependencies);
}

META_GET_META_CALL(igDisplayListAttr)

void igDisplayListAttr_fieldInit()
{
    Meta::igMetaObject *meta = igDisplayListAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDisplayListAttr_fieldTypes, 1);
    Meta::igObjectRefMetaField *contentsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800BB448();
    contentsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    contentsField->_construct = true;
    meta_setupFields(meta, igDisplayListAttr_fieldNames, igDisplayListAttr_fieldStorage, igDisplayListAttr_fieldOffsets, base);
}

}
#pragma pop
