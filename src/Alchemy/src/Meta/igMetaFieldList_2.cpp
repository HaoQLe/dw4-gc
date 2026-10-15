// igMetaFieldList: Alchemy class registration (0x80034084..0x800341E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMetaFieldList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igMetaFieldList_dependencies[8];
extern char lbl_804752F4[];
extern char lbl_80476E0C[];
}

struct Instance_800340C0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMetaFieldList)

void *igMetaFieldList_vtableRead()
{
    Instance_800340C0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804752F4;
    object.__vtable = igMetaFieldList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMetaFieldList)

void igMetaFieldList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMetaFieldList_meta, igObjectList_register,
                       fn_80024180, igMetaFieldList_getMetaCall,
                       igMetaFieldList_className, 0x14,
                       igMetaFieldList_vtableRead, 0, 0, igMetaFieldList_dependencies);
}

META_GET_META_CALL(igMetaFieldList)

}
#pragma pop
