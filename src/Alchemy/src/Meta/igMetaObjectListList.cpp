// igMetaObjectListList: Alchemy class registration (0x80034220..0x80034380). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMetaObjectListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igMetaObjectListList_dependencies[8];
extern char lbl_8047522C[];
extern char lbl_80476E0C[];
}

struct Instance_8003425C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMetaObjectListList)

void *igMetaObjectListList_vtableRead()
{
    Instance_8003425C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047522C;
    object.__vtable = igMetaObjectListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMetaObjectListList)

void igMetaObjectListList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMetaObjectListList_meta, igObjectList_register,
                       fn_80024180, igMetaObjectListList_getMetaCall,
                       igMetaObjectListList_className, 0x14,
                       igMetaObjectListList_vtableRead, 0, 0, igMetaObjectListList_dependencies);
}

META_GET_META_CALL(igMetaObjectListList)

}
#pragma pop
