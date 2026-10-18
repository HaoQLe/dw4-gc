// fn_801BA0C4: the deleting destructor of igMorphInstance. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igAttrSet)
META_DECLARE(igGeometry)
META_DECLARE(igGroup)
META_DECLARE(igMorphInstance)
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
struct igMorphInstanceObject : igGeometryObject {
    igObjectRefMember _base;
    igObjectRefMember _coef;
    igObjectRefMember _oldCoef;
    igObjectRefMember _coefSource;
    igObjectRefMember _dirty;
    igObjectRefMember _morphVa;
    igObjectRefMember _morphSeq;
    igObjectRefMember _privateBase;
    igObjectRefMember _dirtyNormal;
};

extern "C" igMorphInstanceObject *fn_801BA0C4(igMorphInstanceObject *self, short flags)
{
    if (self) {
        self->__vtable = igMorphInstance_vtable;
        self->_dirtyNormal.~igObjectRefMember();
        self->_privateBase.~igObjectRefMember();
        self->_morphSeq.~igObjectRefMember();
        self->_morphVa.~igObjectRefMember();
        self->_dirty.~igObjectRefMember();
        self->_coefSource.~igObjectRefMember();
        self->_oldCoef.~igObjectRefMember();
        self->_coef.~igObjectRefMember();
        self->_base.~igObjectRefMember();
        self->igGeometryObject::~igGeometryObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
