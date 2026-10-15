// beAsTargetModelDataList: Alchemy class registration (0x802E46F0..0x802E48C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beAsTargetModelDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beAsTargetModelDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D4000[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beAsTargetModelDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beAsTargetModelDataList)
#pragma pop

void *beAsTargetModelDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D4000;
    object.__vtable = beAsTargetModelDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beAsTargetModelDataList)

void beAsTargetModelDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAsTargetModelDataList_meta, igObjectList_register,
                       fn_80024180, beAsTargetModelDataList_getMetaCall,
                       beAsTargetModelDataList_className, 0x14,
                       beAsTargetModelDataList_vtableRead, 0, 0, beAsTargetModelDataList_dependencies);
}

META_GET_META_CALL(beAsTargetModelDataList)

}
#pragma pop
