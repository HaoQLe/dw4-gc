// igCollisionInfo: Alchemy class registration (0x8028CD74..0x8028D01C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igCollisionInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_800284EC();
void fn_8028C93C();
void *fn_8028D794();
extern char igCollisionInfo_dependencies[8];
extern char igCollisionInfo_fieldNames[4];
extern char igCollisionInfo_fieldOffsets[4];
extern char igCollisionInfo_fieldStorage[4];
extern char igCollisionInfo_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igCollisionInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _grid;
    char unknown18[8];
    inline ~igCollisionInfoInstance() { __vtable = igCollisionInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCollisionInfo)

META_GET_META(igCollisionInfo)

void *igCollisionInfo_vtableRead()
{
    igCollisionInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igCollisionInfo_vtable;
    object._grid._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollisionInfo)

void igCollisionInfo_register()
{
    fn_8028C93C();
    meta_registerClass(0, &igCollisionInfo_meta, igInfo_register,
                       fn_800284EC, igCollisionInfo_getMetaCall,
                       igCollisionInfo_className, 0x18,
                       igCollisionInfo_vtableRead, igCollisionInfo_fieldInit, 0, igCollisionInfo_dependencies);
}

META_GET_META_CALL(igCollisionInfo)

void igCollisionInfo_fieldInit()
{
    Meta::igMetaObject *meta = igCollisionInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCollisionInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *gridField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8028D794();
    gridField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igCollisionInfo_fieldNames, igCollisionInfo_fieldStorage, igCollisionInfo_fieldOffsets, base);
}

}
#pragma pop
