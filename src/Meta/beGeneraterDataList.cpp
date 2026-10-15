// beGeneraterDataList: Alchemy class registration (0x802D72E4..0x802D74B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beGeneraterDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beGeneraterDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D6A7C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beGeneraterDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beGeneraterDataList)
#pragma pop

void *beGeneraterDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D6A7C;
    object.__vtable = beGeneraterDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beGeneraterDataList)

void beGeneraterDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterDataList_meta, igObjectList_register,
                       fn_80024180, beGeneraterDataList_getMetaCall,
                       beGeneraterDataList_className, 0x14,
                       beGeneraterDataList_vtableRead, 0, 0, beGeneraterDataList_dependencies);
}

META_GET_META_CALL(beGeneraterDataList)

}
#pragma pop
