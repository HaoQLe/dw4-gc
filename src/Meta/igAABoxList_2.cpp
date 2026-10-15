// igAABoxList: Alchemy class registration (0x801225F8..0x80122758). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAABoxList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8011D8BC();
extern char igAABoxList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8049A3EC[];
}

struct Instance_80122634_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAABoxList)

void *igAABoxList_vtableRead()
{
    Instance_80122634_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8049A3EC;
    object.__vtable = igAABoxList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAABoxList)

void igAABoxList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igAABoxList_meta, igObjectList_register,
                       fn_80024180, igAABoxList_getMetaCall,
                       igAABoxList_className, 0x14,
                       igAABoxList_vtableRead, 0, 0, igAABoxList_dependencies);
}

META_GET_META_CALL(igAABoxList)

}
#pragma pop
