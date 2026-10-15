// igObjectPropertyForGeometry: Alchemy class registration (0x8013DDC4..0x8013DF88). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectPropertyForGeometry)
META_DECLARE(igObjectPropertyForNode)

extern "C" {
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013DF88();
extern char igObjectPropertyForGeometry_dependencies[8];
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

struct igObjectPropertyForGeometryInstance : igObjectPropertyForNodeInstance {
    char unknown24[12];
    inline ~igObjectPropertyForGeometryInstance() { __vtable = igObjectPropertyForGeometry_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectPropertyForGeometry)

void *igObjectPropertyForGeometry_vtableRead()
{
    igObjectPropertyForGeometryInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A5C7C;
    object._object._value = 0;
    object.__vtable = igObjectPropertyForNode_vtable;
    object.__vtable = igObjectPropertyForGeometry_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectPropertyForGeometry)

void igObjectPropertyForGeometry_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectPropertyForGeometry_meta, igObjectPropertyForNode_register,
                       fn_8013BF68, igObjectPropertyForGeometry_getMetaCall,
                       igObjectPropertyForGeometry_className, 0x2C,
                       igObjectPropertyForGeometry_vtableRead, fn_8013DF88, 0, igObjectPropertyForGeometry_dependencies);
}

META_GET_META_CALL(igObjectPropertyForGeometry)

}
#pragma pop
