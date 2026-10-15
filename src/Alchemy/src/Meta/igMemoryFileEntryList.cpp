// igMemoryFileEntryList: Alchemy class registration (0x8002C410..0x8002C5A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryFileEntryList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igMemoryFileEntryList_dependencies[8];
extern char lbl_80475F5C[];
extern char lbl_80476E0C[];
}

struct Instance_8002C484_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMemoryFileEntryList)

META_GET_META(igMemoryFileEntryList)

void *igMemoryFileEntryList_vtableRead()
{
    Instance_8002C484_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80475F5C;
    object.__vtable = igMemoryFileEntryList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMemoryFileEntryList)

void igMemoryFileEntryList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMemoryFileEntryList_meta, igObjectList_register,
                       fn_80024180, igMemoryFileEntryList_getMetaCall,
                       igMemoryFileEntryList_className, 0x14,
                       igMemoryFileEntryList_vtableRead, 0, 0, igMemoryFileEntryList_dependencies);
}

META_GET_META_CALL(igMemoryFileEntryList)

}
#pragma pop
