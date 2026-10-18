// fn_802E7DFC: the deleting destructor of ParticleTimer. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(ParticleTimer)
META_DECLARE(igAttrSet)
META_DECLARE(igGeometry)
META_DECLARE(igGroup)
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
struct ParticleTimerObject : igGeometryObject {
    char unknown2C[20];
};

extern "C" ParticleTimerObject *fn_802E7DFC(ParticleTimerObject *self, short flags)
{
    if (self) {
        self->__vtable = ParticleTimer_vtable;
        self->igGeometryObject::~igGeometryObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
