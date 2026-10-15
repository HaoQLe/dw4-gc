// igVec3fAlignedList: Alchemy class registration (0x800B3B88..0x800B3CE0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec3fAlignedList)
META_DECLARE(igDataList)
META_DECLARE(igVec3fList)

extern "C" {
void fn_800ABC8C();
void fn_800B3CE8();
void *igVec3fAlignedList_parentMeta();
extern char lbl_8047DFF8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec3fAlignedList)

void *igVec3fAlignedList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8047DFF8;
    object.__vtable = igVec3fList_vtable;
    object.__vtable = igVec3fAlignedList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec3fAlignedList)

void igVec3fAlignedList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igVec3fAlignedList_meta, igVec3fList_register,
                       igVec3fAlignedList_parentMeta, igVec3fAlignedList_getMetaCall,
                       igVec3fAlignedList_className, 0x14,
                       igVec3fAlignedList_vtableRead, 0, fn_800B3CE8, 0);
}

META_GET_META_CALL(igVec3fAlignedList)

}
#pragma pop
