// beHitLandResultDataList: Alchemy class registration (0x802D5838..0x802D5A08). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beHitLandResultDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beHitLandResultDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D707C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beHitLandResultDataList)

META_GET_META(beHitLandResultDataList)

void *beHitLandResultDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D707C;
    object.__vtable = beHitLandResultDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beHitLandResultDataList)

void beHitLandResultDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beHitLandResultDataList_meta, igObjectList_register,
                       fn_80024180, beHitLandResultDataList_getMetaCall,
                       beHitLandResultDataList_className, 0x14,
                       beHitLandResultDataList_vtableRead, 0, 0, beHitLandResultDataList_dependencies);
}

META_GET_META_CALL(beHitLandResultDataList)

}
#pragma pop
