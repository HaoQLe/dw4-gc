// igTextureTransformMovieProcessor: Alchemy class registration (0x801AD5B4..0x801AD7BC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureTransformMovieProcessor)
META_DECLARE(igShaderProcessor)

extern "C" {
void fn_801AA6DC();
void *fn_801AD7BC();
extern char igTextureTransformMovieProcessor_dependencies[12];
}

struct igTextureTransformMovieProcessorInstance : igObjectInstance {
    char unknown04[20];
    igObjectRefMember _currentTextureMatrix;
    igObjectRefMember _nextTextureMatrix;
    char unknown20[4];
    igObjectRefMember _blendFactor;
    char unknown28[48];
    inline ~igTextureTransformMovieProcessorInstance() { __vtable = igTextureTransformMovieProcessor_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureTransformMovieProcessor)

void *igTextureTransformMovieProcessor_vtableRead()
{
    igTextureTransformMovieProcessorInstance object;
    object.__vtable = igShaderProcessor_vtable;
    object.__vtable = igTextureTransformMovieProcessor_vtable;
    object._currentTextureMatrix._value = 0;
    object._nextTextureMatrix._value = 0;
    object._blendFactor._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureTransformMovieProcessor)

void igTextureTransformMovieProcessor_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTextureTransformMovieProcessor_meta, igShaderProcessor_register,
                       fn_801AD7BC, igTextureTransformMovieProcessor_getMetaCall,
                       igTextureTransformMovieProcessor_className, 0x50,
                       igTextureTransformMovieProcessor_vtableRead, igTextureTransformMovieProcessor_fieldInit, 0, igTextureTransformMovieProcessor_dependencies);
}

META_GET_META_CALL(igTextureTransformMovieProcessor)

}
#pragma pop
