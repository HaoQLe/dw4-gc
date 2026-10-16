// igGamecubePointSpriteExt: Alchemy class registration (0x800D7DF0..0x800D80E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubePointSpriteExt)
META_DECLARE(igPointSpriteExt)

extern "C" {
void fn_800CE2F8();
void fn_800D80E8();
void fn_801285A0(void *);
extern char igGamecubePointSpriteExt_dependencies[20];
void *igGamecubePointSpriteExt_parentMeta();
extern char lbl_80473000[112];
extern char lbl_80493EEC[120];
}

struct Instance_80473000 : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _pExtList;
    char unknown0C[4];
    igObjectRefMember _pExtInstances;
    inline Instance_80473000()
    {
        __vtable = lbl_80473000;
        _pExtList._value = 0;
        _pExtInstances._value = 0;
    }
    inline ~Instance_80473000() { __vtable = lbl_80473000; }
};

struct Instance_80493EEC : Instance_80473000 {
    inline Instance_80493EEC()
    {
        __vtable = lbl_80493EEC;
    }
    inline ~Instance_80493EEC() { __vtable = lbl_80493EEC; }
};

struct igPointSpriteExtInstance : Instance_80493EEC {
    char unknown14[4];
    igObjectRefMember _vertexArray;
    char unknown1C[12];
    char unknown28[64];
    char unknown68[64];
    char unknownA8[64];
    char unknownE8[64];
    char unknown128[100];
    inline igPointSpriteExtInstance()
    {
        __vtable = igPointSpriteExt_vtable;
        _vertexArray._value = 0;
        fn_801285A0(&unknown28);
        fn_801285A0(&unknown68);
        fn_801285A0(&unknownA8);
        fn_801285A0(&unknownE8);
        fn_801285A0(&unknown128);
    }
    inline ~igPointSpriteExtInstance() { __vtable = igPointSpriteExt_vtable; }
};

struct igGamecubePointSpriteExtInstance : igPointSpriteExtInstance {
    igObjectRefMember unknown18C;
    igObjectRefMember unknown190;
    igObjectRefMember unknown194;
    char unknown198[24];
    char unknown1B0[76];
    inline igGamecubePointSpriteExtInstance()
    {
        __vtable = igGamecubePointSpriteExt_vtable;
        unknown18C._value = 0;
        unknown190._value = 0;
        unknown194._value = 0;
        fn_801285A0(&unknown1B0);
    }
    inline ~igGamecubePointSpriteExtInstance() { __vtable = igGamecubePointSpriteExt_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubePointSpriteExt)

void *igGamecubePointSpriteExt_vtableRead()
{
    igGamecubePointSpriteExtInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubePointSpriteExt)

void igGamecubePointSpriteExt_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubePointSpriteExt_meta, igPointSpriteExt_register,
                       igGamecubePointSpriteExt_parentMeta, igGamecubePointSpriteExt_getMetaCall,
                       igGamecubePointSpriteExt_className, 0x1FC,
                       igGamecubePointSpriteExt_vtableRead, fn_800D80E8, 0, igGamecubePointSpriteExt_dependencies);
}

}
#pragma pop
