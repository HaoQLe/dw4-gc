// beLayerInfoRam: Alchemy class registration (0x802D308C..0x802D3228). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLayerInfoRam)
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

struct beLayerInfoRamInstance : beBaseInfoRamInstance {
    char unknown2C[4];
    inline ~beLayerInfoRamInstance() { __vtable = beLayerInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beLayerInfoRam)

void *beLayerInfoRam_vtableRead()
{
    beLayerInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beLayerInfoRam_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLayerInfoRam)

void beLayerInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLayerInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beLayerInfoRam_getMetaCall,
                       beLayerInfoRam_className, 0x2C,
                       beLayerInfoRam_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beLayerInfoRam)

}
#pragma pop
