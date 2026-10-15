// beWeaponInfo: Alchemy class registration (0x802B2B3C..0x802B2E3C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWeaponInfo)
META_DECLARE(beBaseInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
extern char beWeaponInfo_dependencies[16];
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

struct beWeaponInfoInstance : Instance_804DCD14 {
    igObjectRefMember _nodeList;
    igObjectRefMember _boneNameList;
    igObjectRefMember _seqDataList;
    char unknown28[8];
    inline ~beWeaponInfoInstance() { __vtable = beWeaponInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beWeaponInfo)

#pragma push
#pragma use_lmw_stmw on
void *beWeaponInfo_vtableRead()
{
    beWeaponInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = lbl_804DCD14;
    object._dataList._value = 0;
    object._ramList._value = 0;
    object.__vtable = beWeaponInfo_vtable;
    object._nodeList._value = 0;
    object._boneNameList._value = 0;
    object._seqDataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beWeaponInfo)

void beWeaponInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWeaponInfo_meta, beBaseInfo_register,
                       fn_802B2E3C, beWeaponInfo_getMetaCall,
                       beWeaponInfo_className, 0x28,
                       beWeaponInfo_vtableRead, beWeaponInfo_fieldInit, 0, beWeaponInfo_dependencies);
}

META_GET_META_CALL(beWeaponInfo)

}
#pragma pop
