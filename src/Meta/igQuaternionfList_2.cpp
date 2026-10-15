// igQuaternionfList: Alchemy class registration (0x801216D4..0x80121820). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igQuaternionfList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
void fn_80121820();
extern char lbl_8049AC50[];
}

struct Instance_80121710_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igQuaternionfList)

void *igQuaternionfList_vtableRead()
{
    Instance_80121710_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049AC50;
    object.__vtable = igQuaternionfList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igQuaternionfList)

void igQuaternionfList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igQuaternionfList_meta, igDataList_register,
                       fn_80024D1C, igQuaternionfList_getMetaCall,
                       igQuaternionfList_className, 0x14,
                       igQuaternionfList_vtableRead, fn_80121820, 0, 0);
}

META_GET_META_CALL(igQuaternionfList)

}
#pragma pop
