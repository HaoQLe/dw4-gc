// igLightList: Alchemy class registration (0x800B5904..0x800B5A64). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLightList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igLightList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DC7C[];
}

struct Instance_800B5940_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLightList)

void *igLightList_vtableRead()
{
    Instance_800B5940_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DC7C;
    object.__vtable = igLightList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightList)

void igLightList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igLightList_meta, igObjectList_register,
                       fn_80024180, igLightList_getMetaCall,
                       igLightList_className, 0x14,
                       igLightList_vtableRead, 0, 0, igLightList_dependencies);
}

META_GET_META_CALL(igLightList)

}
#pragma pop
