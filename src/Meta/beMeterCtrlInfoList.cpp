// beMeterCtrlInfoList: Alchemy class registration (0x802CD380..0x802CD4FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMeterCtrlInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beMeterCtrlInfoList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D8878[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beMeterCtrlInfoList)
#pragma pop

void *beMeterCtrlInfoList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D8878;
    object.__vtable = beMeterCtrlInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMeterCtrlInfoList)

void beMeterCtrlInfoList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMeterCtrlInfoList_meta, igObjectList_register,
                       fn_80024180, beMeterCtrlInfoList_getMetaCall,
                       beMeterCtrlInfoList_className, 0x14,
                       beMeterCtrlInfoList_vtableRead, 0, 0, beMeterCtrlInfoList_dependencies);
}

META_GET_META_CALL(beMeterCtrlInfoList)

}
#pragma pop
