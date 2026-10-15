// beDBManager: Alchemy class registration (0x802DE3F0..0x802DE694). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDBManager)
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

struct beDBManagerInstance : Instance_804DD724 {
    char unknown1C[4];
    inline ~beDBManagerInstance() { __vtable = beDBManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beDBManager)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beDBManager)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beDBManager)
#pragma pop

void *beDBManager_vtableRead()
{
    beDBManagerInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beDBManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDBManager)

void beDBManager_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDBManager_meta, beBaseInfoManager_register,
                       fn_802B381C, beDBManager_getMetaCall,
                       beDBManager_className, 0x20,
                       beDBManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beDBManager)

}
#pragma pop
