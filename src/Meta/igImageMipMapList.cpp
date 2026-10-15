// igImageMipMapList: Alchemy class registration (0x800AF990..0x800AFAF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igImageMipMapList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igImageMipMapList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047E1F8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igImageMipMapList)

void *igImageMipMapList_vtableRead()
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
    object.__vtable = igImageMipMapList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igImageMipMapList)

void igImageMipMapList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igImageMipMapList_meta, igObjectList_register,
                       fn_80024180, igImageMipMapList_getMetaCall,
                       igImageMipMapList_className, 0x14,
                       igImageMipMapList_vtableRead, 0, 0, igImageMipMapList_dependencies);
}

META_GET_META_CALL(igImageMipMapList)

}
#pragma pop
