// beLoadingNode: Alchemy class registration (0x802C41A0..0x802C4454). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLoadingNode)
META_DECLARE(beNodeAnim)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void *beLoadingNode_parentMeta();
void fn_802B1AC8();
void fn_802C44E4();
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

struct beNodeAnimInstance : igGroupInstance {
    inline beNodeAnimInstance()
    {
        __vtable = beNodeAnim_vtable;
    }
    inline ~beNodeAnimInstance() { __vtable = beNodeAnim_vtable; }
};

struct beLoadingNodeInstance : beNodeAnimInstance {
    char unknown20[96];
    inline beLoadingNodeInstance()
    {
        __vtable = beLoadingNode_vtable;
    }
    inline ~beLoadingNodeInstance() { __vtable = beLoadingNode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beLoadingNode)

#pragma push
#pragma optimize_for_size off
void *beLoadingNode_vtableRead()
{
    beLoadingNodeInstance object;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beLoadingNode)

void beLoadingNode_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLoadingNode_meta, beNodeAnim_register,
                       beLoadingNode_parentMeta, beLoadingNode_getMetaCall,
                       beLoadingNode_className, 0x80,
                       beLoadingNode_vtableRead, beLoadingNode_fieldInit, fn_802C44E4, 0);
}

META_GET_META_CALL(beLoadingNode)

}
#pragma pop
