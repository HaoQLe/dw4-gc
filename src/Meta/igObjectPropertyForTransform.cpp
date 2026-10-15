// igObjectPropertyForTransform: Alchemy class registration (0x801402CC..0x80140490). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForTransform)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_80140490();
extern char igObjectPropertyForTransform_dependencies[8];
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

struct igObjectPropertyForTransformInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForTransformInstance() { __vtable = igObjectPropertyForTransform_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForTransform)

void *igObjectPropertyForTransform_vtableRead()
{
    igObjectPropertyForTransformInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForTransform_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForTransform)

void igObjectPropertyForTransform_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForTransform_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForTransform_getMetaCall,
                       igObjectPropertyForTransform_className, 0x2C,
                       igObjectPropertyForTransform_vtableRead, fn_80140490, 0, igObjectPropertyForTransform_dependencies);
}

META_GET_META_CALL(igObjectPropertyForTransform)

}
#pragma pop
