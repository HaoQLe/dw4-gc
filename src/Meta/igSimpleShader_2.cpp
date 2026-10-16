// igSimpleShader: Alchemy class registration (0x801B040C..0x801B04F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSimpleShader)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801B04F0(void *, int);
extern char lbl_804B3B90[176];
}

struct Instance_LigSimpleShader_0 : igObjectInstance {
    char unknown04[4];
    int unknown08;
    inline Instance_LigSimpleShader_0()
    {
        __vtable = igNamedObject_vtable;
        unknown08 = 0;
    }
};

struct Instance_LigSimpleShader_1 : Instance_LigSimpleShader_0 {
    int unknown0C;
    int unknown10;
    inline Instance_LigSimpleShader_1()
    {
        __vtable = igNode_vtable;
        unknown0C = 0;
        unknown10 = 0;
    }
};

struct Instance_LigSimpleShader_2 : Instance_LigSimpleShader_1 {
    char unknown14[8];
    int unknown1C;
    inline Instance_LigSimpleShader_2()
    {
        __vtable = igGroup_vtable;
        unknown1C = 0;
    }
};

struct Instance_LigSimpleShader_3 : Instance_LigSimpleShader_2 {
    inline Instance_LigSimpleShader_3()
    {
        __vtable = lbl_804B3B90;
    }
};

struct Instance_LigSimpleShader_4 : Instance_LigSimpleShader_3 {
    char unknown20[4];
    int unknown24;
    int unknown28;
    int unknown2C;
    int unknown30;
    inline Instance_LigSimpleShader_4()
    {
        __vtable = igSimpleShader_vtable;
        unknown24 = 0;
        unknown28 = 0;
        unknown2C = 0;
        unknown30 = 0;
    }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSimpleShader)

void *igSimpleShader_vtableRead()
{
    Instance_LigSimpleShader_4 object;
    void *result = meta_vtableOf(&object);
    fn_801B04F0(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
