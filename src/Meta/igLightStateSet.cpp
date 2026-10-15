// igLightStateSet: Alchemy class registration (0x801BB60C..0x801BB954). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igLightStateSet)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void *fn_800B5424();
void *fn_8011148C();
void fn_801AA6DC();
extern char igLightStateSet_dependencies[8];
extern char igLightStateSet_fieldNames[4];
extern char igLightStateSet_fieldOffsets[4];
extern char igLightStateSet_fieldStorage[4];
extern char igLightStateSet_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igGroupInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _childList;
    inline ~igGroupInstance() { __vtable = igGroup_vtable; }
};

struct igLightStateSetInstance : igGroupInstance {
    igObjectRefMember _lightEnables;
    char unknown24[12];
    inline ~igLightStateSetInstance() { __vtable = igLightStateSet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLightStateSet)

void *igLightStateSet_vtableRead()
{
    igLightStateSetInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = igLightStateSet_vtable;
    object._lightEnables._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightStateSet)

void igLightStateSet_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igLightStateSet_meta, igGroup_register,
                       fn_8011148C, igLightStateSet_getMetaCall,
                       igLightStateSet_className, 0x24,
                       igLightStateSet_vtableRead, igLightStateSet_fieldInit, 0, igLightStateSet_dependencies);
}

META_GET_META_CALL(igLightStateSet)

void igLightStateSet_fieldInit()
{
    Meta::igMetaObject *meta = igLightStateSet_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLightStateSet_fieldTypes, 1);
    Meta::igObjectRefMetaField *lightEnablesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800B5424();
    lightEnablesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    lightEnablesField->_construct = true;
    lightEnablesField->_deepCopyMethod = 0;
    lightEnablesField->_shallowCopyMethod = 2;
    meta_setupFields(meta, igLightStateSet_fieldNames, igLightStateSet_fieldStorage, igLightStateSet_fieldOffsets, base);
}

}
#pragma pop
