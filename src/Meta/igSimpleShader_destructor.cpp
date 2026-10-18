// fn_801B04F0: the deleting destructor of igSimpleShader. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
META_DECLARE(igSimpleShader)
extern "C" {
extern char lbl_804B3B90[];
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
struct Level_804B3B90 : igGroupObject {
    inline ~Level_804B3B90() { __vtable = lbl_804B3B90; }
};
struct igSimpleShaderObject : Level_804B3B90 {
    char unknown20[4];
    igObjectRefMember _shaderData;
    igObjectRefMember _processor;
    igObjectRefMember _passMask;
    igObjectRefMember _dataPumpManager;
};

extern "C" igSimpleShaderObject *fn_801B04F0(igSimpleShaderObject *self, short flags)
{
    if (self) {
        self->__vtable = igSimpleShader_vtable;
        self->_dataPumpManager.~igObjectRefMember();
        self->_passMask.~igObjectRefMember();
        self->_processor.~igObjectRefMember();
        self->_shaderData.~igObjectRefMember();
        self->Level_804B3B90::~Level_804B3B90();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
