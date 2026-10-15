// igGraphPathList: Alchemy class registration (0x801BFADC..0x801BFC3C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGraphPathList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igGraphPathList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B7494[];
}

struct Instance_801BFB18_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGraphPathList)

void *igGraphPathList_vtableRead()
{
    Instance_801BFB18_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B7494;
    object.__vtable = igGraphPathList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGraphPathList)

void igGraphPathList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igGraphPathList_meta, igObjectList_register,
                       fn_80024180, igGraphPathList_getMetaCall,
                       igGraphPathList_className, 0x14,
                       igGraphPathList_vtableRead, 0, 0, igGraphPathList_dependencies);
}

META_GET_META_CALL(igGraphPathList)

}
#pragma pop
