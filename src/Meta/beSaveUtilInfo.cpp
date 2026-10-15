// beSaveUtilInfo: Alchemy class registration (0x802BBBE8..0x802BBE38). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSaveUtilInfo)
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

struct beSaveUtilInfoInstance : Instance_804DCD14 {
    char unknown1C[12];
    inline ~beSaveUtilInfoInstance() { __vtable = beSaveUtilInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beSaveUtilInfo)
#pragma pop

#pragma push
#pragma optimize_for_size off
void *beSaveUtilInfo_vtableRead()
{
    beSaveUtilInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beSaveUtilInfo_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beSaveUtilInfo)

void beSaveUtilInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSaveUtilInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beSaveUtilInfo_getMetaCall,
                       beSaveUtilInfo_className, 0x1C,
                       beSaveUtilInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beSaveUtilInfo)

}
#pragma pop
