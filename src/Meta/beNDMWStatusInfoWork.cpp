// beNDMWStatusInfoWork: Alchemy class registration (0x8032AFB8..0x8032B240). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWStatusInfoWork)

struct beNDMWStatusInfoWorkInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _parameter;
    igObjectRefMember _preview;
    igObjectRefMember _weaponSalesList;
    igObjectRefMember _armorSalesList;
    igObjectRefMember _chipSalesList;
    igObjectRefMember _junkSalesList;
    char unknown20[16];
    inline ~beNDMWStatusInfoWorkInstance() { __vtable = beNDMWStatusInfoWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWStatusInfoWork)

META_METAOBJECT(beNDMWStatusInfoWork)

META_GET_META(beNDMWStatusInfoWork)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beNDMWStatusInfoWork_vtableRead()
{
    beNDMWStatusInfoWorkInstance object;
    object.__vtable = beNDMWStatusInfoWork_vtable;
    object._parameter._value = 0;
    object._preview._value = 0;
    object._weaponSalesList._value = 0;
    object._armorSalesList._value = 0;
    object._chipSalesList._value = 0;
    object._junkSalesList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
