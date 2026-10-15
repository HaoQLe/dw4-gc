// igInsightPluginList: Alchemy class registration (0x80285BD0..0x80285DA0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInsightPluginList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_80284294();
extern char igInsightPluginList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CB604[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igInsightPluginList)

META_GET_META(igInsightPluginList)

void *igInsightPluginList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CB604;
    object.__vtable = igInsightPluginList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInsightPluginList)

void igInsightPluginList_register()
{
    fn_80284294();
    meta_registerClass(0, &igInsightPluginList_meta, igObjectList_register,
                       fn_80024180, igInsightPluginList_getMetaCall,
                       igInsightPluginList_className, 0x14,
                       igInsightPluginList_vtableRead, 0, 0, igInsightPluginList_dependencies);
}

META_GET_META_CALL(igInsightPluginList)

}
#pragma pop
