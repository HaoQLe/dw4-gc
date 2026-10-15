// igObjectPropertyForPlanarShadowShader: Alchemy class registration (0x8013CA04..0x8013CBC8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForPlanarShadowShader)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013CBC8();
extern char igObjectPropertyForPlanarShadowShader_dependencies[8];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A5C7C : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _object;
    inline ~Instance_804A5C7C() { __vtable = lbl_804A5C7C; }
};

struct igObjectPropertyForNodeInstance : Instance_804A5C7C {
    inline ~igObjectPropertyForNodeInstance() { __vtable = igObjectPropertyForNode_vtable; }
};

struct igObjectPropertyForPlanarShadowShaderInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForPlanarShadowShaderInstance() { __vtable = igObjectPropertyForPlanarShadowShader_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForPlanarShadowShader)

void *igObjectPropertyForPlanarShadowShader_vtableRead()
{
    igObjectPropertyForPlanarShadowShaderInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForPlanarShadowShader_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForPlanarShadowShader)

void igObjectPropertyForPlanarShadowShader_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForPlanarShadowShader_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForPlanarShadowShader_getMetaCall,
                       igObjectPropertyForPlanarShadowShader_className, 0x2C,
                       igObjectPropertyForPlanarShadowShader_vtableRead, fn_8013CBC8, 0, igObjectPropertyForPlanarShadowShader_dependencies);
}

META_GET_META_CALL(igObjectPropertyForPlanarShadowShader)

}
#pragma pop
