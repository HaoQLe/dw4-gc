// igLightSetList: Alchemy class registration (0x802D2868..0x802D2A38). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLightSetList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_802B1AC8();
extern char igLightSetList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804D7768[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(igLightSetList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(igLightSetList)
#pragma pop

void *igLightSetList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804D7768;
    object.__vtable = igLightSetList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLightSetList)

void igLightSetList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &igLightSetList_meta, igObjectList_register,
                       fn_80024180, igLightSetList_getMetaCall,
                       igLightSetList_className, 0x14,
                       igLightSetList_vtableRead, 0, 0, igLightSetList_dependencies);
}

META_GET_META_CALL(igLightSetList)

}
#pragma pop
