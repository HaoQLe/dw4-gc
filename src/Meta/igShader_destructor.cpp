// fn_801B1950: the deleting destructor of igShader. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
META_DECLARE(igShader)
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
struct igShaderObject : igGroupObject {
    igObjectRefMember _attrLists;
    char unknown24[8];
    igObjectRefMember _transformList;
    igObjectRefMember _mvmList;
    igObjectRefMember _passMask;
    char unknown38[4];
};

extern "C" igShaderObject *fn_801B1950(igShaderObject *self, short flags)
{
    if (self) {
        self->__vtable = igShader_vtable;
        self->_passMask.~igObjectRefMember();
        self->_mvmList.~igObjectRefMember();
        self->_transformList.~igObjectRefMember();
        self->_attrLists.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
