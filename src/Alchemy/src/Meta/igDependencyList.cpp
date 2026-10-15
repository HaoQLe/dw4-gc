// igDependencyList: Alchemy class registration (0x8003326C..0x800333B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDependencyList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_800333B8();
extern char lbl_80475704[];
}

struct Instance_800332A8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDependencyList)

void *igDependencyList_vtableRead()
{
    Instance_800332A8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80475704;
    object.__vtable = igDependencyList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDependencyList)

void igDependencyList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igDependencyList_meta, igDataList_register,
                       fn_80024D1C, igDependencyList_getMetaCall,
                       igDependencyList_className, 0x14,
                       igDependencyList_vtableRead, fn_800333B8, 0, 0);
}

META_GET_META_CALL(igDependencyList)

}
#pragma pop
