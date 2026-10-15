// igReplaceChildForNode: Alchemy class registration (0x80134A48..0x80134C84). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igReplaceChildForNode)
META_DECLARE(igReplaceChild)

extern "C" {
void fn_8012FC48();
void fn_80134C8C();
extern char igReplaceChildForNode_dependencies[12];
void *igReplaceChildForNode_parentMeta();
extern char lbl_804A374C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
}

struct Instance_804A374C : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _container;
    igObjectRefMember _newChild;
    igObjectRefMember _oldChild;
    inline ~Instance_804A374C() { __vtable = lbl_804A374C; }
};

struct igReplaceChildForNodeInstance : Instance_804A374C {
    char unknown2C[12];
    inline ~igReplaceChildForNodeInstance() { __vtable = igReplaceChildForNode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igReplaceChildForNode)

void *igReplaceChildForNode_vtableRead()
{
    igReplaceChildForNodeInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804AA710;
    object.__vtable = lbl_804A374C;
    object._container._value = 0;
    object._newChild._value = 0;
    object._oldChild._value = 0;
    object.__vtable = igReplaceChildForNode_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igReplaceChildForNode)

void igReplaceChildForNode_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igReplaceChildForNode_meta, igReplaceChild_register,
                       igReplaceChildForNode_parentMeta, igReplaceChildForNode_getMetaCall,
                       igReplaceChildForNode_className, 0x2C,
                       igReplaceChildForNode_vtableRead, fn_80134C8C, 0, igReplaceChildForNode_dependencies);
}

META_GET_META_CALL(igReplaceChildForNode)

}
#pragma pop
