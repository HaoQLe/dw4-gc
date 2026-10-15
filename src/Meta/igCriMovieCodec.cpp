// igCriMovieCodec: Alchemy class registration (0x802ABCE8..0x802ABF38). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCriMovieCodec)
META_DECLARE(igMovieCodec)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802AA788();
extern char igCriMovieCodec_dependencies[12];
void *igCriMovieCodec_parentMeta();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igMovieCodecInstance : igNamedObjectInstance {
    inline ~igMovieCodecInstance() { __vtable = igMovieCodec_vtable; }
};

struct igCriMovieCodecInstance : igMovieCodecInstance {
    char unknown0C[4];
    igObjectRefMember _visualContext;
    igObjectRefMember _audioContext;
    inline ~igCriMovieCodecInstance() { __vtable = igCriMovieCodec_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCriMovieCodec)

#pragma push
#pragma optimize_for_size off
void *igCriMovieCodec_vtableRead()
{
    igCriMovieCodecInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igMovieCodec_vtable;
    object.__vtable = igCriMovieCodec_vtable;
    object._visualContext._value = 0;
    object._audioContext._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(igCriMovieCodec)

void igCriMovieCodec_register()
{
    fn_802AA788();
    meta_registerClass(0, &igCriMovieCodec_meta, igMovieCodec_register,
                       igCriMovieCodec_parentMeta, igCriMovieCodec_getMetaCall,
                       igCriMovieCodec_className, 0x18,
                       igCriMovieCodec_vtableRead, igCriMovieCodec_fieldInit, 0, igCriMovieCodec_dependencies);
}

META_GET_META_CALL(igCriMovieCodec)

}
#pragma pop
