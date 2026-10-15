// igIntersectPathList: Alchemy class registration (0x801B6E14..0x801B6F74). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntersectPathList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igIntersectPathList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B84F8[];
}

struct Instance_801B6E50_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIntersectPathList)

void *igIntersectPathList_vtableRead()
{
    Instance_801B6E50_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B84F8;
    object.__vtable = igIntersectPathList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntersectPathList)

void igIntersectPathList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igIntersectPathList_meta, igObjectList_register,
                       fn_80024180, igIntersectPathList_getMetaCall,
                       igIntersectPathList_className, 0x14,
                       igIntersectPathList_vtableRead, 0, 0, igIntersectPathList_dependencies);
}

META_GET_META_CALL(igIntersectPathList)

}
#pragma pop
