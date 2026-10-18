// fn_801C62D8: the deleting destructor of igBumpMapShader. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igBumpMapShader)
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
struct igBumpMapShaderObject : igGroupObject {
    igObjectRefMember _bumpTex;
    igObjectRefMember _invBumpTex;
    igObjectRefMember _mats;
    igObjectRefMember _geoms;
    char unknown30[8];
    igObjectRefMember _lightPositions;
    igObjectRefMember _lightIntensities;
    char unknown40[80];
    igObjectRefMember _lights;
    char unknown94[12];
    igObjectRefMember _bumpTexImage;
    igObjectRefMember _bumpTex1;
    igObjectRefMember _unused;
    igObjectRefMember _materialTex;
    igObjectRefMember _bumpTextureCoordSource;
    igObjectRefMember _shiftedTextureCoordSource;
    igObjectRefMember _geomHasTexture;
    igObjectRefMember _bumpTex2;
    igObjectRefMember _normalTexture;
    igObjectRefMember _ts;
};

extern "C" igBumpMapShaderObject *fn_801C62D8(igBumpMapShaderObject *self, short flags)
{
    if (self) {
        self->__vtable = igBumpMapShader_vtable;
        self->_ts.~igObjectRefMember();
        self->_normalTexture.~igObjectRefMember();
        self->_bumpTex2.~igObjectRefMember();
        self->_geomHasTexture.~igObjectRefMember();
        self->_shiftedTextureCoordSource.~igObjectRefMember();
        self->_bumpTextureCoordSource.~igObjectRefMember();
        self->_materialTex.~igObjectRefMember();
        self->_unused.~igObjectRefMember();
        self->_bumpTex1.~igObjectRefMember();
        self->_bumpTexImage.~igObjectRefMember();
        self->_lights.~igObjectRefMember();
        self->_lightIntensities.~igObjectRefMember();
        self->_lightPositions.~igObjectRefMember();
        self->_geoms.~igObjectRefMember();
        self->_mats.~igObjectRefMember();
        self->_invBumpTex.~igObjectRefMember();
        self->_bumpTex.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
