// igObjectList: Alchemy class registration (0x80028FC0..0x8002910C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_8002910C();
extern char lbl_80476E0C[];
}

struct Instance_80028FFC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectList)

void *igObjectList_vtableRead()
{
    Instance_80028FFC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectList)

void igObjectList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igObjectList_meta, igDataList_register,
                       fn_80024D1C, igObjectList_getMetaCall,
                       igObjectList_className, 0x14,
                       igObjectList_vtableRead, fn_8002910C, 0, 0);
}

META_GET_META_CALL(igObjectList)

}
#pragma pop
