// igSpecialDoubleList: Alchemy class registration (0x801AD398..0x801AD4F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSpecialDoubleList)
META_DECLARE(igDataList)
META_DECLARE(igDoubleList)

extern "C" {
void fn_801AA6DC();
void fn_801AD4F8();
void *igSpecialDoubleList_parentMeta();
extern char lbl_80474F18[];
}

struct Instance_801AD3D4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSpecialDoubleList)

void *igSpecialDoubleList_vtableRead()
{
    Instance_801AD3D4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474F18;
    object.__vtable = igDoubleList_vtable;
    object.__vtable = igSpecialDoubleList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSpecialDoubleList)

void igSpecialDoubleList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSpecialDoubleList_meta, igDoubleList_register,
                       igSpecialDoubleList_parentMeta, igSpecialDoubleList_getMetaCall,
                       igSpecialDoubleList_className, 0x14,
                       igSpecialDoubleList_vtableRead, fn_801AD4F8, 0, 0);
}

META_GET_META_CALL(igSpecialDoubleList)

}
#pragma pop
