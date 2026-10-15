// igNonRefCountedThreadList: Alchemy class registration (0x80023E7C..0x80023FDC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedThreadList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void fn_80021B94();
void *fn_80023FDC();
extern char igNonRefCountedThreadList_dependencies[8];
extern char lbl_80476D44[];
extern char lbl_80476E0C[];
}

struct Instance_80023EB8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedThreadList)

void *igNonRefCountedThreadList_vtableRead()
{
    Instance_80023EB8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_80476D44;
    object.__vtable = igNonRefCountedThreadList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedThreadList)

void igNonRefCountedThreadList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igNonRefCountedThreadList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedThreadList_getMetaCall,
                       igNonRefCountedThreadList_className, 0x14,
                       igNonRefCountedThreadList_vtableRead, 0, 0, igNonRefCountedThreadList_dependencies);
}

META_GET_META_CALL(igNonRefCountedThreadList)

}
#pragma pop
