// igNonRefCountedAttrStackManagerList: Alchemy class registration (0x801C7BD8..0x801C7D70). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedAttrStackManagerList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_801AA6DC();
extern char igNonRefCountedAttrStackManagerList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B6BFC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igNonRefCountedAttrStackManagerList)

META_GET_META(igNonRefCountedAttrStackManagerList)

void *igNonRefCountedAttrStackManagerList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804B6BFC;
    object.__vtable = igNonRefCountedAttrStackManagerList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedAttrStackManagerList)

void igNonRefCountedAttrStackManagerList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igNonRefCountedAttrStackManagerList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedAttrStackManagerList_getMetaCall,
                       igNonRefCountedAttrStackManagerList_className, 0x14,
                       igNonRefCountedAttrStackManagerList_vtableRead, 0, 0, igNonRefCountedAttrStackManagerList_dependencies);
}

META_GET_META_CALL(igNonRefCountedAttrStackManagerList)

}
#pragma pop
