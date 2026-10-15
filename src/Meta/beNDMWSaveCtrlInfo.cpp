// beNDMWSaveCtrlInfo: Alchemy class registration (0x80335D14..0x80335F64). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWSaveCtrlInfo)
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

struct beNDMWSaveCtrlInfoInstance : Instance_804DCD14 {
    char unknown1C[12];
    inline ~beNDMWSaveCtrlInfoInstance() { __vtable = beNDMWSaveCtrlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWSaveCtrlInfo)
#pragma pop

#pragma push
#pragma optimize_for_size off
void *beNDMWSaveCtrlInfo_vtableRead()
{
    beNDMWSaveCtrlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beNDMWSaveCtrlInfo_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWSaveCtrlInfo)

void beNDMWSaveCtrlInfo_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWSaveCtrlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beNDMWSaveCtrlInfo_getMetaCall,
                       beNDMWSaveCtrlInfo_className, 0x1C,
                       beNDMWSaveCtrlInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNDMWSaveCtrlInfo)

}
#pragma pop
