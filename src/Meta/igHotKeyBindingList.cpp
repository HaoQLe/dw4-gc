// igHotKeyBindingList: Alchemy class registration (0x8010F5C8..0x8010F728). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igHotKeyBindingList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igHotKeyBindingList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804976C0[];
}

struct Instance_8010F604_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHotKeyBindingList)

void *igHotKeyBindingList_vtableRead()
{
    Instance_8010F604_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804976C0;
    object.__vtable = igHotKeyBindingList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHotKeyBindingList)

void igHotKeyBindingList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igHotKeyBindingList_meta, igObjectList_register,
                       fn_80024180, igHotKeyBindingList_getMetaCall,
                       igHotKeyBindingList_className, 0x14,
                       igHotKeyBindingList_vtableRead, 0, 0, igHotKeyBindingList_dependencies);
}

META_GET_META_CALL(igHotKeyBindingList)

}
#pragma pop
