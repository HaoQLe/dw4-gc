// beNDMWMcSlotList: Alchemy class registration (0x8033F960..0x8033FB30). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMcSlotList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNDMWMcSlotList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E5454[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNDMWMcSlotList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNDMWMcSlotList)
#pragma pop

void *beNDMWMcSlotList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E5454;
    object.__vtable = beNDMWMcSlotList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWMcSlotList)

void beNDMWMcSlotList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMcSlotList_meta, igObjectList_register,
                       fn_80024180, beNDMWMcSlotList_getMetaCall,
                       beNDMWMcSlotList_className, 0x14,
                       beNDMWMcSlotList_vtableRead, 0, 0, beNDMWMcSlotList_dependencies);
}

META_GET_META_CALL(beNDMWMcSlotList)

}
#pragma pop
