// igMoviePlugin: Alchemy class registration (0x802AD6F8..0x802AD8A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMoviePlugin)
META_DECLARE(igInsightPlugin)

extern "C" {
void fn_802AA788();
void *fn_802AD8A0();
extern char igMoviePlugin_dependencies[8];
extern char lbl_804CDE20[];
}

struct igMoviePluginInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _movieManager;
    char unknown0C[4];
    inline ~igMoviePluginInstance() { __vtable = igMoviePlugin_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(igMoviePlugin)
#pragma pop

void *igMoviePlugin_vtableRead()
{
    igMoviePluginInstance object;
    object.__vtable = lbl_804CDE20;
    object.__vtable = igMoviePlugin_vtable;
    object._movieManager._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMoviePlugin)

void igMoviePlugin_register()
{
    fn_802AA788();
    meta_registerClass(0, &igMoviePlugin_meta, igInsightPlugin_register,
                       fn_802AD8A0, igMoviePlugin_getMetaCall,
                       igMoviePlugin_className, 0xC,
                       igMoviePlugin_vtableRead, igMoviePlugin_fieldInit, 0, igMoviePlugin_dependencies);
}

META_GET_META_CALL(igMoviePlugin)

}
#pragma pop
