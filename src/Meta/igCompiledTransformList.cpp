// igCompiledTransformList: Alchemy class registration (0x801C4340..0x801C44A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCompiledTransformList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igCompiledTransformList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B7060[];
}

struct Instance_801C437C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCompiledTransformList)

void *igCompiledTransformList_vtableRead()
{
    Instance_801C437C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B7060;
    object.__vtable = igCompiledTransformList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCompiledTransformList)

void igCompiledTransformList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igCompiledTransformList_meta, igObjectList_register,
                       fn_80024180, igCompiledTransformList_getMetaCall,
                       igCompiledTransformList_className, 0x14,
                       igCompiledTransformList_vtableRead, 0, 0, igCompiledTransformList_dependencies);
}

META_GET_META_CALL(igCompiledTransformList)

}
#pragma pop
