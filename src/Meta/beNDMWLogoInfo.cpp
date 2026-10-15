// beNDMWLogoInfo: Alchemy class registration (0x8033B7DC..0x8033BA2C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWLogoInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_802B2E3C();
void fn_803250AC();
extern char lbl_804DCD14[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct Instance_804DCD14 : igInfoInstance {
    char unknown0C[8];
    igObjectRefMember _dataList;
    igObjectRefMember _ramList;
    inline ~Instance_804DCD14() { __vtable = lbl_804DCD14; }
};

struct beNDMWLogoInfoInstance : Instance_804DCD14 {
    char unknown1C[12];
    inline ~beNDMWLogoInfoInstance() { __vtable = beNDMWLogoInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWLogoInfo)

#pragma push
#pragma optimize_for_size off
void *beNDMWLogoInfo_vtableRead()
{
    beNDMWLogoInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beNDMWLogoInfo_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWLogoInfo)

void beNDMWLogoInfo_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLogoInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beNDMWLogoInfo_getMetaCall,
                       beNDMWLogoInfo_className, 0x1C,
                       beNDMWLogoInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWLogoInfo)

}
#pragma pop
