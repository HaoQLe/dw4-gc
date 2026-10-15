// igContextExtList: Alchemy class registration (0x80036EC0..0x80037020). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igContextExtList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igContextExtList_dependencies[8];
extern char lbl_8047435C[];
extern char lbl_80476E0C[];
}

struct Instance_80036EFC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igContextExtList)

void *igContextExtList_vtableRead()
{
    Instance_80036EFC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047435C;
    object.__vtable = igContextExtList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igContextExtList)

void igContextExtList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igContextExtList_meta, igObjectList_register,
                       fn_80024180, igContextExtList_getMetaCall,
                       igContextExtList_className, 0x14,
                       igContextExtList_vtableRead, 0, 0, igContextExtList_dependencies);
}

META_GET_META_CALL(igContextExtList)

}
#pragma pop
