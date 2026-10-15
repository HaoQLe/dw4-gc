// beWaterPlainInfo: Alchemy class registration (0x802B4BF4..0x802B4E44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWaterPlainInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802B1AC8();
void *fn_802B2E3C();
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

struct beWaterPlainInfoInstance : Instance_804DCD14 {
    char unknown1C[12];
    inline ~beWaterPlainInfoInstance() { __vtable = beWaterPlainInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beWaterPlainInfo)
#pragma pop

#pragma push
#pragma optimize_for_size off
void *beWaterPlainInfo_vtableRead()
{
    beWaterPlainInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beWaterPlainInfo_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beWaterPlainInfo)

void beWaterPlainInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWaterPlainInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beWaterPlainInfo_getMetaCall,
                       beWaterPlainInfo_className, 0x1C,
                       beWaterPlainInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beWaterPlainInfo)

}
#pragma pop
