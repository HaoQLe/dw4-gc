// igPointerList: Alchemy class registration (0x80034764..0x800348B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPointerList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_800348B0();
extern char lbl_80474FD8[];
}

struct Instance_800347A0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPointerList)

void *igPointerList_vtableRead()
{
    Instance_800347A0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474FD8;
    object.__vtable = igPointerList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPointerList)

void igPointerList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igPointerList_meta, igDataList_register,
                       fn_80024D1C, igPointerList_getMetaCall,
                       igPointerList_className, 0x14,
                       igPointerList_vtableRead, fn_800348B0, 0, 0);
}

META_GET_META_CALL(igPointerList)

}
#pragma pop
