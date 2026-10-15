// igRegistryValueList: Alchemy class registration (0x80026EE0..0x80027040). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRegistryValueList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igRegistryValueList_dependencies[8];
extern char lbl_804767E4[];
extern char lbl_80476E0C[];
}

struct Instance_80026F1C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRegistryValueList)

void *igRegistryValueList_vtableRead()
{
    Instance_80026F1C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804767E4;
    object.__vtable = igRegistryValueList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRegistryValueList)

void igRegistryValueList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igRegistryValueList_meta, igObjectList_register,
                       fn_80024180, igRegistryValueList_getMetaCall,
                       igRegistryValueList_className, 0x14,
                       igRegistryValueList_vtableRead, 0, 0, igRegistryValueList_dependencies);
}

META_GET_META_CALL(igRegistryValueList)

}
#pragma pop
