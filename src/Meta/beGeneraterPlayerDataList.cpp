// beGeneraterPlayerDataList: Alchemy class registration (0x802D7948..0x802D7B18). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beGeneraterPlayerDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beGeneraterPlayerDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D68DC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beGeneraterPlayerDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beGeneraterPlayerDataList)
#pragma pop

void *beGeneraterPlayerDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D68DC;
    object.__vtable = beGeneraterPlayerDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beGeneraterPlayerDataList)

void beGeneraterPlayerDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterPlayerDataList_meta, igObjectList_register,
                       fn_80024180, beGeneraterPlayerDataList_getMetaCall,
                       beGeneraterPlayerDataList_className, 0x14,
                       beGeneraterPlayerDataList_vtableRead, 0, 0, beGeneraterPlayerDataList_dependencies);
}

META_GET_META_CALL(beGeneraterPlayerDataList)

}
#pragma pop
