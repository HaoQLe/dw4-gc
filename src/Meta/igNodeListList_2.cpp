// igNodeListList: Alchemy class registration (0x801B71BC..0x801B731C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNodeListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igNodeListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B84F8[];
}

struct Instance_801B71F8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNodeListList)

void *igNodeListList_vtableRead()
{
    Instance_801B71F8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B84F8;
    object.__vtable = igNodeListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNodeListList)

void igNodeListList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igNodeListList_meta, igObjectList_register,
                       fn_80024180, igNodeListList_getMetaCall,
                       igNodeListList_className, 0x14,
                       igNodeListList_vtableRead, 0, 0, igNodeListList_dependencies);
}

META_GET_META_CALL(igNodeListList)

}
#pragma pop
