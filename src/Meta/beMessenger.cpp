// beMessenger: Alchemy class registration (0x802CDEC4..0x802CE17C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMessenger)
META_DECLARE(igNamedObject)

extern "C" {
extern char lbl_804CBA60[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct beMessengerInstance : Instance_804CBA60 {
    char unknown0C[4];
    igObjectRefMember _argData;
    igObjectRefMember _groupList;
    igObjectRefMember _workStack;
    igObjectRefMember _delayStack;
    igObjectRefMember _pushPopStack;
    char unknown24[28];
    inline ~beMessengerInstance() { __vtable = beMessenger_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beMessenger)

META_METAOBJECT(beMessenger)

META_GET_META(beMessenger)

#pragma push
#pragma use_lmw_stmw on
void *beMessenger_vtableRead()
{
    beMessengerInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = beMessenger_vtable;
    object._argData._value = 0;
    object._groupList._value = 0;
    object._workStack._value = 0;
    object._delayStack._value = 0;
    object._pushPopStack._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
