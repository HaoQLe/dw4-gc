// fn_801B5E34: the deleting destructor of igPlanarShadowShader. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igAttrSet)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
META_DECLARE(igPlanarShadowShader)
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
struct igAttrSetObject : igGroupObject {
    igObjectRefMember _attributes;
    inline ~igAttrSetObject() { __vtable = igAttrSet_vtable; }
};
struct igPlanarShadowShaderObject : igAttrSetObject {
    char unknown24[4];
    igObjectRefMember _lights;
    igObjectRefMember _mvmList;
    char unknown30[32];
    igObjectRefMember _mats;
    igObjectRefMember _geoms;
    igObjectRefMember _blendmats;
    igObjectRefMember _savedBounds;
    igObjectRefMember _unused;
    igObjectRefMember _shadowColorAttr;
    igObjectRefMember _stencilState;
    char unknown6C[4];
};

extern "C" igPlanarShadowShaderObject *fn_801B5E34(igPlanarShadowShaderObject *self, short flags)
{
    if (self) {
        self->__vtable = igPlanarShadowShader_vtable;
        self->_stencilState.~igObjectRefMember();
        self->_shadowColorAttr.~igObjectRefMember();
        self->_unused.~igObjectRefMember();
        self->_savedBounds.~igObjectRefMember();
        self->_blendmats.~igObjectRefMember();
        self->_geoms.~igObjectRefMember();
        self->_mats.~igObjectRefMember();
        self->_mvmList.~igObjectRefMember();
        self->_lights.~igObjectRefMember();
        self->igAttrSetObject::~igAttrSetObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
