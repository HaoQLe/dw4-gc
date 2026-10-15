// igCollapseNodeForTransform: Alchemy class registration (0x80150C58..0x80150E40). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCollapseNodeForTransform)
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

struct igCollapseNodeForTransformInstance : Instance_804A8050 {
    char unknown28[8];
    inline ~igCollapseNodeForTransformInstance() { __vtable = igCollapseNodeForTransform_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollapseNodeForTransform)

void *igCollapseNodeForTransform_vtableRead()
{
    igCollapseNodeForTransformInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A8050;
    object._node._value = 0;
    object._replaceNode._value = 0;
    object.__vtable = igCollapseNodeForTransform_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollapseNodeForTransform)

void igCollapseNodeForTransform_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCollapseNodeForTransform_meta, igCollapseNode_register,
                       fn_80148B20, igCollapseNodeForTransform_getMetaCall,
                       igCollapseNodeForTransform_className, 0x2C,
                       igCollapseNodeForTransform_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igCollapseNodeForTransform)

}
#pragma pop
