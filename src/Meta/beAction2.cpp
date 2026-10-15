// beAction2: Alchemy class registration (0x802E7248..0x802E74EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAction2)
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

struct beAction2Instance : Instance_804DD724 {
    char unknown1C[4];
    inline ~beAction2Instance() { __vtable = beAction2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beAction2)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beAction2)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beAction2)
#pragma pop

void *beAction2_vtableRead()
{
    beAction2Instance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beAction2_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beAction2)

void beAction2_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2_meta, beBaseInfoManager_register,
                       fn_802B381C, beAction2_getMetaCall,
                       beAction2_className, 0x20,
                       beAction2_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beAction2)

}
#pragma pop
