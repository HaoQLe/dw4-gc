// igNonRefCountedMatrixObjectList: Alchemy class registration (0x80217DB4..0x80217F14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedMatrixObjectList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_80216620();
extern char igNonRefCountedMatrixObjectList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804BC350[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedMatrixObjectList)

void *igNonRefCountedMatrixObjectList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_804BC350;
    object.__vtable = igNonRefCountedMatrixObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedMatrixObjectList)

void igNonRefCountedMatrixObjectList_register()
{
    fn_80216620();
    meta_registerClass(0, &igNonRefCountedMatrixObjectList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedMatrixObjectList_getMetaCall,
                       igNonRefCountedMatrixObjectList_className, 0x14,
                       igNonRefCountedMatrixObjectList_vtableRead, 0, 0, igNonRefCountedMatrixObjectList_dependencies);
}

META_GET_META_CALL(igNonRefCountedMatrixObjectList)

}
#pragma pop
