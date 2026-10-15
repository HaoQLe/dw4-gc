// igGamecubeAudioContext: Alchemy class registration (0x800C714C..0x800C7354). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeAudioContext)
META_DECLARE(igAudioContext)

extern "C" {
void fn_800C6F28();
extern char igGamecubeAudioContext_dependencies[16];
void *igGamecubeAudioContext_parentMeta();
extern char lbl_8047EA3C[];
}

struct igGamecubeAudioContextInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _window;
    igObjectRefMember _sources;
    igObjectRefMember _aramMallocs;
    char unknown18[16];
    inline ~igGamecubeAudioContextInstance() { __vtable = igGamecubeAudioContext_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META_CALL(igGamecubeAudioContext)

META_GET_META(igGamecubeAudioContext)

void *igGamecubeAudioContext_vtableRead()
{
    igGamecubeAudioContextInstance object;
    object.__vtable = lbl_8047EA3C;
    object.__vtable = igGamecubeAudioContext_vtable;
    object._window._value = 0;
    object._sources._value = 0;
    object._aramMallocs._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeAudioContext)

void igGamecubeAudioContext_register()
{
    fn_800C6F28();
    meta_registerClass(0, &igGamecubeAudioContext_meta, igAudioContext_register,
                       igGamecubeAudioContext_parentMeta, igGamecubeAudioContext_getMetaCall,
                       igGamecubeAudioContext_className, 0x28,
                       igGamecubeAudioContext_vtableRead, igGamecubeAudioContext_fieldInit, 0, igGamecubeAudioContext_dependencies);
}

}
#pragma pop
