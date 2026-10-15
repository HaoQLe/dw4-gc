// beHitLandDeliv: Alchemy class registration (0x802D626C..0x802D6510). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beHitLandDeliv)
META_DECLARE(beBaseInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802B1AC8();
void *fn_802B381C();
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

struct beHitLandDelivInstance : Instance_804DD724 {
    char unknown1C[4];
    inline ~beHitLandDelivInstance() { __vtable = beHitLandDeliv_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beHitLandDeliv)

META_METAOBJECT(beHitLandDeliv)

META_GET_META(beHitLandDeliv)

void *beHitLandDeliv_vtableRead()
{
    beHitLandDelivInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beHitLandDeliv_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beHitLandDeliv)

void beHitLandDeliv_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beHitLandDeliv_meta, beBaseInfoManager_register,
                       fn_802B381C, beHitLandDeliv_getMetaCall,
                       beHitLandDeliv_className, 0x20,
                       beHitLandDeliv_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beHitLandDeliv)

}
#pragma pop
