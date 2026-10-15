// igBoolList: Alchemy class registration (0x80036C7C..0x80036DC8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBoolList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80036DC8();
extern char lbl_80474420[];
}

struct Instance_80036CB8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBoolList)

void *igBoolList_vtableRead()
{
    Instance_80036CB8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474420;
    object.__vtable = igBoolList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBoolList)

void igBoolList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igBoolList_meta, igDataList_register,
                       fn_80024D1C, igBoolList_getMetaCall,
                       igBoolList_className, 0x14,
                       igBoolList_vtableRead, fn_80036DC8, 0, 0);
}

META_GET_META_CALL(igBoolList)

}
#pragma pop
