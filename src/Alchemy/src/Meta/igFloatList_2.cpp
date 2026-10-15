// igFloatList: Alchemy class registration (0x80034DC0..0x80034F0C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFloatList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80034F0C();
extern char lbl_80474D90[];
}

struct Instance_80034DFC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFloatList)

void *igFloatList_vtableRead()
{
    Instance_80034DFC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474D90;
    object.__vtable = igFloatList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFloatList)

void igFloatList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igFloatList_meta, igDataList_register,
                       fn_80024D1C, igFloatList_getMetaCall,
                       igFloatList_className, 0x14,
                       igFloatList_vtableRead, fn_80034F0C, 0, 0);
}

META_GET_META_CALL(igFloatList)

}
#pragma pop
