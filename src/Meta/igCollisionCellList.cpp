// igCollisionCellList: Alchemy class registration (0x8028DCDC..0x8028DE3C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCollisionCellList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8028C93C();
extern char igCollisionCellList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CCD70[];
}

struct Instance_8028DD18_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollisionCellList)

void *igCollisionCellList_vtableRead()
{
    Instance_8028DD18_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CCD70;
    object.__vtable = igCollisionCellList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollisionCellList)

void igCollisionCellList_register()
{
    fn_8028C93C();
    meta_registerClass(0, &igCollisionCellList_meta, igObjectList_register,
                       fn_80024180, igCollisionCellList_getMetaCall,
                       igCollisionCellList_className, 0x14,
                       igCollisionCellList_vtableRead, 0, 0, igCollisionCellList_dependencies);
}

META_GET_META_CALL(igCollisionCellList)

}
#pragma pop
