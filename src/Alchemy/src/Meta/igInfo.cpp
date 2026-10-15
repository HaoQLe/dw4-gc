// igInfo: Alchemy class registration (0x8002E9C0..0x8002EBEC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void *fn_800326A0();
void fn_8003EC68(void *,int);
extern char igInfo_dependencies[8];
extern char igInfo_fieldNames[8];
extern char igInfo_fieldOffsets[8];
extern char igInfo_fieldStorage[8];
extern char igInfo_fieldTypes[8];
extern char lbl_8055D3F4[7];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    char unknown0C[20];
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInfo)

void *igInfo_vtableRead()
{
    igInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInfo)

void igInfo_register()
{
    fn_80021B94();
    meta_registerClass(0, &igInfo_meta, igNamedObject_register,
                       fn_80023CF4, igInfo_getMetaCall,
                       lbl_8055D3F4, 0x14,
                       igInfo_vtableRead, igInfo_fieldInit, 0, igInfo_dependencies);
}

META_GET_META_CALL(igInfo)

void igInfo_fieldInit()
{
    Meta::igMetaObject *meta = igInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igInfo_fieldTypes, 2);
    Meta::igObjectRefMetaField *directoryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800326A0();
    directoryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    directoryField->_refCounted = false;
    directoryField->_persistent = false;
    Meta::igBoolMetaField *resolveStateField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(resolveStateField, 1);
    meta_setupFields(meta, igInfo_fieldNames, igInfo_fieldStorage, igInfo_fieldOffsets, base);
}

}
#pragma pop
