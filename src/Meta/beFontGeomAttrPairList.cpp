// beFontGeomAttrPairList: Alchemy class registration (0x802D9FF8..0x802DA1C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beFontGeomAttrPairList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beFontGeomAttrPairList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D5FCC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beFontGeomAttrPairList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beFontGeomAttrPairList)
#pragma pop

void *beFontGeomAttrPairList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D5FCC;
    object.__vtable = beFontGeomAttrPairList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beFontGeomAttrPairList)

void beFontGeomAttrPairList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFontGeomAttrPairList_meta, igObjectList_register,
                       fn_80024180, beFontGeomAttrPairList_getMetaCall,
                       beFontGeomAttrPairList_className, 0x14,
                       beFontGeomAttrPairList_vtableRead, 0, 0, beFontGeomAttrPairList_dependencies);
}

META_GET_META_CALL(beFontGeomAttrPairList)

}
#pragma pop
