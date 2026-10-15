// igGuiComponentNode: Alchemy class registration (0x801110DC..0x80111290). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGuiComponentNode)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

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

struct igGuiComponentNodeInstance : igGroupInstance {
    char unknown20[8];
    inline ~igGuiComponentNodeInstance() { __vtable = igGuiComponentNode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiComponentNode)

void *igGuiComponentNode_vtableRead()
{
    igGuiComponentNodeInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = igGuiComponentNode_vtable;
    return meta_vtableOf(&object);
}

}
#pragma pop
