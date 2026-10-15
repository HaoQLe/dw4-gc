// igLibraryList: Alchemy class registration (0x8002D894..0x8002D9F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLibraryList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igLibraryList_dependencies[8];
extern char lbl_80475D70[];
extern char lbl_80476E0C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLibraryList)

void *igLibraryList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80475D70;
    object.__vtable = igLibraryList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLibraryList)

void igLibraryList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igLibraryList_meta, igObjectList_register,
                       fn_80024180, igLibraryList_getMetaCall,
                       igLibraryList_className, 0x14,
                       igLibraryList_vtableRead, 0, 0, igLibraryList_dependencies);
}

META_GET_META_CALL(igLibraryList)

}
#pragma pop
