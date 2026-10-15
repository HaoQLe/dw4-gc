// beLoadIntf2ComMdlDataList: Alchemy class registration (0x803414DC..0x803416AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLoadIntf2ComMdlDataList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
extern char beLoadIntf2ComMdlDataList_dependencies[8];
void *fn_80024180();
void fn_803250AC();
extern char lbl_80476E0C[];
extern char lbl_804E4D24[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beLoadIntf2ComMdlDataList)

META_GET_META(beLoadIntf2ComMdlDataList)

void *beLoadIntf2ComMdlDataList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804E4D24;
    object.__vtable = beLoadIntf2ComMdlDataList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLoadIntf2ComMdlDataList)

void beLoadIntf2ComMdlDataList_register()
{
    fn_803250AC();
    meta_registerClass(0, &beLoadIntf2ComMdlDataList_meta, igObjectList_register,
                       fn_80024180, beLoadIntf2ComMdlDataList_getMetaCall,
                       beLoadIntf2ComMdlDataList_className, 0x14,
                       beLoadIntf2ComMdlDataList_vtableRead, 0, 0, beLoadIntf2ComMdlDataList_dependencies);
}

META_GET_META_CALL(beLoadIntf2ComMdlDataList)

}
#pragma pop
