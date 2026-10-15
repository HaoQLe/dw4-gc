// igCollapseNodeForGeometry: Alchemy class registration (0x801504B8..0x801506A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCollapseNodeForGeometry)
META_DECLARE(igCollapseNode)

extern "C" {
void fn_8012FC48();
void *fn_80148B20();
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A8050[];
extern char lbl_804AAF48[];
}

struct Instance_804A8050 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _node;
    igObjectRefMember _replaceNode;
    inline ~Instance_804A8050() { __vtable = lbl_804A8050; }
};

struct igCollapseNodeForGeometryInstance : Instance_804A8050 {
    char unknown28[8];
    inline ~igCollapseNodeForGeometryInstance() { __vtable = igCollapseNodeForGeometry_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollapseNodeForGeometry)

void *igCollapseNodeForGeometry_vtableRead()
{
    igCollapseNodeForGeometryInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A8050;
    object._node._value = 0;
    object._replaceNode._value = 0;
    object.__vtable = igCollapseNodeForGeometry_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollapseNodeForGeometry)

void igCollapseNodeForGeometry_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCollapseNodeForGeometry_meta, igCollapseNode_register,
                       fn_80148B20, igCollapseNodeForGeometry_getMetaCall,
                       igCollapseNodeForGeometry_className, 0x2C,
                       igCollapseNodeForGeometry_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igCollapseNodeForGeometry)

}
#pragma pop
