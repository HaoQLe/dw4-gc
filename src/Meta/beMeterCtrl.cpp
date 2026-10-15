// beMeterCtrl: Alchemy class registration (0x802CDC20..0x802CDEC4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMeterCtrl)
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

struct beMeterCtrlInstance : Instance_804DD724 {
    char unknown1C[4];
    inline ~beMeterCtrlInstance() { __vtable = beMeterCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beMeterCtrl)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beMeterCtrl)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beMeterCtrl)
#pragma pop

void *beMeterCtrl_vtableRead()
{
    beMeterCtrlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beMeterCtrl_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMeterCtrl)

void beMeterCtrl_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMeterCtrl_meta, beBaseInfoManager_register,
                       fn_802B381C, beMeterCtrl_getMetaCall,
                       beMeterCtrl_className, 0x20,
                       beMeterCtrl_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beMeterCtrl)

}
#pragma pop
