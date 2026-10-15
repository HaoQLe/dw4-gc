// igEventProducerList: Alchemy class registration (0x800CB2E8..0x800CB448). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEventProducerList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CAEE0();
extern char igEventProducerList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_80480C1C[];
}

struct Instance_800CB324_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEventProducerList)

void *igEventProducerList_vtableRead()
{
    Instance_800CB324_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80480C1C;
    object.__vtable = igEventProducerList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEventProducerList)

void igEventProducerList_register()
{
    fn_800CAEE0();
    meta_registerClass(0, &igEventProducerList_meta, igObjectList_register,
                       fn_80024180, igEventProducerList_getMetaCall,
                       igEventProducerList_className, 0x14,
                       igEventProducerList_vtableRead, 0, 0, igEventProducerList_dependencies);
}

META_GET_META_CALL(igEventProducerList)

}
#pragma pop
