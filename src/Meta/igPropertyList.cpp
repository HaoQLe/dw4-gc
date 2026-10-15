// igPropertyList: Alchemy class registration (0x801B4634..0x801B4794). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPropertyList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igPropertyList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B8718[];
}

struct Instance_801B4670_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPropertyList)

void *igPropertyList_vtableRead()
{
    Instance_801B4670_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B8718;
    object.__vtable = igPropertyList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPropertyList)

void igPropertyList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igPropertyList_meta, igObjectList_register,
                       fn_80024180, igPropertyList_getMetaCall,
                       igPropertyList_className, 0x14,
                       igPropertyList_vtableRead, 0, 0, igPropertyList_dependencies);
}

META_GET_META_CALL(igPropertyList)

}
#pragma pop
