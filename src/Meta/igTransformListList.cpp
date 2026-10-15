// igTransformListList: Alchemy class registration (0x801AC174..0x801AC2D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igTransformListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B9E04[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransformListList)

void *igTransformListList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B9E04;
    object.__vtable = igTransformListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTransformListList)

void igTransformListList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTransformListList_meta, igObjectList_register,
                       fn_80024180, igTransformListList_getMetaCall,
                       igTransformListList_className, 0x14,
                       igTransformListList_vtableRead, 0, 0, igTransformListList_dependencies);
}

META_GET_META_CALL(igTransformListList)

}
#pragma pop
