// igGamecubeMultiTextureExt: Alchemy class registration (0x800D8254..0x800D8424). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeMultiTextureExt)
META_DECLARE(igMultiTextureExt)

extern "C" {
void fn_800CE2F8();
void fn_800D842C();
extern char igGamecubeMultiTextureExt_dependencies[8];
void *igGamecubeMultiTextureExt_parentMeta();
extern char lbl_80473000[];
extern char lbl_80492CD4[];
extern char lbl_80493EEC[];
}

struct Instance_80473000 : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _pExtList;
    char unknown0C[4];
    igObjectRefMember _pExtInstances;
    inline ~Instance_80473000() { __vtable = lbl_80473000; }
};

struct Instance_80493EEC : Instance_80473000 {
    inline ~Instance_80493EEC() { __vtable = lbl_80493EEC; }
};

struct Instance_80492CD4 : Instance_80493EEC {
    inline ~Instance_80492CD4() { __vtable = lbl_80492CD4; }
};

struct igGamecubeMultiTextureExtInstance : Instance_80492CD4 {
    char unknown14[140];
    inline ~igGamecubeMultiTextureExtInstance() { __vtable = igGamecubeMultiTextureExt_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeMultiTextureExt)

void *igGamecubeMultiTextureExt_vtableRead()
{
    igGamecubeMultiTextureExtInstance object;
    object.__vtable = lbl_80473000;
    object._pExtList._value = 0;
    object._pExtInstances._value = 0;
    object.__vtable = lbl_80493EEC;
    object.__vtable = lbl_80492CD4;
    object.__vtable = igGamecubeMultiTextureExt_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeMultiTextureExt)

void igGamecubeMultiTextureExt_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubeMultiTextureExt_meta, igMultiTextureExt_register,
                       igGamecubeMultiTextureExt_parentMeta, igGamecubeMultiTextureExt_getMetaCall,
                       igGamecubeMultiTextureExt_className, 0x98,
                       igGamecubeMultiTextureExt_vtableRead, fn_800D842C, 0, igGamecubeMultiTextureExt_dependencies);
}

}
#pragma pop
