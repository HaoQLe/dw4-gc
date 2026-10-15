// igObjectPropertyForEnvironmentMapShader: Alchemy class registration (0x8013D3E4..0x8013D5A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForEnvironmentMapShader)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D5A8();
extern char igObjectPropertyForEnvironmentMapShader_dependencies[8];
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

struct igObjectPropertyForEnvironmentMapShaderInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForEnvironmentMapShaderInstance() { __vtable = igObjectPropertyForEnvironmentMapShader_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForEnvironmentMapShader)

void *igObjectPropertyForEnvironmentMapShader_vtableRead()
{
    igObjectPropertyForEnvironmentMapShaderInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForEnvironmentMapShader_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForEnvironmentMapShader)

void igObjectPropertyForEnvironmentMapShader_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForEnvironmentMapShader_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForEnvironmentMapShader_getMetaCall,
                       igObjectPropertyForEnvironmentMapShader_className, 0x2C,
                       igObjectPropertyForEnvironmentMapShader_vtableRead, fn_8013D5A8, 0, igObjectPropertyForEnvironmentMapShader_dependencies);
}

META_GET_META_CALL(igObjectPropertyForEnvironmentMapShader)

}
#pragma pop
