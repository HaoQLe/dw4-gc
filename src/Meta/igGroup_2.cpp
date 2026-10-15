// igGroup: Alchemy class registration (0x801BF76C..0x801BFA68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801AA6DC();
void *fn_801B7354();
void *fn_801BBBF0();
extern char igGroup_dependencies[8];
extern char igGroup_fieldNames[4];
extern char igGroup_fieldOffsets[4];
extern char igGroup_fieldStorage[4];
extern char igGroup_fieldTypes[4];
extern char lbl_80560610[8];
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
    char unknown20[8];
    inline ~igGroupInstance() { __vtable = igGroup_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGroup)

void *igGroup_vtableRead()
{
    igGroupInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGroup)

void igGroup_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igGroup_meta, igNode_register,
                       fn_801BBBF0, igGroup_getMetaCall,
                       lbl_80560610, 0x20,
                       igGroup_vtableRead, igGroup_fieldInit, 0, igGroup_dependencies);
}

META_GET_META_CALL(igGroup)

void igGroup_fieldInit()
{
    Meta::igMetaObject *meta = igGroup_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGroup_fieldTypes, 1);
    Meta::igObjectRefMetaField *childListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B7354();
    childListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    childListField->_resetMethod = 3;
    childListField->_construct = true;
    childListField->_deepCopyMethod = 0;
    childListField->_shallowCopyMethod = 2;
    meta_setupFields(meta, igGroup_fieldNames, igGroup_fieldStorage, igGroup_fieldOffsets, base);
}

}
#pragma pop
