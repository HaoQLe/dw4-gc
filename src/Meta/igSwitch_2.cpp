// igSwitch: Alchemy class registration (0x801ADBD4..0x801ADF0C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igSwitch)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801C7344();
extern char igSwitch_dependencies[8];
extern char igSwitch_fieldNames[4];
extern char igSwitch_fieldOffsets[4];
extern char igSwitch_fieldStorage[4];
extern char igSwitch_fieldTypes[4];
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

struct igSwitchInstance : igGroupInstance {
    igObjectRefMember _childMask;
    char unknown24[12];
    inline ~igSwitchInstance() { __vtable = igSwitch_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSwitch)

void *igSwitch_vtableRead()
{
    igSwitchInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = igSwitch_vtable;
    object._childMask._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSwitch)

void igSwitch_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSwitch_meta, igGroup_register,
                       fn_8011148C, igSwitch_getMetaCall,
                       igSwitch_className, 0x24,
                       igSwitch_vtableRead, igSwitch_fieldInit, 0, igSwitch_dependencies);
}

META_GET_META_CALL(igSwitch)

void igSwitch_fieldInit()
{
    Meta::igMetaObject *meta = igSwitch_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igSwitch_fieldTypes, 1);
    Meta::igObjectRefMetaField *childMaskField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801C7344();
    childMaskField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    childMaskField->_construct = true;
    meta_setupFields(meta, igSwitch_fieldNames, igSwitch_fieldStorage, igSwitch_fieldOffsets, base);
}

}
#pragma pop
