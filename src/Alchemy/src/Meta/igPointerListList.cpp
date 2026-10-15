// igPointerListList: Alchemy class registration (0x80034590..0x800346F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPointerListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igPointerListList_dependencies[8];
extern char lbl_8047509C[];
extern char lbl_80476E0C[];
}

struct Instance_800345CC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPointerListList)

void *igPointerListList_vtableRead()
{
    Instance_800345CC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047509C;
    object.__vtable = igPointerListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPointerListList)

void igPointerListList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igPointerListList_meta, igObjectList_register,
                       fn_80024180, igPointerListList_getMetaCall,
                       igPointerListList_className, 0x14,
                       igPointerListList_vtableRead, 0, 0, igPointerListList_dependencies);
}

META_GET_META_CALL(igPointerListList)

}
#pragma pop
