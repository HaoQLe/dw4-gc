// igTransformList: Alchemy class registration (0x801AC310..0x801AC470). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igTransformList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B9D3C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransformList)

void *igTransformList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B9D3C;
    object.__vtable = igTransformList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTransformList)

void igTransformList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTransformList_meta, igObjectList_register,
                       fn_80024180, igTransformList_getMetaCall,
                       igTransformList_className, 0x14,
                       igTransformList_vtableRead, 0, 0, igTransformList_dependencies);
}

META_GET_META_CALL(igTransformList)

}
#pragma pop
