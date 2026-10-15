// igIntList: Alchemy class registration (0x800365F0..0x8003673C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_8003673C();
extern char lbl_80474660[];
}

struct Instance_8003662C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIntList)

void *igIntList_vtableRead()
{
    Instance_8003662C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474660;
    object.__vtable = igIntList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntList)

void igIntList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igIntList_meta, igDataList_register,
                       fn_80024D1C, igIntList_getMetaCall,
                       igIntList_className, 0x14,
                       igIntList_vtableRead, fn_8003673C, 0, 0);
}

META_GET_META_CALL(igIntList)

}
#pragma pop
