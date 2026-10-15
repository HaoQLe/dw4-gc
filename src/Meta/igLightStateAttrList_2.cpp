// igLightStateAttrList: Alchemy class registration (0x800B5460..0x800B55C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLightStateAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igLightStateAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DD44[];
}

struct Instance_800B549C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLightStateAttrList)

void *igLightStateAttrList_vtableRead()
{
    Instance_800B549C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DD44;
    object.__vtable = igLightStateAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightStateAttrList)

void igLightStateAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igLightStateAttrList_meta, igObjectList_register,
                       fn_80024180, igLightStateAttrList_getMetaCall,
                       igLightStateAttrList_className, 0x14,
                       igLightStateAttrList_vtableRead, 0, 0, igLightStateAttrList_dependencies);
}

META_GET_META_CALL(igLightStateAttrList)

}
#pragma pop
