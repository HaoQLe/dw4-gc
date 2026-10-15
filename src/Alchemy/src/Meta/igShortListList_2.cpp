// igShortListList: Alchemy class registration (0x800352B8..0x80035418). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igShortListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igShortListList_dependencies[8];
extern char lbl_80474C0C[];
extern char lbl_80476E0C[];
}

struct Instance_800352F4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igShortListList)

void *igShortListList_vtableRead()
{
    Instance_800352F4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80474C0C;
    object.__vtable = igShortListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igShortListList)

void igShortListList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igShortListList_meta, igObjectList_register,
                       fn_80024180, igShortListList_getMetaCall,
                       igShortListList_className, 0x14,
                       igShortListList_vtableRead, 0, 0, igShortListList_dependencies);
}

META_GET_META_CALL(igShortListList)

}
#pragma pop
