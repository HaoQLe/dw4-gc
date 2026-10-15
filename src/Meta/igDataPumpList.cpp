// igDataPumpList: Alchemy class registration (0x80218D50..0x80218EB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDataPumpList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80216620();
extern char igDataPumpList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804BBB00[];
}

struct Instance_80218D8C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataPumpList)

void *igDataPumpList_vtableRead()
{
    Instance_80218D8C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804BBB00;
    object.__vtable = igDataPumpList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDataPumpList)

void igDataPumpList_register()
{
    fn_80216620();
    meta_registerClass(0, &igDataPumpList_meta, igObjectList_register,
                       fn_80024180, igDataPumpList_getMetaCall,
                       igDataPumpList_className, 0x14,
                       igDataPumpList_vtableRead, 0, 0, igDataPumpList_dependencies);
}

META_GET_META_CALL(igDataPumpList)

}
#pragma pop
