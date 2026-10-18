// fn_801B8A0C: the deleting destructor of igMultiResolutionMeshInstance. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igAttrSet)
META_DECLARE(igGeometry)
META_DECLARE(igGroup)
META_DECLARE(igMultiResolutionMeshInstance)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMemberLookup _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct igNodeObject : igNamedObjectObject {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeObject() { __vtable = igNode_vtable; }
};
struct igGroupObject : igNodeObject {
    char unknown14[8];
    igObjectRefMember _childList;
    inline ~igGroupObject() { __vtable = igGroup_vtable; }
};
struct igAttrSetObject : igGroupObject {
    igObjectRefMember _attributes;
    inline ~igAttrSetObject() { __vtable = igAttrSet_vtable; }
};
struct igGeometryObject : igAttrSetObject {
    char unknown24[4];
    igObjectRefMember _renderList;
    inline ~igGeometryObject() { __vtable = igGeometry_vtable; }
};
struct igMultiResolutionMeshInstanceObject : igGeometryObject {
    igObjectRefMember _mrmCore;
    igObjectRefMember _instanceArray;
    igObjectRefMember _terminalArray;
    igObjectRefMember _terminalArrayBits;
    char unknown3C[36];
};

extern "C" igMultiResolutionMeshInstanceObject *fn_801B8A0C(igMultiResolutionMeshInstanceObject *self, short flags)
{
    if (self) {
        self->__vtable = igMultiResolutionMeshInstance_vtable;
        self->_terminalArrayBits.~igObjectRefMember();
        self->_terminalArray.~igObjectRefMember();
        self->_instanceArray.~igObjectRefMember();
        self->_mrmCore.~igObjectRefMember();
        self->igGeometryObject::~igGeometryObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
