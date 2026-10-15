// igOnOffValueObserverList: Alchemy class registration (0x8010E438..0x8010E598). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOnOffValueObserverList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8010CBD4();
extern char igOnOffValueObserverList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80497A5C[];
}

struct Instance_8010E474_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOnOffValueObserverList)

void *igOnOffValueObserverList_vtableRead()
{
    Instance_8010E474_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80497A5C;
    object.__vtable = igOnOffValueObserverList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igOnOffValueObserverList)

void igOnOffValueObserverList_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igOnOffValueObserverList_meta, igObjectList_register,
                       fn_80024180, igOnOffValueObserverList_getMetaCall,
                       igOnOffValueObserverList_className, 0x14,
                       igOnOffValueObserverList_vtableRead, 0, 0, igOnOffValueObserverList_dependencies);
}

META_GET_META_CALL(igOnOffValueObserverList)

}
#pragma pop
