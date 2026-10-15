// igLongStack: Alchemy class registration (0x80216690..0x802167DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLongStack)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_80216620();
void fn_802167DC();
extern char lbl_804BCE20[];
}

struct Instance_802166CC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLongStack)

void *igLongStack_vtableRead()
{
    Instance_802166CC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_804BCE20;
    object.__vtable = igLongStack_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLongStack)

void igLongStack_register()
{
    fn_80216620();
    meta_registerClass(0, &igLongStack_meta, igDataList_register,
                       fn_80024D1C, igLongStack_getMetaCall,
                       igLongStack_className, 0x14,
                       igLongStack_vtableRead, fn_802167DC, 0, 0);
}

META_GET_META_CALL(igLongStack)

}
#pragma pop
