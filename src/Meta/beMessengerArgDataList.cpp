// beMessengerArgDataList: Alchemy class registration (0x802CF3B0..0x802CF580). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMessengerArgDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beMessengerArgDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D8178[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beMessengerArgDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beMessengerArgDataList)
#pragma pop

void *beMessengerArgDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D8178;
    object.__vtable = beMessengerArgDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMessengerArgDataList)

void beMessengerArgDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMessengerArgDataList_meta, igObjectList_register,
                       fn_80024180, beMessengerArgDataList_getMetaCall,
                       beMessengerArgDataList_className, 0x14,
                       beMessengerArgDataList_vtableRead, 0, 0, beMessengerArgDataList_dependencies);
}

META_GET_META_CALL(beMessengerArgDataList)

}
#pragma pop
