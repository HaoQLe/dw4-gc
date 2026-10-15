// beNumVerDataList: Alchemy class registration (0x802C32C8..0x802C3498). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNumVerDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beNumVerDataList_dependencies[8];
void *fn_80024180();
void fn_802B1AC8();
extern char lbl_80476E0C[];
extern char lbl_804DA674[];
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beNumVerDataList)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beNumVerDataList)
#pragma pop

void *beNumVerDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804DA674;
    object.__vtable = beNumVerDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNumVerDataList)

void beNumVerDataList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beNumVerDataList_meta, igObjectList_register,
                       fn_80024180, beNumVerDataList_getMetaCall,
                       beNumVerDataList_className, 0x14,
                       beNumVerDataList_vtableRead, 0, 0, beNumVerDataList_dependencies);
}

META_GET_META_CALL(beNumVerDataList)

}
#pragma pop
