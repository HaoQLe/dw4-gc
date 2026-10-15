// beGeneraterItemDataList: Alchemy class registration (0x802D7DC0..0x802D7F90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beGeneraterItemDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beGeneraterItemDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D6744[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beGeneraterItemDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beGeneraterItemDataList)
#pragma pop

void *beGeneraterItemDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D6744;
    object.__vtable = beGeneraterItemDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beGeneraterItemDataList)

void beGeneraterItemDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterItemDataList_meta, igObjectList_register,
                       fn_80024180, beGeneraterItemDataList_getMetaCall,
                       beGeneraterItemDataList_className, 0x14,
                       beGeneraterItemDataList_vtableRead, 0, 0, beGeneraterItemDataList_dependencies);
}

META_GET_META_CALL(beGeneraterItemDataList)

}
#pragma pop
