// beModelCtrlAIDataList: Alchemy class registration (0x802CA748..0x802CA918). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlAIDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beModelCtrlAIDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D9380[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beModelCtrlAIDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beModelCtrlAIDataList)
#pragma pop

void *beModelCtrlAIDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D9380;
    object.__vtable = beModelCtrlAIDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlAIDataList)

void beModelCtrlAIDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlAIDataList_meta, igObjectList_register,
                       fn_80024180, beModelCtrlAIDataList_getMetaCall,
                       beModelCtrlAIDataList_className, 0x14,
                       beModelCtrlAIDataList_vtableRead, 0, 0, beModelCtrlAIDataList_dependencies);
}

META_GET_META_CALL(beModelCtrlAIDataList)

}
#pragma pop
