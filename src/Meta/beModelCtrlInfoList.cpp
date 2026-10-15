// beModelCtrlInfoList: Alchemy class registration (0x802C884C..0x802C89C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beModelCtrlInfoList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D99D8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlInfoList)

void *beModelCtrlInfoList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D99D8;
    object.__vtable = beModelCtrlInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlInfoList)

void beModelCtrlInfoList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoList_meta, igObjectList_register,
                       fn_80024180, beModelCtrlInfoList_getMetaCall,
                       beModelCtrlInfoList_className, 0x14,
                       beModelCtrlInfoList_vtableRead, 0, 0, beModelCtrlInfoList_dependencies);
}

META_GET_META_CALL(beModelCtrlInfoList)

}
#pragma pop
