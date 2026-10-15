// igDefaultAspectElementList: Alchemy class registration (0x80113408..0x80113568). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDefaultAspectElementList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igDefaultAspectElementList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80497178[];
}

struct Instance_80113444_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDefaultAspectElementList)

void *igDefaultAspectElementList_vtableRead()
{
    Instance_80113444_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80497178;
    object.__vtable = igDefaultAspectElementList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDefaultAspectElementList)

void igDefaultAspectElementList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igDefaultAspectElementList_meta, igObjectList_register,
                       fn_80024180, igDefaultAspectElementList_getMetaCall,
                       igDefaultAspectElementList_className, 0x14,
                       igDefaultAspectElementList_vtableRead, 0, 0, igDefaultAspectElementList_dependencies);
}

META_GET_META_CALL(igDefaultAspectElementList)

}
#pragma pop
