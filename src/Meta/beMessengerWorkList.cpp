// beMessengerWorkList: Alchemy class registration (0x802CE3D4..0x802CE5A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMessengerWorkList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beMessengerWorkList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D8648[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beMessengerWorkList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beMessengerWorkList)
#pragma pop

void *beMessengerWorkList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D8648;
    object.__vtable = beMessengerWorkList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMessengerWorkList)

void beMessengerWorkList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMessengerWorkList_meta, igObjectList_register,
                       fn_80024180, beMessengerWorkList_getMetaCall,
                       beMessengerWorkList_className, 0x14,
                       beMessengerWorkList_vtableRead, 0, 0, beMessengerWorkList_dependencies);
}

META_GET_META_CALL(beMessengerWorkList)

}
#pragma pop
