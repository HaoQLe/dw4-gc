// igOnOffColorChanger: Alchemy class registration (0x801138D0..0x80113980). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igOnOffColorChanger)
META_DECLARE(igBasicColorChanger)
META_DECLARE(igColorChanger)

extern "C" {
void fn_800A33B8(void *array, void (*construct)(void *), void (*destroy)(void *), unsigned int size, unsigned int count);
void fn_80113980(void *);
}

struct Instance_LigOnOffColorChanger_0 : igObjectInstance {
    inline Instance_LigOnOffColorChanger_0()
    {
        __vtable = igColorChanger_vtable;
    }
};

struct Instance_LigOnOffColorChanger_1 : Instance_LigOnOffColorChanger_0 {
    char unknown04[4];
    char unknown08[80];
    inline Instance_LigOnOffColorChanger_1()
    {
        __vtable = igBasicColorChanger_vtable;
        fn_800A33B8(unknown08, fn_80113980, 0, 16, 4);   // constructs each element
    }
};

struct Instance_LigOnOffColorChanger_2 : Instance_LigOnOffColorChanger_1 {
    inline Instance_LigOnOffColorChanger_2()
    {
        __vtable = igOnOffColorChanger_vtable;
    }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igOnOffColorChanger)

void *igOnOffColorChanger_vtableRead()
{
    Instance_LigOnOffColorChanger_2 object;
    return meta_vtableOf(&object);
}

}
#pragma pop
