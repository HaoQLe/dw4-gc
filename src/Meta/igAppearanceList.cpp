// igAppearanceList: Alchemy class registration (0x801C8DB0..0x801C8F10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAppearanceList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAppearanceList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B68E4[];
}

struct Instance_801C8DEC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAppearanceList)

void *igAppearanceList_vtableRead()
{
    Instance_801C8DEC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B68E4;
    object.__vtable = igAppearanceList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAppearanceList)

void igAppearanceList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAppearanceList_meta, igObjectList_register,
                       fn_80024180, igAppearanceList_getMetaCall,
                       igAppearanceList_className, 0x14,
                       igAppearanceList_vtableRead, 0, 0, igAppearanceList_dependencies);
}

META_GET_META_CALL(igAppearanceList)

}
#pragma pop
