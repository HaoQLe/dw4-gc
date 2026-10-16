// igGeometry: Alchemy class registration (0x801C0148..0x801C0454). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGeometry)
META_DECLARE(igAttrSet)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801AA6DC();
void *fn_801B623C();
void fn_801C0564();
extern char igGeometry_dependencies[8];
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

struct igAttrSetInstance : igGroupInstance {
    igObjectRefMember _attributes;
    inline ~igAttrSetInstance() { __vtable = igAttrSet_vtable; }
};

struct igGeometryInstance : igAttrSetInstance {
    char unknown24[4];
    igObjectRefMember _renderList;
    inline ~igGeometryInstance() { __vtable = igGeometry_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometry)

void *igGeometry_vtableRead()
{
    igGeometryInstance object;
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igNode_vtable;
    object.__vtable = igGroup_vtable;
    object.__vtable = igAttrSet_vtable;
    object._name._value = 0;
    object._bound._value = 0;
    object._parentList._value = 0;
    object._childList._value = 0;
    object._attributes._value = 0;
    object.__vtable = igGeometry_vtable;
    object._renderList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGeometry)

void igGeometry_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igGeometry_meta, igAttrSet_register,
                       fn_801B623C, igGeometry_getMetaCall,
                       igGeometry_className, 0x2C,
                       igGeometry_vtableRead, igGeometry_fieldInit, fn_801C0564, igGeometry_dependencies);
}

META_GET_META_CALL(igGeometry)

}
#pragma pop
