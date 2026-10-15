// igCharList: Alchemy class registration (0x80036A00..0x80036B4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCharList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80036B4C();
extern char lbl_80474540[];
}

struct Instance_80036A3C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCharList)

void *igCharList_vtableRead()
{
    Instance_80036A3C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474540;
    object.__vtable = igCharList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCharList)

void igCharList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igCharList_meta, igDataList_register,
                       fn_80024D1C, igCharList_getMetaCall,
                       igCharList_className, 0x14,
                       igCharList_vtableRead, fn_80036B4C, 0, 0);
}

META_GET_META_CALL(igCharList)

}
#pragma pop
