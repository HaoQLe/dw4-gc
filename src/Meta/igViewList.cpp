// igViewList: Alchemy class registration (0x8010CDE0..0x8010CF40). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igViewList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igViewList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80497F9C[];
}

struct Instance_8010CE1C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igViewList)

void *igViewList_vtableRead()
{
    Instance_8010CE1C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80497F9C;
    object.__vtable = igViewList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igViewList)

void igViewList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igViewList_meta, igObjectList_register,
                       fn_80024180, igViewList_getMetaCall,
                       igViewList_className, 0x14,
                       igViewList_vtableRead, 0, 0, igViewList_dependencies);
}

META_GET_META_CALL(igViewList)

}
#pragma pop
