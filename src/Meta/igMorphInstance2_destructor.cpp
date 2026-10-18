// fn_801B9B74: the deleting destructor of igMorphInstance2. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igAttrSet)
META_DECLARE(igGeometry)
META_DECLARE(igGroup)
META_DECLARE(igMorphInstance2)
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
struct igMorphInstance2Object : igGeometryObject {
    igObjectRefMember _coefficient;
    igObjectRefMember _nonNullCoefficientIndex;
    igObjectRefMember _morphSequence;
    igObjectRefMember _morphGeometry;
};

extern "C" igMorphInstance2Object *fn_801B9B74(igMorphInstance2Object *self, short flags)
{
    if (self) {
        self->__vtable = igMorphInstance2_vtable;
        self->_morphGeometry.~igObjectRefMember();
        self->_morphSequence.~igObjectRefMember();
        self->_nonNullCoefficientIndex.~igObjectRefMember();
        self->_coefficient.~igObjectRefMember();
        self->igGeometryObject::~igGeometryObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
