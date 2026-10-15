// igIntListNoClean: Alchemy class registration (0x80036424..0x80036574). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntListNoClean)
META_DECLARE(igDataList)
META_DECLARE(igIntList)

extern "C" {
void fn_80021B94();
void *igIntListNoClean_parentMeta();
extern char lbl_80474660[];
}

struct Instance_80036460_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIntListNoClean)

void *igIntListNoClean_vtableRead()
{
    Instance_80036460_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474660;
    object.__vtable = igIntList_vtable;
    object.__vtable = igIntListNoClean_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntListNoClean)

void igIntListNoClean_register()
{
    fn_80021B94();
    meta_registerClass(0, &igIntListNoClean_meta, igIntList_register,
                       igIntListNoClean_parentMeta, igIntListNoClean_getMetaCall,
                       igIntListNoClean_className, 0x14,
                       igIntListNoClean_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igIntListNoClean)

}
#pragma pop
