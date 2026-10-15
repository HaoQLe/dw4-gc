// beModelCtrlAIMapList: Alchemy class registration (0x802CA16C..0x802CA33C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlAIMapList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beModelCtrlAIMapList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D9520[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beModelCtrlAIMapList)

META_GET_META(beModelCtrlAIMapList)

void *beModelCtrlAIMapList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D9520;
    object.__vtable = beModelCtrlAIMapList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlAIMapList)

void beModelCtrlAIMapList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlAIMapList_meta, igObjectList_register,
                       fn_80024180, beModelCtrlAIMapList_getMetaCall,
                       beModelCtrlAIMapList_className, 0x14,
                       beModelCtrlAIMapList_vtableRead, 0, 0, beModelCtrlAIMapList_dependencies);
}

META_GET_META_CALL(beModelCtrlAIMapList)

}
#pragma pop
