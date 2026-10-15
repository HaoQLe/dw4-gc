// igMessageFilterList: Alchemy class registration (0x80284ECC..0x8028509C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessageFilterList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80284294();
extern char igMessageFilterList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CB860[];
}

struct Instance_80284F6C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igMessageFilterList)

META_GET_META(igMessageFilterList)

void *igMessageFilterList_vtableRead()
{
    Instance_80284F6C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CB860;
    object.__vtable = igMessageFilterList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageFilterList)

void igMessageFilterList_register()
{
    fn_80284294();
    meta_registerClass(0, &igMessageFilterList_meta, igObjectList_register,
                       fn_80024180, igMessageFilterList_getMetaCall,
                       igMessageFilterList_className, 0x14,
                       igMessageFilterList_vtableRead, 0, 0, igMessageFilterList_dependencies);
}

META_GET_META_CALL(igMessageFilterList)

}
#pragma pop
