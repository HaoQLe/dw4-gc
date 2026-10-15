// igMovieCodec: Alchemy class registration (0x802ABAF8..0x802ABCE8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMovieCodec)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_802AA788();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igMovieCodecInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~igMovieCodecInstance() { __vtable = igMovieCodec_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igMovieCodec)

META_GET_META(igMovieCodec)

void *igMovieCodec_vtableRead()
{
    igMovieCodecInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igMovieCodec_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMovieCodec)

void igMovieCodec_register()
{
    fn_802AA788();
    meta_registerClass(0, &igMovieCodec_meta, igNamedObject_register,
                       fn_80023CF4, igMovieCodec_getMetaCall,
                       igMovieCodec_className, 0xC,
                       igMovieCodec_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igMovieCodec)

}
#pragma pop
