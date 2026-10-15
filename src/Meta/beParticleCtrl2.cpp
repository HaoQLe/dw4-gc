// beParticleCtrl2: Alchemy class registration (0x802C1E90..0x802C2134). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beParticleCtrl2)
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

struct beParticleCtrl2Instance : Instance_804DD724 {
    char unknown1C[4];
    inline ~beParticleCtrl2Instance() { __vtable = beParticleCtrl2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beParticleCtrl2)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beParticleCtrl2)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beParticleCtrl2)
#pragma pop

void *beParticleCtrl2_vtableRead()
{
    beParticleCtrl2Instance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object._infoList._value = 0;
    object.__vtable = beParticleCtrl2_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beParticleCtrl2)

void beParticleCtrl2_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beParticleCtrl2_meta, beBaseInfoManager_register,
                       fn_802B381C, beParticleCtrl2_getMetaCall,
                       beParticleCtrl2_className, 0x20,
                       beParticleCtrl2_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beParticleCtrl2)

}
#pragma pop
