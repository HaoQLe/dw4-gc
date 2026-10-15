// igNamedObjectInfo: Alchemy class registration (0x800297E4..0x80029A5C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igNamedObjectInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *fn_80029A5C();
extern char igNamedObjectInfo_dependencies[8];
extern char igNamedObjectInfo_fieldNames[4];
extern char igNamedObjectInfo_fieldOffsets[4];
extern char igNamedObjectInfo_fieldStorage[4];
extern char igNamedObjectInfo_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igNamedObjectInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _objects;
    char unknown18[8];
    inline ~igNamedObjectInfoInstance() { __vtable = igNamedObjectInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNamedObjectInfo)

void *igNamedObjectInfo_vtableRead()
{
    igNamedObjectInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igNamedObjectInfo_vtable;
    object._objects._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNamedObjectInfo)

void igNamedObjectInfo_register()
{
    fn_80021B94();
    meta_registerClass(0, &igNamedObjectInfo_meta, igInfo_register,
                       fn_800284EC, igNamedObjectInfo_getMetaCall,
                       igNamedObjectInfo_className, 0x18,
                       igNamedObjectInfo_vtableRead, igNamedObjectInfo_fieldInit, 0, igNamedObjectInfo_dependencies);
}

META_GET_META_CALL(igNamedObjectInfo)

void igNamedObjectInfo_fieldInit()
{
    Meta::igMetaObject *meta = igNamedObjectInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igNamedObjectInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *objectsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029A5C();
    objectsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    objectsField->_construct = true;
    meta_setupFields(meta, igNamedObjectInfo_fieldNames, igNamedObjectInfo_fieldStorage, igNamedObjectInfo_fieldOffsets, base);
}

}
#pragma pop
