// beNumberCtrlInfo: Alchemy class registration (0x802C3C4C..0x802C3E9C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNumberCtrlInfo)
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

struct beNumberCtrlInfoInstance : Instance_804DCD14 {
    char unknown1C[12];
    inline ~beNumberCtrlInfoInstance() { __vtable = beNumberCtrlInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNumberCtrlInfo)

#pragma push
#pragma optimize_for_size off
void *beNumberCtrlInfo_vtableRead()
{
    beNumberCtrlInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beNumberCtrlInfo_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNumberCtrlInfo)

void beNumberCtrlInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beNumberCtrlInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beNumberCtrlInfo_getMetaCall,
                       beNumberCtrlInfo_className, 0x1C,
                       beNumberCtrlInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beNumberCtrlInfo)

}
#pragma pop
