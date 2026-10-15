// igFlattenNodeForGroup: Alchemy class registration (0x80148648..0x80148840). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFlattenNodeForGroup)
META_DECLARE(igFlattenNode)

extern "C" {
void fn_8012FC48();
void *fn_80148640();
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A8050[];
extern char lbl_804A934C[];
extern char lbl_804AAF48[];
}

struct Instance_804A8050 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _node;
    igObjectRefMember _replaceNode;
    inline ~Instance_804A8050() { __vtable = lbl_804A8050; }
};

struct Instance_804A934C : Instance_804A8050 {
    inline ~Instance_804A934C() { __vtable = lbl_804A934C; }
};

struct igFlattenNodeForGroupInstance : Instance_804A934C {
    char unknown28[8];
    inline ~igFlattenNodeForGroupInstance() { __vtable = igFlattenNodeForGroup_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFlattenNodeForGroup)

void *igFlattenNodeForGroup_vtableRead()
{
    igFlattenNodeForGroupInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = lbl_804A8050;
    object._node._value = 0;
    object._replaceNode._value = 0;
    object.__vtable = lbl_804A934C;
    object.__vtable = igFlattenNodeForGroup_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFlattenNodeForGroup)

void igFlattenNodeForGroup_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igFlattenNodeForGroup_meta, igFlattenNode_register,
                       fn_80148640, igFlattenNodeForGroup_getMetaCall,
                       igFlattenNodeForGroup_className, 0x2C,
                       igFlattenNodeForGroup_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igFlattenNodeForGroup)

}
#pragma pop
