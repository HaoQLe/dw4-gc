#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void ParticleArray_fieldInit();
void *ParticleArray_getMeta();
void *ParticleArray_parentMeta();
void ParticleArray_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igParticleArray_register();
extern char ParticleArray_className[];
extern char ParticleArray_dependencies[];
extern char ParticleArray_meta[];
void ParticleArray_register();
void *ParticleArray_getMetaCall();
}
extern "C" {
void ParticleArray_arkRegister(){
 meta_registerNow((int)ParticleArray_register);
}
void ParticleArray_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)ParticleArray_meta,(int)igParticleArray_register,(int)ParticleArray_parentMeta,(int)ParticleArray_getMetaCall,(int)ParticleArray_className,124,(int)ParticleArray_vtableRead,(int)ParticleArray_fieldInit,0,(int)ParticleArray_dependencies);
}
void *ParticleArray_getMetaCall(){return ParticleArray_getMeta();}
}
#pragma pop
