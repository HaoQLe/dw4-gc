// igMessageReceiverList: Alchemy class registration (0x80284C00..0x80284DD0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessageReceiverList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80284294();
extern char igMessageReceiverList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CB928[];
}

struct Instance_80284CA0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igMessageReceiverList)

META_GET_META(igMessageReceiverList)

void *igMessageReceiverList_vtableRead()
{
    Instance_80284CA0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CB928;
    object.__vtable = igMessageReceiverList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageReceiverList)

void igMessageReceiverList_register()
{
    fn_80284294();
    meta_registerClass(0, &igMessageReceiverList_meta, igObjectList_register,
                       fn_80024180, igMessageReceiverList_getMetaCall,
                       igMessageReceiverList_className, 0x14,
                       igMessageReceiverList_vtableRead, 0, 0, igMessageReceiverList_dependencies);
}

META_GET_META_CALL(igMessageReceiverList)

}
#pragma pop
