// beWaterMoveDataList: Alchemy class registration (0x802B47E0..0x802B49B0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beWaterMoveDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beWaterMoveDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DC614[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beWaterMoveDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beWaterMoveDataList)
#pragma pop

void *beWaterMoveDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DC614;
    object.__vtable = beWaterMoveDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beWaterMoveDataList)

void beWaterMoveDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beWaterMoveDataList_meta, igObjectList_register,
                       fn_80024180, beWaterMoveDataList_getMetaCall,
                       beWaterMoveDataList_className, 0x14,
                       beWaterMoveDataList_vtableRead, 0, 0, beWaterMoveDataList_dependencies);
}

META_GET_META_CALL(beWaterMoveDataList)

}
#pragma pop
