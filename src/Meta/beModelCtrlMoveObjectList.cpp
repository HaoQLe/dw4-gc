// beModelCtrlMoveObjectList: Alchemy class registration (0x802C840C..0x802C85DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlMoveObjectList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beModelCtrlMoveObjectList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D9B70[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beModelCtrlMoveObjectList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beModelCtrlMoveObjectList)
#pragma pop

void *beModelCtrlMoveObjectList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D9B70;
    object.__vtable = beModelCtrlMoveObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlMoveObjectList)

void beModelCtrlMoveObjectList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlMoveObjectList_meta, igObjectList_register,
                       fn_80024180, beModelCtrlMoveObjectList_getMetaCall,
                       beModelCtrlMoveObjectList_className, 0x14,
                       beModelCtrlMoveObjectList_vtableRead, 0, 0, beModelCtrlMoveObjectList_dependencies);
}

META_GET_META_CALL(beModelCtrlMoveObjectList)

}
#pragma pop
