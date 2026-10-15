// igCharListNoClean: Alchemy class registration (0x80036834..0x80036984). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCharListNoClean)
META_DECLARE(igCharList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *igCharListNoClean_parentMeta();
extern char lbl_80474540[];
}

struct Instance_80036870_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCharListNoClean)

void *igCharListNoClean_vtableRead()
{
    Instance_80036870_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474540;
    object.__vtable = igCharList_vtable;
    object.__vtable = igCharListNoClean_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCharListNoClean)

void igCharListNoClean_register()
{
    fn_80021B94();
    meta_registerClass(0, &igCharListNoClean_meta, igCharList_register,
                       igCharListNoClean_parentMeta, igCharListNoClean_getMetaCall,
                       igCharListNoClean_className, 0x14,
                       igCharListNoClean_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igCharListNoClean)

}
#pragma pop
