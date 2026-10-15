// beWeaponSeqDataList: Alchemy class registration (0x802B2F34..0x802B3104). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWeaponSeqDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beWeaponSeqDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DCC20[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beWeaponSeqDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beWeaponSeqDataList)
#pragma pop

void *beWeaponSeqDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DCC20;
    object.__vtable = beWeaponSeqDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beWeaponSeqDataList)

void beWeaponSeqDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWeaponSeqDataList_meta, igObjectList_register,
                       fn_80024180, beWeaponSeqDataList_getMetaCall,
                       beWeaponSeqDataList_className, 0x14,
                       beWeaponSeqDataList_vtableRead, 0, 0, beWeaponSeqDataList_dependencies);
}

META_GET_META_CALL(beWeaponSeqDataList)

}
#pragma pop
