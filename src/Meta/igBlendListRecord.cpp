// igBlendListRecord: Alchemy class registration (0x801C3A1C..0x801C3C84). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igBlendListRecord)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void *fn_800BA194();
void *fn_800BB7B8();
void fn_801AA6DC();
extern char igBlendListRecord_dependencies[12];
extern char igBlendListRecord_fieldNames[8];
extern char igBlendListRecord_fieldOffsets[8];
extern char igBlendListRecord_fieldStorage[8];
extern char igBlendListRecord_fieldTypes[8];
}

struct igBlendListRecordInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _attr;
    char unknown0C[4];
    inline ~igBlendListRecordInstance() { __vtable = igBlendListRecord_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igBlendListRecord)

META_GET_META(igBlendListRecord)

void *igBlendListRecord_vtableRead()
{
    igBlendListRecordInstance object;
    object.__vtable = igBlendListRecord_vtable;
    object._attr._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendListRecord)

void igBlendListRecord_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igBlendListRecord_meta, igObject_register,
                       fn_800237D0, igBlendListRecord_getMetaCall,
                       igBlendListRecord_className, 0x10,
                       igBlendListRecord_vtableRead, igBlendListRecord_fieldInit, 0, igBlendListRecord_dependencies);
}

META_GET_META_CALL(igBlendListRecord)

void igBlendListRecord_fieldInit()
{
    Meta::igMetaObject *meta = igBlendListRecord_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendListRecord_fieldTypes, 2);
    Meta::igObjectRefMetaField *attrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800BA194();
    attrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    attrField->_persistent = false;
    Meta::igObjectRefMetaField *fwdPtrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800BB7B8();
    fwdPtrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    fwdPtrField->_refCounted = false;
    fwdPtrField->_persistent = false;
    meta_setupFields(meta, igBlendListRecord_fieldNames, igBlendListRecord_fieldStorage, igBlendListRecord_fieldOffsets, base);
}

}
#pragma pop
