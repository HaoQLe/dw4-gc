// beMessengerDelayList: Alchemy class registration (0x802CEE98..0x802CF068). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMessengerDelayList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beMessengerDelayList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D8310[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beMessengerDelayList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beMessengerDelayList)
#pragma pop

void *beMessengerDelayList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D8310;
    object.__vtable = beMessengerDelayList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMessengerDelayList)

void beMessengerDelayList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMessengerDelayList_meta, igObjectList_register,
                       fn_80024180, beMessengerDelayList_getMetaCall,
                       beMessengerDelayList_className, 0x14,
                       beMessengerDelayList_vtableRead, 0, 0, beMessengerDelayList_dependencies);
}

META_GET_META_CALL(beMessengerDelayList)

}
#pragma pop
