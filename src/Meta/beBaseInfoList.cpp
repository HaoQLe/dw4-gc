// beBaseInfoList: Alchemy class registration (0x802E3A88..0x802E3C58). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beBaseInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beBaseInfoList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D4358[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beBaseInfoList)

META_GET_META(beBaseInfoList)

#pragma push
#pragma optimize_for_size on
void *beBaseInfoList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D4358;
    object.__vtable = beBaseInfoList_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beBaseInfoList)

void beBaseInfoList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beBaseInfoList_meta, igObjectList_register,
                       fn_80024180, beBaseInfoList_getMetaCall,
                       beBaseInfoList_className, 0x14,
                       beBaseInfoList_vtableRead, 0, 0, beBaseInfoList_dependencies);
}

META_GET_META_CALL(beBaseInfoList)

}
#pragma pop
