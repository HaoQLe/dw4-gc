// beWeapon: Alchemy class registration (0x802B33D0..0x802B3608). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWeapon)
META_DECLARE(igNamedObject)

extern "C" {
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct Instance_804DD724 : Instance_804CBA60 {
    char unknown0C[12];
    igObjectRefMember _infoList;
    inline ~Instance_804DD724() { __vtable = lbl_804DD724; }
};

struct beWeaponInstance : Instance_804DD724 {
    char unknown1C[4];
    igObjectRefMember _attachDataList;
    char unknown24[4];
    inline ~beWeaponInstance() { __vtable = beWeapon_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beWeapon)

META_METAOBJECT(beWeapon)

META_GET_META(beWeapon)

#pragma push
#pragma optimize_for_size off
void *beWeapon_vtableRead()
{
    beWeaponInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beWeapon_vtable;
    object._attachDataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
