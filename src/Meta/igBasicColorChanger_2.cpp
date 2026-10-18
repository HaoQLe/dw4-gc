// igBasicColorChanger: Alchemy class registration (0x80113A78..0x80113BD4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBasicColorChanger)
META_DECLARE(igColorChanger)

extern "C" {
void fn_800A33B8(void *array, void (*construct)(void *), void (*destroy)(void *), unsigned int size, unsigned int count);
void fn_8010CBD4();
void fn_80113980(void *);
void *igBasicColorChanger_parentMeta();
}

struct Instance_LigBasicColorChanger_0 : igObjectInstance {
    inline Instance_LigBasicColorChanger_0()
    {
        __vtable = igColorChanger_vtable;
    }
};

struct Instance_LigBasicColorChanger_1 : Instance_LigBasicColorChanger_0 {
    char unknown04[4];
    char unknown08[80];
    inline Instance_LigBasicColorChanger_1()
    {
        __vtable = igBasicColorChanger_vtable;
        fn_800A33B8(unknown08, fn_80113980, 0, 16, 4);   // constructs each element
    }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBasicColorChanger)

void *igBasicColorChanger_vtableRead()
{
    Instance_LigBasicColorChanger_1 object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBasicColorChanger)

void igBasicColorChanger_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igBasicColorChanger_meta, igColorChanger_register,
                       igBasicColorChanger_parentMeta, igBasicColorChanger_getMetaCall,
                       igBasicColorChanger_className, 0x58,
                       igBasicColorChanger_vtableRead, igBasicColorChanger_fieldInit, 0, 0);
}

META_GET_META_CALL(igBasicColorChanger)

}
#pragma pop
