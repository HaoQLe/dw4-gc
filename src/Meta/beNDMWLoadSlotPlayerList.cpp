// beNDMWLoadSlotPlayerList: Alchemy class registration (0x803402D4..0x803404A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWLoadSlotPlayerList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNDMWLoadSlotPlayerList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E5154[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beNDMWLoadSlotPlayerList)

META_GET_META(beNDMWLoadSlotPlayerList)

void *beNDMWLoadSlotPlayerList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E5154;
    object.__vtable = beNDMWLoadSlotPlayerList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadSlotPlayerList)

void beNDMWLoadSlotPlayerList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadSlotPlayerList_meta, igObjectList_register,
                       fn_80024180, beNDMWLoadSlotPlayerList_getMetaCall,
                       beNDMWLoadSlotPlayerList_className, 0x14,
                       beNDMWLoadSlotPlayerList_vtableRead, 0, 0, beNDMWLoadSlotPlayerList_dependencies);
}

META_GET_META_CALL(beNDMWLoadSlotPlayerList)

}
#pragma pop
