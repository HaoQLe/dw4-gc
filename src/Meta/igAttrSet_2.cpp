// igAttrSet: Alchemy class registration (0x801C8A2C..0x801C8D74). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igAttrSet)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void *fn_800BB61C();
void *fn_8011148C();
void fn_801AA6DC();
extern char igAttrSet_dependencies[8];
extern char igAttrSet_fieldNames[8];
extern char igAttrSet_fieldOffsets[8];
extern char igAttrSet_fieldStorage[8];
extern char igAttrSet_fieldTypes[8];
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

struct igAttrSetInstance : igGroupInstance {
    igObjectRefMember _attributes;
    char unknown24[12];
    inline ~igAttrSetInstance() { __vtable = igAttrSet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAttrSet)

void *igAttrSet_vtableRead()
{
    igAttrSetInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = igAttrSet_vtable;
    object._attributes._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAttrSet)

void igAttrSet_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAttrSet_meta, igGroup_register,
                       fn_8011148C, igAttrSet_getMetaCall,
                       igAttrSet_className, 0x28,
                       igAttrSet_vtableRead, igAttrSet_fieldInit, 0, igAttrSet_dependencies);
}

META_GET_META_CALL(igAttrSet)

void igAttrSet_fieldInit()
{
    Meta::igMetaObject *meta = igAttrSet_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAttrSet_fieldTypes, 2);
    Meta::igObjectRefMetaField *attributesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800BB61C();
    attributesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    attributesField->_construct = true;
    attributesField->_deepCopyMethod = 0;
    attributesField->_shallowCopyMethod = 2;
    meta_setupFields(meta, igAttrSet_fieldNames, igAttrSet_fieldStorage, igAttrSet_fieldOffsets, base);
}

}
#pragma pop
