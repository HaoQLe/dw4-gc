// beMatCtrlSearchList: Alchemy class registration (0x802D0834..0x802D0A04). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMatCtrlSearchList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beMatCtrlSearchList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D7E68[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beMatCtrlSearchList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beMatCtrlSearchList)
#pragma pop

void *beMatCtrlSearchList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D7E68;
    object.__vtable = beMatCtrlSearchList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMatCtrlSearchList)

void beMatCtrlSearchList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMatCtrlSearchList_meta, igObjectList_register,
                       fn_80024180, beMatCtrlSearchList_getMetaCall,
                       beMatCtrlSearchList_className, 0x14,
                       beMatCtrlSearchList_vtableRead, 0, 0, beMatCtrlSearchList_dependencies);
}

META_GET_META_CALL(beMatCtrlSearchList)

}
#pragma pop
