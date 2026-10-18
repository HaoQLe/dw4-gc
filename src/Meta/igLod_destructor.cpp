// fn_801BB1D4: the deleting destructor of igLod. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igGroup)
META_DECLARE(igLod)
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
    inline ~igGroupObject() { __vtable = igGroup_vtable; }
};
struct igLodObject : igGroupObject {
    igObjectRefMember _rangeList;
    igObjectRefMember _lastRange;
    char unknown28[24];
    igObjectRefMember _hysteresisList;
};

extern "C" igLodObject *fn_801BB1D4(igLodObject *self, short flags)
{
    if (self) {
        self->__vtable = igLod_vtable;
        self->_hysteresisList.~igObjectRefMember();
        self->_lastRange.~igObjectRefMember();
        self->_rangeList.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
