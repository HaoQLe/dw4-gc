// beChangePosTransformInfo: Alchemy class registration (0x802E0EFC..0x802E114C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beChangePosTransformInfo)
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

struct beChangePosTransformInfoInstance : Instance_804DCD14 {
    char unknown1C[12];
    inline ~beChangePosTransformInfoInstance() { __vtable = beChangePosTransformInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beChangePosTransformInfo)
#pragma pop

#pragma push
#pragma optimize_for_size off
void *beChangePosTransformInfo_vtableRead()
{
    beChangePosTransformInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beChangePosTransformInfo_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beChangePosTransformInfo)

void beChangePosTransformInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beChangePosTransformInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beChangePosTransformInfo_getMetaCall,
                       beChangePosTransformInfo_className, 0x1C,
                       beChangePosTransformInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beChangePosTransformInfo)

}
#pragma pop
