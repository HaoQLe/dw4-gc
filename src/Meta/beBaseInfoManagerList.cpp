// beBaseInfoManagerList: Alchemy class registration (0x802E36C4..0x802E3840). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beBaseInfoManagerList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beBaseInfoManagerList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D4480[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beBaseInfoManagerList)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beBaseInfoManagerList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D4480;
    object.__vtable = beBaseInfoManagerList_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beBaseInfoManagerList)

void beBaseInfoManagerList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beBaseInfoManagerList_meta, igObjectList_register,
                       fn_80024180, beBaseInfoManagerList_getMetaCall,
                       beBaseInfoManagerList_className, 0x14,
                       beBaseInfoManagerList_vtableRead, 0, 0, beBaseInfoManagerList_dependencies);
}

META_GET_META_CALL(beBaseInfoManagerList)

}
#pragma pop
