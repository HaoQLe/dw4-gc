// beWeaponAttachDataList: Alchemy class registration (0x802B38CC..0x802B3ADC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWeaponAttachDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beWeaponAttachDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DCA80[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beWeaponAttachDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beWeaponAttachDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beWeaponAttachDataList)
#pragma pop

void *beWeaponAttachDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DCA80;
    object.__vtable = beWeaponAttachDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beWeaponAttachDataList)

void beWeaponAttachDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWeaponAttachDataList_meta, igObjectList_register,
                       fn_80024180, beWeaponAttachDataList_getMetaCall,
                       beWeaponAttachDataList_className, 0x14,
                       beWeaponAttachDataList_vtableRead, 0, 0, beWeaponAttachDataList_dependencies);
}

META_GET_META_CALL(beWeaponAttachDataList)

}
#pragma pop
