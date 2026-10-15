// beFontImageList: Alchemy class registration (0x802D9468..0x802D9638). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beFontImageList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beFontImageList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D61CC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beFontImageList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beFontImageList)
#pragma pop

void *beFontImageList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D61CC;
    object.__vtable = beFontImageList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beFontImageList)

void beFontImageList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFontImageList_meta, igObjectList_register,
                       fn_80024180, beFontImageList_getMetaCall,
                       beFontImageList_className, 0x14,
                       beFontImageList_vtableRead, 0, 0, beFontImageList_dependencies);
}

META_GET_META_CALL(beFontImageList)

}
#pragma pop
