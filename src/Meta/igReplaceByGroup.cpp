// igReplaceByGroup: Alchemy class registration (0x80135304..0x80135578). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igReplaceByGroup)
META_DECLARE(igOptReplaceNode)

extern "C" {
void fn_8012FC48();
void *igReplaceByGroup_parentMeta();
extern char lbl_804A4744[];
extern char lbl_804A4878[];
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

struct Instance_804A4878 : Instance_804A4744 {
    inline ~Instance_804A4878() { __vtable = lbl_804A4878; }
};

struct igReplaceByGroupInstance : Instance_804A4878 {
    char unknown30[8];
    inline ~igReplaceByGroupInstance() { __vtable = igReplaceByGroup_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igReplaceByGroup)

void *igReplaceByGroup_vtableRead()
{
    igReplaceByGroupInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A4744;
    object._nodeType._value = 0;
    object._firstNodeName._value = 0;
    object.__vtable = lbl_804A4878;
    object.__vtable = igReplaceByGroup_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igReplaceByGroup)

void igReplaceByGroup_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igReplaceByGroup_meta, igOptReplaceNode_register,
                       igReplaceByGroup_parentMeta, igReplaceByGroup_getMetaCall,
                       igReplaceByGroup_className, 0x34,
                       igReplaceByGroup_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igReplaceByGroup)

}
#pragma pop
