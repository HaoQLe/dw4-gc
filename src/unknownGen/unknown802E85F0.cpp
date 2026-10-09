#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void ParticleInfo_fieldInit();
void *ParticleInfo_getMeta();
void *ParticleInfo_parentMeta();
void ParticleInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igSceneInfo_register();
extern char lbl_804213E8[];
extern char lbl_804D3358[];
extern char lbl_80535888[];
void ParticleInfo_register();
void *ParticleInfo_getMetaCall();
}
extern "C" {
void fn_802E85F0(){
 fn_80066188((int)ParticleInfo_register);
}
void ParticleInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535888,(int)igSceneInfo_register,(int)ParticleInfo_parentMeta,(int)ParticleInfo_getMetaCall,(int)lbl_804213E8,1024,(int)ParticleInfo_vtableRead,(int)ParticleInfo_fieldInit,0,(int)lbl_804D3358);
}
void *ParticleInfo_getMetaCall(){return ParticleInfo_getMeta();}
}
#pragma pop
