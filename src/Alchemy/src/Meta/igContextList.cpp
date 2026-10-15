// igContextList: Alchemy class registration (0x8003759C..0x80037734). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igContextList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void fn_80021B94();
void *fn_80023FDC();
extern char igContextList_dependencies[8];
extern char lbl_80474170[];
extern char lbl_80476E0C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igContextList)

META_GET_META(igContextList)

void *igContextList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_80474170;
    object.__vtable = igContextList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igContextList)

void igContextList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igContextList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igContextList_getMetaCall,
                       igContextList_className, 0x14,
                       igContextList_vtableRead, 0, 0, igContextList_dependencies);
}

META_GET_META_CALL(igContextList)

}
#pragma pop
