// beNDMWStageCtlInfoRam: Alchemy class registration (0x80334420..0x803345BC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStageCtlInfoRam)
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

struct beNDMWStageCtlInfoRamInstance : beBaseInfoRamInstance {
    char unknown2C[4];
    inline ~beNDMWStageCtlInfoRamInstance() { __vtable = beNDMWStageCtlInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWStageCtlInfoRam)
#pragma pop

void *beNDMWStageCtlInfoRam_vtableRead()
{
    beNDMWStageCtlInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beNDMWStageCtlInfoRam_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWStageCtlInfoRam)

void beNDMWStageCtlInfoRam_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStageCtlInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beNDMWStageCtlInfoRam_getMetaCall,
                       beNDMWStageCtlInfoRam_className, 0x2C,
                       beNDMWStageCtlInfoRam_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStageCtlInfoRam)

}
#pragma pop
