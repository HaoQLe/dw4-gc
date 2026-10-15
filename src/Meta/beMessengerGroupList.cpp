// beMessengerGroupList: Alchemy class registration (0x802CE92C..0x802CEAFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMessengerGroupList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beMessengerGroupList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D84B0[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beMessengerGroupList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beMessengerGroupList)
#pragma pop

void *beMessengerGroupList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D84B0;
    object.__vtable = beMessengerGroupList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMessengerGroupList)

void beMessengerGroupList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMessengerGroupList_meta, igObjectList_register,
                       fn_80024180, beMessengerGroupList_getMetaCall,
                       beMessengerGroupList_className, 0x14,
                       beMessengerGroupList_vtableRead, 0, 0, beMessengerGroupList_dependencies);
}

META_GET_META_CALL(beMessengerGroupList)

}
#pragma pop
