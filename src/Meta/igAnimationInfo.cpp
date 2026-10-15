// igAnimationInfo: Alchemy class registration (0x801C9DD8..0x801CA050). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igAnimationInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_800284EC();
void fn_801AA6DC();
void *fn_801CA050();
extern char igAnimationInfo_dependencies[8];
extern char igAnimationInfo_fieldNames[4];
extern char igAnimationInfo_fieldOffsets[4];
extern char igAnimationInfo_fieldStorage[4];
extern char igAnimationInfo_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igAnimationInfoInstance : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _data;
    char unknown18[8];
    inline ~igAnimationInfoInstance() { __vtable = igAnimationInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationInfo)

void *igAnimationInfo_vtableRead()
{
    igAnimationInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igAnimationInfo_vtable;
    object._data._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationInfo)

void igAnimationInfo_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationInfo_meta, igInfo_register,
                       fn_800284EC, igAnimationInfo_getMetaCall,
                       igAnimationInfo_className, 0x18,
                       igAnimationInfo_vtableRead, igAnimationInfo_fieldInit, 0, igAnimationInfo_dependencies);
}

META_GET_META_CALL(igAnimationInfo)

void igAnimationInfo_fieldInit()
{
    Meta::igMetaObject *meta = igAnimationInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAnimationInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801CA050();
    dataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataField->_construct = true;
    meta_setupFields(meta, igAnimationInfo_fieldNames, igAnimationInfo_fieldStorage, igAnimationInfo_fieldOffsets, base);
}

}
#pragma pop
