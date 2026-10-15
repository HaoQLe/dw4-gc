// igGamecubeWindow: Alchemy class registration (0x800CBC9C..0x800CBE54). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeWindow)
META_DECLARE(igWindow)

extern "C" {
void fn_800CAEE0();
extern char igGamecubeWindow_dependencies[8];
void *igGamecubeWindow_parentMeta();
extern char lbl_80480690[];
extern char lbl_80480E60[];
}

struct igGamecubeWindowInstance : igObjectInstance {
    char unknown04[20];
    igObjectRefMember _vc;
    char unknown1C[8];
    igStringMember _winName;
    char unknown28[8];
    inline ~igGamecubeWindowInstance() { __vtable = igGamecubeWindow_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeWindow)

void *igGamecubeWindow_vtableRead()
{
    igGamecubeWindowInstance object;
    object.__vtable = lbl_80480E60;
    object.__vtable = lbl_80480690;
    object.__vtable = igGamecubeWindow_vtable;
    object._vc._value = 0;
    object._winName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeWindow)

void igGamecubeWindow_register()
{
    fn_800CAEE0();
    meta_registerClass(0, &igGamecubeWindow_meta, igWindow_register,
                       igGamecubeWindow_parentMeta, igGamecubeWindow_getMetaCall,
                       igGamecubeWindow_className, 0x30,
                       igGamecubeWindow_vtableRead, igGamecubeWindow_fieldInit, 0, igGamecubeWindow_dependencies);
}

}
#pragma pop
