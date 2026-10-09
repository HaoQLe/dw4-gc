#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void ParticleArray_fieldInit();
void *ParticleArray_getMeta();
void *ParticleArray_parentMeta();
void ParticleArray_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igParticleArray_register();
extern char lbl_80421134[];
extern char lbl_804D3208[];
extern char lbl_80535838[];
void ParticleArray_register();
void *ParticleArray_getMetaCall();
}
extern "C" {
void fn_802E7A78(){
 fn_80066188((int)ParticleArray_register);
}
void ParticleArray_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535838,(int)igParticleArray_register,(int)ParticleArray_parentMeta,(int)ParticleArray_getMetaCall,(int)lbl_80421134,124,(int)ParticleArray_vtableRead,(int)ParticleArray_fieldInit,0,(int)lbl_804D3208);
}
void *ParticleArray_getMetaCall(){return ParticleArray_getMeta();}
}
#pragma pop
