// beModelCtrlDataList: Alchemy class registration (0x802CC8F8..0x802CCA74). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beModelCtrlDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D8AD8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlDataList)

void *beModelCtrlDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D8AD8;
    object.__vtable = beModelCtrlDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlDataList)

void beModelCtrlDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlDataList_meta, igObjectList_register,
                       fn_80024180, beModelCtrlDataList_getMetaCall,
                       beModelCtrlDataList_className, 0x14,
                       beModelCtrlDataList_vtableRead, 0, 0, beModelCtrlDataList_dependencies);
}

META_GET_META_CALL(beModelCtrlDataList)

}
#pragma pop
