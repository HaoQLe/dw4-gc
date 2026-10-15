// igStatisticsItemList: Alchemy class registration (0x8040337C..0x8040354C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStatisticsItemList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80402E28();
extern char igStatisticsItemList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804F16E4[];
}

struct Instance_8040341C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igStatisticsItemList)

META_GET_META(igStatisticsItemList)

void *igStatisticsItemList_vtableRead()
{
    Instance_8040341C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804F16E4;
    object.__vtable = igStatisticsItemList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStatisticsItemList)

void igStatisticsItemList_register()
{
    fn_80402E28();
    meta_registerClass(0, &igStatisticsItemList_meta, igObjectList_register,
                       fn_80024180, igStatisticsItemList_getMetaCall,
                       igStatisticsItemList_className, 0x14,
                       igStatisticsItemList_vtableRead, 0, 0, igStatisticsItemList_dependencies);
}

META_GET_META_CALL(igStatisticsItemList)

}
#pragma pop
