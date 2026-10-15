// igGuiComponentList: Alchemy class registration (0x80111B74..0x80111CD4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGuiComponentList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igGuiComponentList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804974E4[];
}

struct Instance_80111BB0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGuiComponentList)

void *igGuiComponentList_vtableRead()
{
    Instance_80111BB0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804974E4;
    object.__vtable = igGuiComponentList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGuiComponentList)

void igGuiComponentList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igGuiComponentList_meta, igObjectList_register,
                       fn_80024180, igGuiComponentList_getMetaCall,
                       igGuiComponentList_className, 0x14,
                       igGuiComponentList_vtableRead, 0, 0, igGuiComponentList_dependencies);
}

META_GET_META_CALL(igGuiComponentList)

}
#pragma pop
