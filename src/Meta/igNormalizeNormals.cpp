// igNormalizeNormals: Alchemy class registration (0x80140F78..0x801411DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNormalizeNormals)
META_DECLARE(igOptTraverseGraph)

extern "C" {
void fn_8012FC48();
void *fn_8013AFE4();
extern char lbl_804A4744[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct Instance_804A4744 : Instance_804A4A04 {
    igObjectRefMember _nodeType;
    igStringMember _firstNodeName;
    inline ~Instance_804A4744() { __vtable = lbl_804A4744; }
};

struct igNormalizeNormalsInstance : Instance_804A4744 {
    char unknown30[8];
    inline ~igNormalizeNormalsInstance() { __vtable = igNormalizeNormals_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNormalizeNormals)

void *igNormalizeNormals_vtableRead()
{
    igNormalizeNormalsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A4744;
    object._nodeType._value = 0;
    object._firstNodeName._value = 0;
    object.__vtable = igNormalizeNormals_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNormalizeNormals)

void igNormalizeNormals_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igNormalizeNormals_meta, igOptTraverseGraph_register,
                       fn_8013AFE4, igNormalizeNormals_getMetaCall,
                       igNormalizeNormals_className, 0x34,
                       igNormalizeNormals_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igNormalizeNormals)

}
#pragma pop
