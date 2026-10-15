// igMetaObjectList: Alchemy class registration (0x800343F4..0x80034554). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMetaObjectList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igMetaObjectList_dependencies[8];
extern char lbl_80475164[];
extern char lbl_80476E0C[];
}

struct Instance_80034430_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMetaObjectList)

void *igMetaObjectList_vtableRead()
{
    Instance_80034430_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80475164;
    object.__vtable = igMetaObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMetaObjectList)

void igMetaObjectList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMetaObjectList_meta, igObjectList_register,
                       fn_80024180, igMetaObjectList_getMetaCall,
                       igMetaObjectList_className, 0x14,
                       igMetaObjectList_vtableRead, 0, 0, igMetaObjectList_dependencies);
}

META_GET_META_CALL(igMetaObjectList)

}
#pragma pop
