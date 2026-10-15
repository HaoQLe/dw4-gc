// beWeaponInfoRam: Alchemy class registration (0x802B291C..0x802B2A04). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWeaponInfoRam)
META_DECLARE(beBaseInfoRam)

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beWeaponInfoRamInstance : beBaseInfoRamInstance {
    char unknown2C[4];
    inline ~beWeaponInfoRamInstance() { __vtable = beWeaponInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beWeaponInfoRam)
#pragma pop

void *beWeaponInfoRam_vtableRead()
{
    beWeaponInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beWeaponInfoRam_vtable;
    return meta_vtableOf(&object);
}

}
#pragma pop
