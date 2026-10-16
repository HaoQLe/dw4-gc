// igHashedUserInfo: Alchemy class registration (0x801BF368..0x801BF6F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igHashedUserInfo)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
META_DECLARE(igUserInfo)

extern "C" {
void fn_801AA6DC();
void *fn_801B0404();
void *fn_801B47CC();
extern char igHashedUserInfo_dependencies[8];
extern char igHashedUserInfo_fieldNames[4];
extern char igHashedUserInfo_fieldOffsets[4];
extern char igHashedUserInfo_fieldStorage[4];
extern char igHashedUserInfo_fieldTypes[4];
extern char lbl_804B9160[160];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMemberLookup _name;
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

struct Instance_804B9160 : igGroupInstance {
    igObjectRefMember _propertyList;
    inline ~Instance_804B9160() { __vtable = lbl_804B9160; }
};

struct igHashedUserInfoInstance : Instance_804B9160 {
    igObjectRefMember _searchProperty;
    inline ~igHashedUserInfoInstance() { __vtable = igHashedUserInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHashedUserInfo)

void *igHashedUserInfo_vtableRead()
{
    igHashedUserInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igNode_vtable;
    object.__vtable = igGroup_vtable;
    object.__vtable = lbl_804B9160;
    object._name._value = 0;
    object._bound._value = 0;
    object._parentList._value = 0;
    object._childList._value = 0;
    object._propertyList._value = 0;
    object.__vtable = igHashedUserInfo_vtable;
    object._searchProperty._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHashedUserInfo)

void igHashedUserInfo_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igHashedUserInfo_meta, igUserInfo_register,
                       fn_801B0404, igHashedUserInfo_getMetaCall,
                       igHashedUserInfo_className, 0x28,
                       igHashedUserInfo_vtableRead, igHashedUserInfo_fieldInit, 0, igHashedUserInfo_dependencies);
}

META_GET_META_CALL(igHashedUserInfo)

void igHashedUserInfo_fieldInit()
{
    Meta::igMetaObject *meta = igHashedUserInfo_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igHashedUserInfo_fieldTypes, 1);
    Meta::igObjectRefMetaField *searchPropertyField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801B47CC();
    searchPropertyField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    searchPropertyField->_persistent = false;
    meta_setupFields(meta, igHashedUserInfo_fieldNames, igHashedUserInfo_fieldStorage, igHashedUserInfo_fieldOffsets, base);
}

}
#pragma pop
