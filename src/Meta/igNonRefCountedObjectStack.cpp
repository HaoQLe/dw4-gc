// igNonRefCountedObjectStack: Alchemy class registration (0x802175A8..0x802176F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNonRefCountedObjectStack)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_80216620();
void fn_802176F4();
extern char lbl_80480B58[];
}

struct Instance_802175E4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNonRefCountedObjectStack)

void *igNonRefCountedObjectStack_vtableRead()
{
    Instance_802175E4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80480B58;
    object.__vtable = igNonRefCountedObjectStack_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNonRefCountedObjectStack)

void igNonRefCountedObjectStack_register()
{
    fn_80216620();
    meta_registerClass(0, &igNonRefCountedObjectStack_meta, igDataList_register,
                       fn_80024D1C, igNonRefCountedObjectStack_getMetaCall,
                       igNonRefCountedObjectStack_className, 0x14,
                       igNonRefCountedObjectStack_vtableRead, fn_802176F4, 0, 0);
}

META_GET_META_CALL(igNonRefCountedObjectStack)

}
#pragma pop
