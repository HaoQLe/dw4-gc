// igChildEditForNode: Alchemy class registration (0x80151B50..0x80151D50). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igChildEditForNode)
META_DECLARE(igChildEdit)

extern "C" {
void fn_8012FC48();
void fn_80151D58();
extern char igChildEditForNode_dependencies[8];
void *igChildEditForNode_parentMeta();
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A8358[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
}

struct Instance_804A8358 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _container;
    igObjectRefMember _child;
    inline ~Instance_804A8358() { __vtable = lbl_804A8358; }
};

struct igChildEditForNodeInstance : Instance_804A8358 {
    char unknown28[8];
    inline ~igChildEditForNodeInstance() { __vtable = igChildEditForNode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igChildEditForNode)

void *igChildEditForNode_vtableRead()
{
    igChildEditForNodeInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804AA710;
    object.__vtable = lbl_804A8358;
    object._container._value = 0;
    object._child._value = 0;
    object.__vtable = igChildEditForNode_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igChildEditForNode)

void igChildEditForNode_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igChildEditForNode_meta, igChildEdit_register,
                       igChildEditForNode_parentMeta, igChildEditForNode_getMetaCall,
                       igChildEditForNode_className, 0x28,
                       igChildEditForNode_vtableRead, fn_80151D58, 0, igChildEditForNode_dependencies);
}

META_GET_META_CALL(igChildEditForNode)

}
#pragma pop
