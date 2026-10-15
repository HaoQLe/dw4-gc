// igImageList: Alchemy class registration (0x800D206C..0x800D2204). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igImageList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igImageList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047E1F8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igImageList)

META_GET_META(igImageList)

void *igImageList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047E1F8;
    object.__vtable = igImageList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igImageList)

void igImageList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igImageList_meta, igObjectList_register,
                       fn_80024180, igImageList_getMetaCall,
                       igImageList_className, 0x14,
                       igImageList_vtableRead, 0, 0, igImageList_dependencies);
}

META_GET_META_CALL(igImageList)

}
#pragma pop
