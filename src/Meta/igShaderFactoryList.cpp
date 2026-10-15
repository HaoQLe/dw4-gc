// igShaderFactoryList: Alchemy class registration (0x801B0E90..0x801B0FF0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igShaderFactoryList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igShaderFactoryList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B90FC[];
}

struct Instance_801B0ECC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igShaderFactoryList)

void *igShaderFactoryList_vtableRead()
{
    Instance_801B0ECC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B90FC;
    object.__vtable = igShaderFactoryList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igShaderFactoryList)

void igShaderFactoryList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igShaderFactoryList_meta, igObjectList_register,
                       fn_80024180, igShaderFactoryList_getMetaCall,
                       igShaderFactoryList_className, 0x14,
                       igShaderFactoryList_vtableRead, 0, 0, igShaderFactoryList_dependencies);
}

META_GET_META_CALL(igShaderFactoryList)

}
#pragma pop
