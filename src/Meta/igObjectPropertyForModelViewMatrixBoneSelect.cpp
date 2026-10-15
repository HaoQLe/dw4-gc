// igObjectPropertyForModelViewMatrixBoneSelect: Alchemy class registration (0x8013CEF4..0x8013D0B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForModelViewMatrixBoneSelect)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D0B8();
extern char igObjectPropertyForModelViewMatrixBoneSelect_dependencies[8];
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

struct igObjectPropertyForModelViewMatrixBoneSelectInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForModelViewMatrixBoneSelectInstance() { __vtable = igObjectPropertyForModelViewMatrixBoneSelect_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForModelViewMatrixBoneSelect)

void *igObjectPropertyForModelViewMatrixBoneSelect_vtableRead()
{
    igObjectPropertyForModelViewMatrixBoneSelectInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForModelViewMatrixBoneSelect_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForModelViewMatrixBoneSelect)

void igObjectPropertyForModelViewMatrixBoneSelect_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForModelViewMatrixBoneSelect_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForModelViewMatrixBoneSelect_getMetaCall,
                       igObjectPropertyForModelViewMatrixBoneSelect_className, 0x2C,
                       igObjectPropertyForModelViewMatrixBoneSelect_vtableRead, fn_8013D0B8, 0, igObjectPropertyForModelViewMatrixBoneSelect_dependencies);
}

META_GET_META_CALL(igObjectPropertyForModelViewMatrixBoneSelect)

}
#pragma pop
