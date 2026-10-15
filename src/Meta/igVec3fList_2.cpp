// igVec3fList: Alchemy class registration (0x8012213C..0x80122288). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec3fList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
void fn_80122288();
extern char lbl_8047DFF8[];
}

struct Instance_80122178_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec3fList)

void *igVec3fList_vtableRead()
{
    Instance_80122178_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8047DFF8;
    object.__vtable = igVec3fList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec3fList)

void igVec3fList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec3fList_meta, igDataList_register,
                       fn_80024D1C, igVec3fList_getMetaCall,
                       igVec3fList_className, 0x14,
                       igVec3fList_vtableRead, fn_80122288, 0, 0);
}

META_GET_META_CALL(igVec3fList)

}
#pragma pop
