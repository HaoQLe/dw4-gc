// igObjectListList: Alchemy class registration (0x80033D14..0x80033E74). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igObjectListList_dependencies[8];
extern char lbl_80475484[];
extern char lbl_80476E0C[];
}

struct Instance_80033D50_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectListList)

void *igObjectListList_vtableRead()
{
    Instance_80033D50_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80475484;
    object.__vtable = igObjectListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectListList)

void igObjectListList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igObjectListList_meta, igObjectList_register,
                       fn_80024180, igObjectListList_getMetaCall,
                       igObjectListList_className, 0x14,
                       igObjectListList_vtableRead, 0, 0, igObjectListList_dependencies);
}

META_GET_META_CALL(igObjectListList)

}
#pragma pop
