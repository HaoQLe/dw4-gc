// beMatCtrlDataList: Alchemy class registration (0x802D0CC0..0x802D0E90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMatCtrlDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beMatCtrlDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D7CD0[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beMatCtrlDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beMatCtrlDataList)
#pragma pop

void *beMatCtrlDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D7CD0;
    object.__vtable = beMatCtrlDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMatCtrlDataList)

void beMatCtrlDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMatCtrlDataList_meta, igObjectList_register,
                       fn_80024180, beMatCtrlDataList_getMetaCall,
                       beMatCtrlDataList_className, 0x14,
                       beMatCtrlDataList_vtableRead, 0, 0, beMatCtrlDataList_dependencies);
}

META_GET_META_CALL(beMatCtrlDataList)

}
#pragma pop
