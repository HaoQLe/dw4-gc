// beNumberCtrlInfoList: Alchemy class registration (0x802C3AD0..0x802C3C4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNumberCtrlInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNumberCtrlInfoList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DA344[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNumberCtrlInfoList)

void *beNumberCtrlInfoList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DA344;
    object.__vtable = beNumberCtrlInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNumberCtrlInfoList)

void beNumberCtrlInfoList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beNumberCtrlInfoList_meta, igObjectList_register,
                       fn_80024180, beNumberCtrlInfoList_getMetaCall,
                       beNumberCtrlInfoList_className, 0x14,
                       beNumberCtrlInfoList_vtableRead, 0, 0, beNumberCtrlInfoList_dependencies);
}

META_GET_META_CALL(beNumberCtrlInfoList)

}
#pragma pop
