// fn_802C5FA0: the deleting destructor of beModelCtrlNode2. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlNode2)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
META_DECLARE(igTransform)
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
struct igTransformObject : igGroupObject {
    char unknown20[68];
    igObjectRefMember _mvm;
    igObjectRefMember _transformInput;
    inline ~igTransformObject() { __vtable = igTransform_vtable; }
};
struct beModelCtrlNode2Object : igTransformObject {
    char unknown6C[28];
    igObjectRefMember _overrideAttrList;
    char unknown8C[4];
};

extern "C" beModelCtrlNode2Object *fn_802C5FA0(beModelCtrlNode2Object *self, short flags)
{
    if (self) {
        self->__vtable = beModelCtrlNode2_vtable;
        self->_overrideAttrList.~igObjectRefMember();
        self->igTransformObject::~igTransformObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
