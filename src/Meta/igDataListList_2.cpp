// igDataListList: Alchemy class registration (0x8014CF9C..0x8014D0FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDataListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igDataListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804A89A4[];
}

struct Instance_8014CFD8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataListList)

void *igDataListList_vtableRead()
{
    Instance_8014CFD8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804A89A4;
    object.__vtable = igDataListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDataListList)

void igDataListList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igDataListList_meta, igObjectList_register,
                       fn_80024180, igDataListList_getMetaCall,
                       igDataListList_className, 0x14,
                       igDataListList_vtableRead, 0, 0, igDataListList_dependencies);
}

META_GET_META_CALL(igDataListList)

}
#pragma pop
