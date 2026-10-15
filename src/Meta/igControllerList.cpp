// igControllerList: Alchemy class registration (0x800CB574..0x800CB6D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igControllerList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CAEE0();
extern char igControllerList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8048084C[];
}

struct Instance_800CB5B0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igControllerList)

void *igControllerList_vtableRead()
{
    Instance_800CB5B0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8048084C;
    object.__vtable = igControllerList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igControllerList)

void igControllerList_register()
{
    fn_800CAEE0();
    meta_registerClass(0, &igControllerList_meta, igObjectList_register,
                       fn_80024180, igControllerList_getMetaCall,
                       igControllerList_className, 0x14,
                       igControllerList_vtableRead, 0, 0, igControllerList_dependencies);
}

META_GET_META_CALL(igControllerList)

}
#pragma pop
