// fn_801B3080: the deleting destructor of igSelfShadowShader. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
META_DECLARE(igSelfShadowShader)
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
struct igSelfShadowShaderObject : igGroupObject {
    char unknown20[52];
    igObjectRefMember _shadowCasters;
    igObjectRefMember _shadowReceivers;
    igObjectRefMember _lightMVMAttr;
    igObjectRefMember _lightProjAttr;
    igObjectRefMember _viewToProjectedLightTextureMatrix;
    igObjectRefMember _depthTextureMatrix;
    char unknown6C[36];
    igObjectRefMember _pShadowTexRD;
    igObjectRefMember _pSetShadowTexRD;
    igObjectRefMember _pShadowTex;
    igObjectRefMember _pShadowTexBind0;
    igObjectRefMember _pShadowTexBind1;
    igObjectRefMember _pShadowTexBind2;
    igObjectRefMember _shadowCopyBack;
    igObjectRefMember _shadowCopyBackImage;
    igObjectRefMember _shadowViewport;
    igObjectRefMember _shadowColorPixelConstant;
    igObjectRefMember _rampTexBind1;
    igObjectRefMember _shadowEnvironmentColor;
    igObjectRefMember _light;
    igObjectRefMember _depthToAlphaMatrix;
    igObjectRefMember _depthToAlphaMatrixBiased;
    igObjectRefMember _shadowColorAttr;
    char unknownD0[20];
    igObjectRefMember _shadowInnerViewport;
};

extern "C" igSelfShadowShaderObject *fn_801B3080(igSelfShadowShaderObject *self, short flags)
{
    if (self) {
        self->__vtable = igSelfShadowShader_vtable;
        self->_shadowInnerViewport.~igObjectRefMember();
        self->_shadowColorAttr.~igObjectRefMember();
        self->_depthToAlphaMatrixBiased.~igObjectRefMember();
        self->_depthToAlphaMatrix.~igObjectRefMember();
        self->_light.~igObjectRefMember();
        self->_shadowEnvironmentColor.~igObjectRefMember();
        self->_rampTexBind1.~igObjectRefMember();
        self->_shadowColorPixelConstant.~igObjectRefMember();
        self->_shadowViewport.~igObjectRefMember();
        self->_shadowCopyBackImage.~igObjectRefMember();
        self->_shadowCopyBack.~igObjectRefMember();
        self->_pShadowTexBind2.~igObjectRefMember();
        self->_pShadowTexBind1.~igObjectRefMember();
        self->_pShadowTexBind0.~igObjectRefMember();
        self->_pShadowTex.~igObjectRefMember();
        self->_pSetShadowTexRD.~igObjectRefMember();
        self->_pShadowTexRD.~igObjectRefMember();
        self->_depthTextureMatrix.~igObjectRefMember();
        self->_viewToProjectedLightTextureMatrix.~igObjectRefMember();
        self->_lightProjAttr.~igObjectRefMember();
        self->_lightMVMAttr.~igObjectRefMember();
        self->_shadowReceivers.~igObjectRefMember();
        self->_shadowCasters.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
