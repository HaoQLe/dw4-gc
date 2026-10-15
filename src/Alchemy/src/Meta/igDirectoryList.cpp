// igDirectoryList: Alchemy class registration (0x80032508..0x80032668). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDirectoryList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igDirectoryList_dependencies[8];
extern char lbl_80475824[];
extern char lbl_80476E0C[];
}

struct Instance_80032544_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDirectoryList)

void *igDirectoryList_vtableRead()
{
    Instance_80032544_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80475824;
    object.__vtable = igDirectoryList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDirectoryList)

void igDirectoryList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igDirectoryList_meta, igObjectList_register,
                       fn_80024180, igDirectoryList_getMetaCall,
                       igDirectoryList_className, 0x14,
                       igDirectoryList_vtableRead, 0, 0, igDirectoryList_dependencies);
}

META_GET_META_CALL(igDirectoryList)

}
#pragma pop
