// igPluginRepositoryList: Alchemy class registration (0x800280B4..0x80028214). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPluginRepositoryList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igPluginRepositoryList_dependencies[8];
extern char lbl_804765CC[];
extern char lbl_80476E0C[];
}

struct Instance_800280F0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPluginRepositoryList)

void *igPluginRepositoryList_vtableRead()
{
    Instance_800280F0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804765CC;
    object.__vtable = igPluginRepositoryList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPluginRepositoryList)

void igPluginRepositoryList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igPluginRepositoryList_meta, igObjectList_register,
                       fn_80024180, igPluginRepositoryList_getMetaCall,
                       igPluginRepositoryList_className, 0x14,
                       igPluginRepositoryList_vtableRead, 0, 0, igPluginRepositoryList_dependencies);
}

META_GET_META_CALL(igPluginRepositoryList)

}
#pragma pop
