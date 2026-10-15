// igHeapableList: Alchemy class registration (0x801BF06C..0x801BF1CC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igHeapableList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igHeapableList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B755C[];
}

struct Instance_801BF0A8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igHeapableList)

void *igHeapableList_vtableRead()
{
    Instance_801BF0A8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B755C;
    object.__vtable = igHeapableList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igHeapableList)

void igHeapableList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igHeapableList_meta, igObjectList_register,
                       fn_80024180, igHeapableList_getMetaCall,
                       igHeapableList_className, 0x14,
                       igHeapableList_vtableRead, 0, 0, igHeapableList_dependencies);
}

META_GET_META_CALL(igHeapableList)

}
#pragma pop
