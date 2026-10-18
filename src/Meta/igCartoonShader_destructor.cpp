// fn_801C5540: the deleting destructor of igCartoonShader. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igCartoonShader)
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
struct igCartoonShaderObject : igGroupObject {
    igObjectRefMember _oTex;
    igObjectRefMember _sTex;
    igObjectRefMember _mats;
    igObjectRefMember _geoms;
    char unknown30[88];
    igObjectRefMember _light;
    igObjectRefMember _savedTraversalFunctions;
    igObjectRefMember _geometryMetaObjects;
    igObjectRefMember _tcs0;
    igObjectRefMember _tcs1;
    igObjectRefMember _ts;
};

extern "C" igCartoonShaderObject *fn_801C5540(igCartoonShaderObject *self, short flags)
{
    if (self) {
        self->__vtable = igCartoonShader_vtable;
        self->_ts.~igObjectRefMember();
        self->_tcs1.~igObjectRefMember();
        self->_tcs0.~igObjectRefMember();
        self->_geometryMetaObjects.~igObjectRefMember();
        self->_savedTraversalFunctions.~igObjectRefMember();
        self->_light.~igObjectRefMember();
        self->_geoms.~igObjectRefMember();
        self->_mats.~igObjectRefMember();
        self->_sTex.~igObjectRefMember();
        self->_oTex.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
