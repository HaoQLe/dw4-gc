// beMatCtrlInfoRam: Alchemy class registration (0x802D014C..0x802D027C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMatCtrlInfoRam)
META_DECLARE(beBaseInfoRam)

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beMatCtrlInfoRamInstance : beBaseInfoRamInstance {
    igObjectRefMember _work;
    inline ~beMatCtrlInfoRamInstance() { __vtable = beMatCtrlInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beMatCtrlInfoRam)
#pragma pop

void *beMatCtrlInfoRam_vtableRead()
{
    beMatCtrlInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beMatCtrlInfoRam_vtable;
    object._work._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
