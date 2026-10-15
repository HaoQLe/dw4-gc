// igSegment: Alchemy class registration (0x801B3D0C..0x801B3F70). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSegment)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void *fn_8011148C();
void fn_801AA6DC();
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

struct igSegmentInstance : igGroupInstance {
    char unknown20[8];
    inline ~igSegmentInstance() { __vtable = igSegment_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSegment)

void *igSegment_vtableRead()
{
    igSegmentInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = igSegment_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSegment)

void igSegment_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSegment_meta, igGroup_register,
                       fn_8011148C, igSegment_getMetaCall,
                       igSegment_className, 0x20,
                       igSegment_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igSegment)

}
#pragma pop
