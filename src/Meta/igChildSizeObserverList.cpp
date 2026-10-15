// igChildSizeObserverList: Alchemy class registration (0x80114074..0x801141D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igChildSizeObserverList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igChildSizeObserverList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80496FF8[];
}

struct Instance_801140B0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igChildSizeObserverList)

void *igChildSizeObserverList_vtableRead()
{
    Instance_801140B0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80496FF8;
    object.__vtable = igChildSizeObserverList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igChildSizeObserverList)

void igChildSizeObserverList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igChildSizeObserverList_meta, igObjectList_register,
                       fn_80024180, igChildSizeObserverList_getMetaCall,
                       igChildSizeObserverList_className, 0x14,
                       igChildSizeObserverList_vtableRead, 0, 0, igChildSizeObserverList_dependencies);
}

META_GET_META_CALL(igChildSizeObserverList)

}
#pragma pop
