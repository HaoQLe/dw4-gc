// beNDMWPanelWazaInfoRam: Alchemy class registration (0x803368C8..0x803369F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWPanelWazaInfoRam)
META_DECLARE(beBaseInfoRam)

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beNDMWPanelWazaInfoRamInstance : beBaseInfoRamInstance {
    igObjectRefMember _work;
    inline ~beNDMWPanelWazaInfoRamInstance() { __vtable = beNDMWPanelWazaInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWPanelWazaInfoRam)

void *beNDMWPanelWazaInfoRam_vtableRead()
{
    beNDMWPanelWazaInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beNDMWPanelWazaInfoRam_vtable;
    object._work._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
