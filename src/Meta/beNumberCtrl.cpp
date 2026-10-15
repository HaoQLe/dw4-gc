// beNumberCtrl: Alchemy class registration (0x802C3EFC..0x802C41A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNumberCtrl)
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

struct beNumberCtrlInstance : Instance_804DD724 {
    char unknown1C[4];
    inline ~beNumberCtrlInstance() { __vtable = beNumberCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNumberCtrl)

META_METAOBJECT(beNumberCtrl)

META_GET_META(beNumberCtrl)

void *beNumberCtrl_vtableRead()
{
    beNumberCtrlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beNumberCtrl_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNumberCtrl)

void beNumberCtrl_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beNumberCtrl_meta, beBaseInfoManager_register,
                       fn_802B381C, beNumberCtrl_getMetaCall,
                       beNumberCtrl_className, 0x20,
                       beNumberCtrl_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNumberCtrl)

}
#pragma pop
