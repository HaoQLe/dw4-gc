// igOverrideAttrSet: Alchemy class registration (0x801B67EC..0x801B6AA8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOverrideAttrSet)
META_DECLARE(igAttrSet)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801AA6DC();
void *fn_801B623C();
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

struct igAttrSetInstance : igGroupInstance {
    igObjectRefMember _attributes;
    inline igAttrSetInstance()
    {
        __vtable = igAttrSet_vtable;
        _attributes._value = 0;
    }
    inline ~igAttrSetInstance() { __vtable = igAttrSet_vtable; }
};

struct igOverrideAttrSetInstance : igAttrSetInstance {
    char unknown24[4];
    inline igOverrideAttrSetInstance()
    {
        __vtable = igOverrideAttrSet_vtable;
    }
    inline ~igOverrideAttrSetInstance() { __vtable = igOverrideAttrSet_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOverrideAttrSet)

void *igOverrideAttrSet_vtableRead()
{
    igOverrideAttrSetInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOverrideAttrSet)

void igOverrideAttrSet_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igOverrideAttrSet_meta, igAttrSet_register,
                       fn_801B623C, igOverrideAttrSet_getMetaCall,
                       igOverrideAttrSet_className, 0x28,
                       igOverrideAttrSet_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igOverrideAttrSet)

}
#pragma pop
