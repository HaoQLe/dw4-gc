// igIntListList: Alchemy class registration (0x80033EB0..0x80034010). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igIntListList_dependencies[8];
extern char lbl_804753BC[];
extern char lbl_80476E0C[];
}

struct Instance_80033EEC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIntListList)

void *igIntListList_vtableRead()
{
    Instance_80033EEC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804753BC;
    object.__vtable = igIntListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntListList)

void igIntListList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igIntListList_meta, igObjectList_register,
                       fn_80024180, igIntListList_getMetaCall,
                       igIntListList_className, 0x14,
                       igIntListList_vtableRead, 0, 0, igIntListList_dependencies);
}

META_GET_META_CALL(igIntListList)

}
#pragma pop
