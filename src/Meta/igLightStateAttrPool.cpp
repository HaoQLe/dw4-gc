// igLightStateAttrPool: Alchemy class registration (0x801B2AF4..0x801B2C60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLightStateAttrPool)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)
META_DECLARE(igObjectPool)

extern "C" {
void fn_801AA6DC();
void *fn_801AF130();
extern char igLightStateAttrPool_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B89F4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLightStateAttrPool)

void *igLightStateAttrPool_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = igObjectPool_vtable;
    object.__vtable = lbl_804B89F4;
    object.__vtable = igLightStateAttrPool_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightStateAttrPool)

void igLightStateAttrPool_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igLightStateAttrPool_meta, igObjectPool_register,
                       fn_801AF130, igLightStateAttrPool_getMetaCall,
                       igLightStateAttrPool_className, 0x20,
                       igLightStateAttrPool_vtableRead, 0, 0, igLightStateAttrPool_dependencies);
}

META_GET_META_CALL(igLightStateAttrPool)

}
#pragma pop
