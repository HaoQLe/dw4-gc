// igPointSpriteExt: Alchemy class registration (0x800D0994..0x800D0BE4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPointSpriteExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_800CE2F8();
void *fn_800D031C();
void fn_801285A0(void *);
extern char igPointSpriteExt_dependencies[12];
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
    char unknown128[96];
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

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPointSpriteExt)

void *igPointSpriteExt_vtableRead()
{
    igPointSpriteExtInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPointSpriteExt)

void igPointSpriteExt_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igPointSpriteExt_meta, igContextExt_register,
                       fn_800D031C, igPointSpriteExt_getMetaCall,
                       igPointSpriteExt_className, 0x188,
                       igPointSpriteExt_vtableRead, igPointSpriteExt_fieldInit, 0, igPointSpriteExt_dependencies);
}

META_GET_META_CALL(igPointSpriteExt)

}
#pragma pop
