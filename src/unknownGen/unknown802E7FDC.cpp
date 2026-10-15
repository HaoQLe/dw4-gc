#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void ParticleTimer_fieldInit();
void *ParticleTimer_getMeta();
void ParticleTimer_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801B8D70();
void fn_802B1AC8();
void *fn_802E8184();
void igGeometry_register();
extern char ParticleTimer_className[];
extern char ParticleTimer_meta[];
void ParticleTimer_register();
void *ParticleTimer_getMetaCall();
}
extern "C" {
void ParticleTimer_registerNow(){
 meta_registerNow((int)ParticleTimer_register);
}
void ParticleTimer_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)ParticleTimer_meta,(int)igGeometry_register,(int)fn_801B8D70,(int)ParticleTimer_getMetaCall,(int)ParticleTimer_className,64,(int)ParticleTimer_vtableRead,(int)ParticleTimer_fieldInit,(int)fn_802E8184,0);
}
void *ParticleTimer_getMetaCall(){return ParticleTimer_getMeta();}
}
#pragma pop
