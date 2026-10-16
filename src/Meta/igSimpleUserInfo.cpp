// igSimpleUserInfo: Alchemy class registration (0x801B0148..0x801B0404). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSimpleUserInfo)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
META_DECLARE(igUserInfo)

extern "C" {
void fn_801AA6DC();
void *fn_801B0404();
extern char lbl_804B9160[160];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMemberLookup _name;
    inline igNamedObjectInstance()
    {
        __vtable = igNamedObject_vtable;
        _name._value = 0;
    }
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline igNodeInstance()
    {
        __vtable = igNode_vtable;
        _bound._value = 0;
        _parentList._value = 0;
    }
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igGroupInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _childList;
    inline igGroupInstance()
    {
        __vtable = igGroup_vtable;
        _childList._value = 0;
    }
    inline ~igGroupInstance() { __vtable = igGroup_vtable; }
};

struct Instance_804B9160 : igGroupInstance {
    igObjectRefMember _propertyList;
    inline Instance_804B9160()
    {
        __vtable = lbl_804B9160;
        _propertyList._value = 0;
    }
    inline ~Instance_804B9160() { __vtable = lbl_804B9160; }
};

struct igSimpleUserInfoInstance : Instance_804B9160 {
    inline igSimpleUserInfoInstance()
    {
        __vtable = igSimpleUserInfo_vtable;
    }
    inline ~igSimpleUserInfoInstance() { __vtable = igSimpleUserInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSimpleUserInfo)

void *igSimpleUserInfo_vtableRead()
{
    igSimpleUserInfoInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSimpleUserInfo)

void igSimpleUserInfo_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSimpleUserInfo_meta, igUserInfo_register,
                       fn_801B0404, igSimpleUserInfo_getMetaCall,
                       igSimpleUserInfo_className, 0x24,
                       igSimpleUserInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igSimpleUserInfo)

}
#pragma pop
