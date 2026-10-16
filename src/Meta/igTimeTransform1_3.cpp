// igTimeTransform1_5: Alchemy class registration (0x801ACA90..0x801ACC5C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTimeTransform1_5)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
extern char lbl_804B9AB0[168];
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

struct Instance_804B9AB0 : igGroupInstance {
    inline Instance_804B9AB0()
    {
        __vtable = lbl_804B9AB0;
    }
    inline ~Instance_804B9AB0() { __vtable = lbl_804B9AB0; }
};

struct igTimeTransform1_5Instance : Instance_804B9AB0 {
    char unknown20[32];
    inline igTimeTransform1_5Instance()
    {
        __vtable = igTimeTransform1_5_vtable;
    }
    inline ~igTimeTransform1_5Instance() { __vtable = igTimeTransform1_5_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTimeTransform1_5)

void *igTimeTransform1_5_vtableRead()
{
    igTimeTransform1_5Instance object;
    return meta_vtableOf(&object);
}

}
#pragma pop
