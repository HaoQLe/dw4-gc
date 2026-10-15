// beTimerDataList: Alchemy class registration (0x802B5AA4..0x802B5C74). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beTimerDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beTimerDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DC2A8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beTimerDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beTimerDataList)
#pragma pop

void *beTimerDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DC2A8;
    object.__vtable = beTimerDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beTimerDataList)

void beTimerDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTimerDataList_meta, igObjectList_register,
                       fn_80024180, beTimerDataList_getMetaCall,
                       beTimerDataList_className, 0x14,
                       beTimerDataList_vtableRead, 0, 0, beTimerDataList_dependencies);
}

META_GET_META_CALL(beTimerDataList)

}
#pragma pop
