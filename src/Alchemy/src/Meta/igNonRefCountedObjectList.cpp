// igNonRefCountedObjectList: Alchemy class registration (0x800295D8..0x80029724). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedObjectList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80029724();
extern char lbl_80476E0C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedObjectList)

void *igNonRefCountedObjectList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedObjectList)

void igNonRefCountedObjectList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igNonRefCountedObjectList_meta, igDataList_register,
                       fn_80024D1C, igNonRefCountedObjectList_getMetaCall,
                       igNonRefCountedObjectList_className, 0x14,
                       igNonRefCountedObjectList_vtableRead, fn_80029724, 0, 0);
}

META_GET_META_CALL(igNonRefCountedObjectList)

}
#pragma pop
