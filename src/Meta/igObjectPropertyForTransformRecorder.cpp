// igObjectPropertyForTransformRecorder: Alchemy class registration (0x8013E2B4..0x8013E478). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForTransformRecorder)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013E478();
extern char igObjectPropertyForTransformRecorder_dependencies[8];
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

struct igObjectPropertyForTransformRecorderInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForTransformRecorderInstance() { __vtable = igObjectPropertyForTransformRecorder_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForTransformRecorder)

void *igObjectPropertyForTransformRecorder_vtableRead()
{
    igObjectPropertyForTransformRecorderInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForTransformRecorder_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForTransformRecorder)

void igObjectPropertyForTransformRecorder_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForTransformRecorder_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForTransformRecorder_getMetaCall,
                       igObjectPropertyForTransformRecorder_className, 0x2C,
                       igObjectPropertyForTransformRecorder_vtableRead, fn_8013E478, 0, igObjectPropertyForTransformRecorder_dependencies);
}

META_GET_META_CALL(igObjectPropertyForTransformRecorder)

}
#pragma pop
