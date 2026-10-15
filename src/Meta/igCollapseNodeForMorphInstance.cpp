// igCollapseNodeForMorphInstance: Alchemy class registration (0x8014FD18..0x8014FF00). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCollapseNodeForMorphInstance)
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

struct igCollapseNodeForMorphInstanceInstance : Instance_804A8050 {
    char unknown28[8];
    inline ~igCollapseNodeForMorphInstanceInstance() { __vtable = igCollapseNodeForMorphInstance_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollapseNodeForMorphInstance)

void *igCollapseNodeForMorphInstance_vtableRead()
{
    igCollapseNodeForMorphInstanceInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A8050;
    object._node._value = 0;
    object._replaceNode._value = 0;
    object.__vtable = igCollapseNodeForMorphInstance_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollapseNodeForMorphInstance)

void igCollapseNodeForMorphInstance_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCollapseNodeForMorphInstance_meta, igCollapseNode_register,
                       fn_80148B20, igCollapseNodeForMorphInstance_getMetaCall,
                       igCollapseNodeForMorphInstance_className, 0x2C,
                       igCollapseNodeForMorphInstance_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igCollapseNodeForMorphInstance)

}
#pragma pop
