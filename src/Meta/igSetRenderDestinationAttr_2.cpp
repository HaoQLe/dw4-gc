// igSetRenderDestinationAttr: Alchemy class registration (0x800B0C2C..0x800B0E44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igSetRenderDestinationAttr)
META_DECLARE(igVisualAttribute)

extern "C" {
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B1738();
extern char igSetRenderDestinationAttr_dependencies[8];
extern char igSetRenderDestinationAttr_fieldNames[4];
extern char igSetRenderDestinationAttr_fieldOffsets[4];
extern char igSetRenderDestinationAttr_fieldStorage[4];
extern char igSetRenderDestinationAttr_fieldTypes[4];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igSetRenderDestinationAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _pRDAttr;
    inline ~igSetRenderDestinationAttrInstance() { __vtable = igSetRenderDestinationAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSetRenderDestinationAttr)

void *igSetRenderDestinationAttr_vtableRead()
{
    igSetRenderDestinationAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igSetRenderDestinationAttr_vtable;
    object._pRDAttr._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSetRenderDestinationAttr)

void igSetRenderDestinationAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igSetRenderDestinationAttr_meta, igVisualAttribute_register,
                       fn_800AC294, igSetRenderDestinationAttr_getMetaCall,
                       igSetRenderDestinationAttr_className, 0x10,
                       igSetRenderDestinationAttr_vtableRead, igSetRenderDestinationAttr_fieldInit, 0, igSetRenderDestinationAttr_dependencies);
}

META_GET_META_CALL(igSetRenderDestinationAttr)

void igSetRenderDestinationAttr_fieldInit()
{
    Meta::igMetaObject *meta = igSetRenderDestinationAttr_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSetRenderDestinationAttr_fieldTypes, 1);
    Meta::igObjectRefMetaField *pRDAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800B1738();
    pRDAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igSetRenderDestinationAttr_fieldNames, igSetRenderDestinationAttr_fieldStorage, igSetRenderDestinationAttr_fieldOffsets, base);
}

}
#pragma pop
