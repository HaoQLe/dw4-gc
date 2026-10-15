// igInfoManagerList: Alchemy class registration (0x80286CC8..0x80286E98). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInfoManagerList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80284294();
extern char igInfoManagerList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CB340[];
}

struct Instance_80286D68_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igInfoManagerList)

META_GET_META(igInfoManagerList)

void *igInfoManagerList_vtableRead()
{
    Instance_80286D68_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CB340;
    object.__vtable = igInfoManagerList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInfoManagerList)

void igInfoManagerList_register()
{
    fn_80284294();
    meta_registerClass(0, &igInfoManagerList_meta, igObjectList_register,
                       fn_80024180, igInfoManagerList_getMetaCall,
                       igInfoManagerList_className, 0x14,
                       igInfoManagerList_vtableRead, 0, 0, igInfoManagerList_dependencies);
}

META_GET_META_CALL(igInfoManagerList)

}
#pragma pop
