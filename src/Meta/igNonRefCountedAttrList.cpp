// igNonRefCountedAttrList: Alchemy class registration (0x800BB484..0x800BB5E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedAttrList)
META_DECLARE(igDataList)
META_DECLARE(igNonRefCountedObjectList)

extern "C" {
void *fn_80023FDC();
void fn_800ABC8C();
extern char igNonRefCountedAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047D830[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedAttrList)

void *igNonRefCountedAttrList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igNonRefCountedObjectList_vtable;
    object.__vtable = lbl_8047D830;
    object.__vtable = igNonRefCountedAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedAttrList)

void igNonRefCountedAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igNonRefCountedAttrList_meta, igNonRefCountedObjectList_register,
                       fn_80023FDC, igNonRefCountedAttrList_getMetaCall,
                       igNonRefCountedAttrList_className, 0x14,
                       igNonRefCountedAttrList_vtableRead, 0, 0, igNonRefCountedAttrList_dependencies);
}

META_GET_META_CALL(igNonRefCountedAttrList)

}
#pragma pop
