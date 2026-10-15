// ParticleInfo: Alchemy class registration (0x802E85F0..0x802E86B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(ParticleInfo)
META_DECLARE(igSceneInfo)

extern "C" {
extern char ParticleInfo_dependencies[12];
void *ParticleInfo_parentMeta();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(ParticleInfo)

void ParticleInfo_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &ParticleInfo_meta, igSceneInfo_register,
                       ParticleInfo_parentMeta, ParticleInfo_getMetaCall,
                       ParticleInfo_className, 0x400,
                       ParticleInfo_vtableRead, ParticleInfo_fieldInit, 0, ParticleInfo_dependencies);
}

META_GET_META_CALL(ParticleInfo)

}
#pragma pop
