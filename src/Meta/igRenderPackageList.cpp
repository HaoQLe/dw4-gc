// igRenderPackageList: Alchemy class registration (0x801AEE28..0x801AEF88). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRenderPackageList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_801AA6DC();
extern char igRenderPackageList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B9718[];
}

struct Instance_801AEE64_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRenderPackageList)

void *igRenderPackageList_vtableRead()
{
    Instance_801AEE64_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804B9718;
    object.__vtable = igRenderPackageList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRenderPackageList)

void igRenderPackageList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igRenderPackageList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igRenderPackageList_getMetaCall,
                       igRenderPackageList_className, 0x14,
                       igRenderPackageList_vtableRead, 0, 0, igRenderPackageList_dependencies);
}

META_GET_META_CALL(igRenderPackageList)

}
#pragma pop
