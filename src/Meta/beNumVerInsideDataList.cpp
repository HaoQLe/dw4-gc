// beNumVerInsideDataList: Alchemy class registration (0x802C36F0..0x802C38C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNumVerInsideDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNumVerInsideDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DA4DC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNumVerInsideDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNumVerInsideDataList)
#pragma pop

void *beNumVerInsideDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DA4DC;
    object.__vtable = beNumVerInsideDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNumVerInsideDataList)

void beNumVerInsideDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beNumVerInsideDataList_meta, igObjectList_register,
                       fn_80024180, beNumVerInsideDataList_getMetaCall,
                       beNumVerInsideDataList_className, 0x14,
                       beNumVerInsideDataList_vtableRead, 0, 0, beNumVerInsideDataList_dependencies);
}

META_GET_META_CALL(beNumVerInsideDataList)

}
#pragma pop
