// igFloatListList: Alchemy class registration (0x80034BEC..0x80034D4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFloatListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igFloatListList_dependencies[8];
extern char lbl_80474E54[];
extern char lbl_80476E0C[];
}

struct Instance_80034C28_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFloatListList)

void *igFloatListList_vtableRead()
{
    Instance_80034C28_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80474E54;
    object.__vtable = igFloatListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFloatListList)

void igFloatListList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igFloatListList_meta, igObjectList_register,
                       fn_80024180, igFloatListList_getMetaCall,
                       igFloatListList_className, 0x14,
                       igFloatListList_vtableRead, 0, 0, igFloatListList_dependencies);
}

META_GET_META_CALL(igFloatListList)

}
#pragma pop
