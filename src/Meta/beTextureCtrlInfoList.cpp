// beTextureCtrlInfoList: Alchemy class registration (0x802B5EF4..0x802B6070). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beTextureCtrlInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beTextureCtrlInfoList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DC110[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beTextureCtrlInfoList)

void *beTextureCtrlInfoList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DC110;
    object.__vtable = beTextureCtrlInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beTextureCtrlInfoList)

void beTextureCtrlInfoList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTextureCtrlInfoList_meta, igObjectList_register,
                       fn_80024180, beTextureCtrlInfoList_getMetaCall,
                       beTextureCtrlInfoList_className, 0x14,
                       beTextureCtrlInfoList_vtableRead, 0, 0, beTextureCtrlInfoList_dependencies);
}

META_GET_META_CALL(beTextureCtrlInfoList)

}
#pragma pop
