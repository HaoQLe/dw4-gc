// igObjectPropertyForCamera: Alchemy class registration (0x8013BDA4..0x8013BF68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForCamera)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013BF70();
extern char igObjectPropertyForCamera_dependencies[8];
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

struct igObjectPropertyForCameraInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForCameraInstance() { __vtable = igObjectPropertyForCamera_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForCamera)

void *igObjectPropertyForCamera_vtableRead()
{
    igObjectPropertyForCameraInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForCamera_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForCamera)

void igObjectPropertyForCamera_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForCamera_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForCamera_getMetaCall,
                       igObjectPropertyForCamera_className, 0x2C,
                       igObjectPropertyForCamera_vtableRead, fn_8013BF70, 0, igObjectPropertyForCamera_dependencies);
}

META_GET_META_CALL(igObjectPropertyForCamera)

}
#pragma pop
