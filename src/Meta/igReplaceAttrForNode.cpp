// igReplaceAttrForNode: Alchemy class registration (0x80135580..0x801357B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igReplaceAttrForNode)
META_DECLARE(igReplaceAttr)

extern "C" {
void fn_8012FC48();
void fn_801357C0();
extern char igReplaceAttrForNode_dependencies[8];
void *igReplaceAttrForNode_parentMeta();
extern char lbl_804A3918[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
}

struct Instance_804A3918 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _container;
    igObjectRefMember _newAttr;
    igObjectRefMember _oldAttr;
    inline ~Instance_804A3918() { __vtable = lbl_804A3918; }
};

struct igReplaceAttrForNodeInstance : Instance_804A3918 {
    char unknown2C[12];
    inline ~igReplaceAttrForNodeInstance() { __vtable = igReplaceAttrForNode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igReplaceAttrForNode)

void *igReplaceAttrForNode_vtableRead()
{
    igReplaceAttrForNodeInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804AA614;
    object.__vtable = lbl_804A3918;
    object._container._value = 0;
    object._newAttr._value = 0;
    object._oldAttr._value = 0;
    object.__vtable = igReplaceAttrForNode_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igReplaceAttrForNode)

void igReplaceAttrForNode_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igReplaceAttrForNode_meta, igReplaceAttr_register,
                       igReplaceAttrForNode_parentMeta, igReplaceAttrForNode_getMetaCall,
                       igReplaceAttrForNode_className, 0x2C,
                       igReplaceAttrForNode_vtableRead, fn_801357C0, 0, igReplaceAttrForNode_dependencies);
}

META_GET_META_CALL(igReplaceAttrForNode)

}
#pragma pop
