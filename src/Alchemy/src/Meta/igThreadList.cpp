// igThreadList: Alchemy class registration (0x80024020..0x80024180). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igThreadList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igThreadList_dependencies[8];
extern char lbl_80476C18[];
extern char lbl_80476E0C[];
}

struct Instance_8002405C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igThreadList)

void *igThreadList_vtableRead()
{
    Instance_8002405C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80476C18;
    object.__vtable = igThreadList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igThreadList)

void igThreadList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igThreadList_meta, igObjectList_register,
                       fn_80024180, igThreadList_getMetaCall,
                       igThreadList_className, 0x14,
                       igThreadList_vtableRead, 0, 0, igThreadList_dependencies);
}

META_GET_META_CALL(igThreadList)

}
#pragma pop
