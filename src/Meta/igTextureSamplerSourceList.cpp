// igTextureSamplerSourceList: Alchemy class registration (0x800D4404..0x800D4564). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureSamplerSourceList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igTextureSamplerSourceList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804934D4[];
}

struct Instance_800D4440_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureSamplerSourceList)

void *igTextureSamplerSourceList_vtableRead()
{
    Instance_800D4440_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804934D4;
    object.__vtable = igTextureSamplerSourceList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureSamplerSourceList)

void igTextureSamplerSourceList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igTextureSamplerSourceList_meta, igObjectList_register,
                       fn_80024180, igTextureSamplerSourceList_getMetaCall,
                       igTextureSamplerSourceList_className, 0x14,
                       igTextureSamplerSourceList_vtableRead, 0, 0, igTextureSamplerSourceList_dependencies);
}

META_GET_META_CALL(igTextureSamplerSourceList)

}
#pragma pop
