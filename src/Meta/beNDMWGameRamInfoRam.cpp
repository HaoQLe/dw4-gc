// beNDMWGameRamInfoRam: Alchemy class registration (0x80344988..0x80344B64). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWGameRamInfoRam)
META_DECLARE(beBaseInfoRam)

extern "C" {
void *fn_802B2B2C();
void fn_803250AC();
}

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beNDMWGameRamInfoRamInstance : beBaseInfoRamInstance {
    char unknown2C[4];
    inline ~beNDMWGameRamInfoRamInstance() { __vtable = beNDMWGameRamInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beNDMWGameRamInfoRam)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWGameRamInfoRam)
#pragma pop

void *beNDMWGameRamInfoRam_vtableRead()
{
    beNDMWGameRamInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beNDMWGameRamInfoRam_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWGameRamInfoRam)

void beNDMWGameRamInfoRam_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWGameRamInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beNDMWGameRamInfoRam_getMetaCall,
                       beNDMWGameRamInfoRam_className, 0x2C,
                       beNDMWGameRamInfoRam_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWGameRamInfoRam)

}
#pragma pop
