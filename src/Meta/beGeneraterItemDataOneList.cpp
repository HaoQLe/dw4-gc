// beGeneraterItemDataOneList: Alchemy class registration (0x802D822C..0x802D83FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beGeneraterItemDataOneList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beGeneraterItemDataOneList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D65A4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beGeneraterItemDataOneList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beGeneraterItemDataOneList)
#pragma pop

void *beGeneraterItemDataOneList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D65A4;
    object.__vtable = beGeneraterItemDataOneList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beGeneraterItemDataOneList)

void beGeneraterItemDataOneList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterItemDataOneList_meta, igObjectList_register,
                       fn_80024180, beGeneraterItemDataOneList_getMetaCall,
                       beGeneraterItemDataOneList_className, 0x14,
                       beGeneraterItemDataOneList_vtableRead, 0, 0, beGeneraterItemDataOneList_dependencies);
}

META_GET_META_CALL(beGeneraterItemDataOneList)

}
#pragma pop
