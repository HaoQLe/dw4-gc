// beLayerGroupList: Alchemy class registration (0x802D3570..0x802D3740). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLayerGroupList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beLayerGroupList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804D74A8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beLayerGroupList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beLayerGroupList)
#pragma pop

void *beLayerGroupList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D74A8;
    object.__vtable = beLayerGroupList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLayerGroupList)

void beLayerGroupList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLayerGroupList_meta, igObjectList_register,
                       fn_80024180, beLayerGroupList_getMetaCall,
                       beLayerGroupList_className, 0x14,
                       beLayerGroupList_vtableRead, 0, 0, beLayerGroupList_dependencies);
}

META_GET_META_CALL(beLayerGroupList)

}
#pragma pop
