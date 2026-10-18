// fn_802D3E28: the deleting destructor of beLOA. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(beLOA)
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
    inline ~igGroupObject() { __vtable = igGroup_vtable; }
};
struct beLOAObject : igGroupObject {
    char unknown20[44];
    igObjectRefMember _overrideAttrList;
    igObjectRefMember _blendStateAttr;
    igObjectRefMember _blendFunctionAttr;
    igObjectRefMember _colorAttr;
    char unknown5C[4];
};

extern "C" beLOAObject *fn_802D3E28(beLOAObject *self, short flags)
{
    if (self) {
        self->__vtable = beLOA_vtable;
        self->_colorAttr.~igObjectRefMember();
        self->_blendFunctionAttr.~igObjectRefMember();
        self->_blendStateAttr.~igObjectRefMember();
        self->_overrideAttrList.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
