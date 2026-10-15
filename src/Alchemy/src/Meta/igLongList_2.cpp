// igLongList: Alchemy class registration (0x80035F68..0x800360B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLongList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_800360B4();
extern char lbl_804747E0[];
}

struct Instance_80035FA4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLongList)

void *igLongList_vtableRead()
{
    Instance_80035FA4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_804747E0;
    object.__vtable = igLongList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLongList)

void igLongList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igLongList_meta, igDataList_register,
                       fn_80024D1C, igLongList_getMetaCall,
                       igLongList_className, 0x14,
                       igLongList_vtableRead, fn_800360B4, 0, 0);
}

META_GET_META_CALL(igLongList)

}
#pragma pop
