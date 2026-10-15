// igGamecubeImageConvert: Alchemy class registration (0x800D86F0..0x800D881C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeImageConvert)
META_DECLARE(igImageConvert)

extern "C" {
void fn_800CE2F8();
void fn_800D8824();
void *igGamecubeImageConvert_parentMeta();
extern char lbl_80492C48[];
extern char lbl_804930AC[];
}

struct Instance_800D872C_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeImageConvert)

void *igGamecubeImageConvert_vtableRead()
{
    Instance_800D872C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804930AC;
    object.__vtable = lbl_80492C48;
    object.__vtable = igGamecubeImageConvert_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeImageConvert)

void igGamecubeImageConvert_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubeImageConvert_meta, igImageConvert_register,
                       igGamecubeImageConvert_parentMeta, igGamecubeImageConvert_getMetaCall,
                       igGamecubeImageConvert_className, 0x8,
                       igGamecubeImageConvert_vtableRead, fn_800D8824, 0, 0);
}

}
#pragma pop
