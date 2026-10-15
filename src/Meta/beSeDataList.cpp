// beSeDataList: Alchemy class registration (0x802BB1B4..0x802BB384). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beSeDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beSeDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DB58C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beSeDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beSeDataList)
#pragma pop

void *beSeDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DB58C;
    object.__vtable = beSeDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beSeDataList)

void beSeDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beSeDataList_meta, igObjectList_register,
                       fn_80024180, beSeDataList_getMetaCall,
                       beSeDataList_className, 0x14,
                       beSeDataList_vtableRead, 0, 0, beSeDataList_dependencies);
}

META_GET_META_CALL(beSeDataList)

}
#pragma pop
