// beBaseInfoDataList: Alchemy class registration (0x802E3E78..0x802E4088). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beBaseInfoDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beBaseInfoDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D4230[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beBaseInfoDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beBaseInfoDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beBaseInfoDataList)
#pragma pop

void *beBaseInfoDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D4230;
    object.__vtable = beBaseInfoDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beBaseInfoDataList)

void beBaseInfoDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beBaseInfoDataList_meta, igObjectList_register,
                       fn_80024180, beBaseInfoDataList_getMetaCall,
                       beBaseInfoDataList_className, 0x14,
                       beBaseInfoDataList_vtableRead, 0, 0, beBaseInfoDataList_dependencies);
}

META_GET_META_CALL(beBaseInfoDataList)

}
#pragma pop
