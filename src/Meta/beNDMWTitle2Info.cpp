// beNDMWTitle2Info: Alchemy class registration (0x80325ED8..0x80326128). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWTitle2Info)
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

struct beNDMWTitle2InfoInstance : Instance_804DCD14 {
    char unknown1C[12];
    inline ~beNDMWTitle2InfoInstance() { __vtable = beNDMWTitle2Info_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWTitle2Info)
#pragma pop

#pragma push
#pragma optimize_for_size off
void *beNDMWTitle2Info_vtableRead()
{
    beNDMWTitle2InfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beNDMWTitle2Info_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWTitle2Info)

void beNDMWTitle2Info_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWTitle2Info_meta, beBaseInfo_register,
                       fn_802B2E3C, beNDMWTitle2Info_getMetaCall,
                       beNDMWTitle2Info_className, 0x1C,
                       beNDMWTitle2Info_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWTitle2Info)

}
#pragma pop
