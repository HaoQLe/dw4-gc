// dtor_80111290: the deleting destructor of igGroup. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
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
};

extern "C" igGroupObject *dtor_80111290(igGroupObject *self, short flags)
{
    if (self) {
        self->__vtable = igGroup_vtable;
        self->_childList.~igObjectRefMember();
        self->igNodeObject::~igNodeObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
