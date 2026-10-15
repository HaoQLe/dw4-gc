// beGroupKeep: Alchemy class registration (0x802D66E0..0x802D6970). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beGroupKeep)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void *fn_8011148C();
void fn_802B1AC8();
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

struct beGroupKeepInstance : igGroupInstance {
    char unknown20[8];
    inline ~beGroupKeepInstance() { __vtable = beGroupKeep_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beGroupKeep)

#pragma push
#pragma optimize_for_size off
void *beGroupKeep_vtableRead()
{
    beGroupKeepInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = beGroupKeep_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beGroupKeep)

void beGroupKeep_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGroupKeep_meta, igGroup_register,
                       fn_8011148C, beGroupKeep_getMetaCall,
                       beGroupKeep_className, 0x20,
                       beGroupKeep_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beGroupKeep)

}
#pragma pop
