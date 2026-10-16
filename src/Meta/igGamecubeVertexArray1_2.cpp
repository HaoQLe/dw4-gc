// igGamecubeVertexArray1_1: Alchemy class registration (0x800D78B0..0x800D7A2C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeVertexArray1_1)
META_DECLARE(igVertexArray1_1)

extern "C" {
void fn_800CE2F8();
void fn_800D7A34();
void *igGamecubeVertexArray1_1_parentMeta();
extern char lbl_804923A4[364];
extern char lbl_80492EA0[244];
}

struct Instance_LigGamecubeVertexArray1_1_0 : igObjectInstance {
};

struct Instance_804923A4 : Instance_LigGamecubeVertexArray1_1_0 {
    char unknown04[20];
    igObjectRefMember _memPool;
    inline ~Instance_804923A4() { __vtable = lbl_804923A4; }
};

struct igGamecubeVertexArray1_1Instance : Instance_804923A4 {
    int unknown1C;
    char unknown20[48];
    inline ~igGamecubeVertexArray1_1Instance() { __vtable = igGamecubeVertexArray1_1_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeVertexArray1_1)

void *igGamecubeVertexArray1_1_vtableRead()
{
    igGamecubeVertexArray1_1Instance object;
    object.__vtable = lbl_80492EA0;
    object.__vtable = lbl_804923A4;
    object._memPool._value = 0;
    object.unknown1C = 0;
    object.__vtable = igGamecubeVertexArray1_1_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeVertexArray1_1)

void igGamecubeVertexArray1_1_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubeVertexArray1_1_meta, igVertexArray1_1_register,
                       igGamecubeVertexArray1_1_parentMeta, igGamecubeVertexArray1_1_getMetaCall,
                       igGamecubeVertexArray1_1_className, 0x50,
                       igGamecubeVertexArray1_1_vtableRead, fn_800D7A34, 0, 0);
}

}
#pragma pop
