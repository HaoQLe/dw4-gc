// beNDMWStatusInfoRam: Alchemy class registration (0x8032ACB0..0x8032ADE0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusInfoRam)
META_DECLARE(beBaseInfoRam)

struct beBaseInfoRamInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _dataList;
    inline ~beBaseInfoRamInstance() { __vtable = beBaseInfoRam_vtable; }
};

struct beNDMWStatusInfoRamInstance : beBaseInfoRamInstance {
    igObjectRefMember _work;
    inline ~beNDMWStatusInfoRamInstance() { __vtable = beNDMWStatusInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWStatusInfoRam)

void *beNDMWStatusInfoRam_vtableRead()
{
    beNDMWStatusInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beNDMWStatusInfoRam_vtable;
    object._work._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
