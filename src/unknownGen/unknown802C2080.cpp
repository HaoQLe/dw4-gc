#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beParticleCtrl2_getMeta();
void beParticleCtrl2_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802C2394();
extern char lbl_8041E580[];
extern char lbl_80534AA8[];
extern void *lbl_80534AAC;
extern void *lbl_805621F4;
void beParticleCtrl2_register();
void *beParticleCtrl2_getMetaCall();
}
extern "C" {
void fn_802C2080(){
 fn_80066188((int)beParticleCtrl2_register);
}
void beParticleCtrl2_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534AA8,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beParticleCtrl2_getMetaCall,(int)lbl_8041E580,32,(int)beParticleCtrl2_vtableRead,0,0,0);
}
void *beParticleCtrl2_getMetaCall(){return beParticleCtrl2_getMeta();}
void *fn_802C2134(void *object){
 fn_802C2394();
 return fn_8006546C(lbl_80534AAC,object);
}
void *fn_802C2174(){
 if(!lbl_80534AAC) lbl_80534AAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534AAC;
}
void *bePadManager_getMeta(){
 if(!lbl_80534AAC || !(reinterpret_cast<unsigned int *>(lbl_80534AAC)[0x24/4]&4)) fn_802C2394();
 return lbl_80534AAC;
}
}
#pragma pop
