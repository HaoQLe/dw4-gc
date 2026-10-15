// beHitLandModelInfoRam: Alchemy class registration (0x802D44FC..0x802D4698). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beHitLandModelInfoRam)
META_DECLARE(beBaseInfoRam)

extern "C" {
void fn_802B1AC8();
void *fn_802B2B2C();
}

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beHitLandModelInfoRamInstance : beBaseInfoRamInstance {
    char unknown2C[4];
    inline ~beHitLandModelInfoRamInstance() { __vtable = beHitLandModelInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beHitLandModelInfoRam)
#pragma pop

void *beHitLandModelInfoRam_vtableRead()
{
    beHitLandModelInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beHitLandModelInfoRam_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beHitLandModelInfoRam)

void beHitLandModelInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beHitLandModelInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beHitLandModelInfoRam_getMetaCall,
                       beHitLandModelInfoRam_className, 0x2C,
                       beHitLandModelInfoRam_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beHitLandModelInfoRam)

}
#pragma pop
