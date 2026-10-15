// beResetNode: Alchemy class registration (0x802C0960..0x802C0C80). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beResetNode)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
extern char beResetNode_fieldNames[];
extern char beResetNode_fieldOffsets[];
extern char beResetNode_fieldStorage[];
extern char beResetNode_fieldTypes[];
void *fn_8011148C();
void fn_802B1AC8();
void fn_802C0C80();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igGroupInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _childList;
    inline ~igGroupInstance() { __vtable = igGroup_vtable; }
};

struct beResetNodeInstance : igGroupInstance {
    char unknown20[8];
    inline ~beResetNodeInstance() { __vtable = beResetNode_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beResetNode)
#pragma pop

#pragma push
#pragma optimize_for_size off
void *beResetNode_vtableRead()
{
    beResetNodeInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = beResetNode_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beResetNode)

void beResetNode_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beResetNode_meta, igGroup_register,
                       fn_8011148C, beResetNode_getMetaCall,
                       beResetNode_className, 0x24,
                       beResetNode_vtableRead, beResetNode_fieldInit, fn_802C0C80, 0);
}

META_GET_META_CALL(beResetNode)

void beResetNode_fieldInit()
{
    Meta::igMetaObject *meta = beResetNode_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beResetNode_fieldTypes, 0x2);
    meta_setupFields(meta, beResetNode_fieldNames, beResetNode_fieldStorage, beResetNode_fieldOffsets, base);
}

}
#pragma pop
