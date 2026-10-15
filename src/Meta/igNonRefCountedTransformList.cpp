// igNonRefCountedTransformList: Alchemy class registration (0x801AC014..0x801AC174). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedTransformList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_801AA6DC();
extern char igNonRefCountedTransformList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B9F30[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedTransformList)

void *igNonRefCountedTransformList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804B9F30;
    object.__vtable = igNonRefCountedTransformList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedTransformList)

void igNonRefCountedTransformList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igNonRefCountedTransformList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedTransformList_getMetaCall,
                       igNonRefCountedTransformList_className, 0x14,
                       igNonRefCountedTransformList_vtableRead, 0, 0, igNonRefCountedTransformList_dependencies);
}

META_GET_META_CALL(igNonRefCountedTransformList)

}
#pragma pop
