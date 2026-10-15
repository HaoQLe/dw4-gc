// igGamecubeScissorExt: Alchemy class registration (0x800D7B5C..0x800D7D2C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeScissorExt)
META_DECLARE(igScissorExt)

extern "C" {
void fn_800CE2F8();
void fn_800D7D34();
extern char igGamecubeScissorExt_dependencies[8];
void *igGamecubeScissorExt_parentMeta();
extern char lbl_80473000[];
extern char lbl_80492D58[];
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

struct Instance_80492D58 : Instance_80493EEC {
    inline ~Instance_80492D58() { __vtable = lbl_80492D58; }
};

struct igGamecubeScissorExtInstance : Instance_80492D58 {
    char unknown14[28];
    inline ~igGamecubeScissorExtInstance() { __vtable = igGamecubeScissorExt_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeScissorExt)

void *igGamecubeScissorExt_vtableRead()
{
    igGamecubeScissorExtInstance object;
    object.__vtable = lbl_80473000;
    object._pExtList._value = 0;
    object._pExtInstances._value = 0;
    object.__vtable = lbl_80493EEC;
    object.__vtable = lbl_80492D58;
    object.__vtable = igGamecubeScissorExt_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeScissorExt)

void igGamecubeScissorExt_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubeScissorExt_meta, igScissorExt_register,
                       igGamecubeScissorExt_parentMeta, igGamecubeScissorExt_getMetaCall,
                       igGamecubeScissorExt_className, 0x2C,
                       igGamecubeScissorExt_vtableRead, fn_800D7D34, 0, igGamecubeScissorExt_dependencies);
}

}
#pragma pop
