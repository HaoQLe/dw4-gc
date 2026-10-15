// igObjectPropertyForDOFShader: Alchemy class registration (0x8013D16C..0x8013D330). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForDOFShader)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D330();
extern char igObjectPropertyForDOFShader_dependencies[8];
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

struct igObjectPropertyForDOFShaderInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForDOFShaderInstance() { __vtable = igObjectPropertyForDOFShader_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForDOFShader)

void *igObjectPropertyForDOFShader_vtableRead()
{
    igObjectPropertyForDOFShaderInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForDOFShader_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForDOFShader)

void igObjectPropertyForDOFShader_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForDOFShader_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForDOFShader_getMetaCall,
                       igObjectPropertyForDOFShader_className, 0x2C,
                       igObjectPropertyForDOFShader_vtableRead, fn_8013D330, 0, igObjectPropertyForDOFShader_dependencies);
}

META_GET_META_CALL(igObjectPropertyForDOFShader)

}
#pragma pop
