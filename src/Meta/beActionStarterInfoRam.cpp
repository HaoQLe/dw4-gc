// beActionStarterInfoRam: Alchemy class registration (0x802E420C..0x802E43A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beActionStarterInfoRam)
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

struct beActionStarterInfoRamInstance : beBaseInfoRamInstance {
    char unknown2C[4];
    inline ~beActionStarterInfoRamInstance() { __vtable = beActionStarterInfoRam_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beActionStarterInfoRam)

void *beActionStarterInfoRam_vtableRead()
{
    beActionStarterInfoRamInstance object;
    object.__vtable = beBaseInfoRam_vtable;
    object._dataList._value = 0;
    object.__vtable = beActionStarterInfoRam_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beActionStarterInfoRam)

void beActionStarterInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beActionStarterInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beActionStarterInfoRam_getMetaCall,
                       beActionStarterInfoRam_className, 0x2C,
                       beActionStarterInfoRam_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beActionStarterInfoRam)

}
#pragma pop
