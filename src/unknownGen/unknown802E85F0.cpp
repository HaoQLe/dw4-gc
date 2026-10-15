#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void ParticleInfo_fieldInit();
void *ParticleInfo_getMeta();
void *ParticleInfo_parentMeta();
void ParticleInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igSceneInfo_register();
extern char ParticleInfo_className[];
extern char ParticleInfo_dependencies[];
extern char ParticleInfo_meta[];
void ParticleInfo_register();
void *ParticleInfo_getMetaCall();
}
extern "C" {
void ParticleInfo_arkRegister(){
 meta_registerNow((int)ParticleInfo_register);
}
void ParticleInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)ParticleInfo_meta,(int)igSceneInfo_register,(int)ParticleInfo_parentMeta,(int)ParticleInfo_getMetaCall,(int)ParticleInfo_className,1024,(int)ParticleInfo_vtableRead,(int)ParticleInfo_fieldInit,0,(int)ParticleInfo_dependencies);
}
void *ParticleInfo_getMetaCall(){return ParticleInfo_getMeta();}
}
#pragma pop
