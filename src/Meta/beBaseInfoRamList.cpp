// beBaseInfoRamList: Alchemy class registration (0x802E2F60..0x802E3130). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beBaseInfoRamList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beBaseInfoRamList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D4644[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beBaseInfoRamList)

META_GET_META(beBaseInfoRamList)

void *beBaseInfoRamList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D4644;
    object.__vtable = beBaseInfoRamList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beBaseInfoRamList)

void beBaseInfoRamList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beBaseInfoRamList_meta, igObjectList_register,
                       fn_80024180, beBaseInfoRamList_getMetaCall,
                       beBaseInfoRamList_className, 0x14,
                       beBaseInfoRamList_vtableRead, 0, 0, beBaseInfoRamList_dependencies);
}

META_GET_META_CALL(beBaseInfoRamList)

}
#pragma pop
