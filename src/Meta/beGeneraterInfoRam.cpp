// beGeneraterInfoRam: Alchemy class registration (0x802D6C8C..0x802D6DBC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beGeneraterInfoRam)
META_DECLARE(beBaseInfoRam)

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beGeneraterInfoRamInstance : beBaseInfoRamInstance {
    igObjectRefMember _work;
    inline ~beGeneraterInfoRamInstance() { __vtable = beGeneraterInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beGeneraterInfoRam)
#pragma pop

void *beGeneraterInfoRam_vtableRead()
{
    beGeneraterInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beGeneraterInfoRam_vtable;
    object._work._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
