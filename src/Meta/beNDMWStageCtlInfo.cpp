// beNDMWStageCtlInfo: Alchemy class registration (0x803345BC..0x8033480C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStageCtlInfo)
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

struct beNDMWStageCtlInfoInstance : Instance_804DCD14 {
    char unknown1C[12];
    inline ~beNDMWStageCtlInfoInstance() { __vtable = beNDMWStageCtlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWStageCtlInfo)

#pragma push
#pragma optimize_for_size off
void *beNDMWStageCtlInfo_vtableRead()
{
    beNDMWStageCtlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beNDMWStageCtlInfo_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWStageCtlInfo)

void beNDMWStageCtlInfo_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStageCtlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beNDMWStageCtlInfo_getMetaCall,
                       beNDMWStageCtlInfo_className, 0x1C,
                       beNDMWStageCtlInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWStageCtlInfo)

}
#pragma pop
