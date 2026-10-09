#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beParticleCtrl2Info_fieldInit();
void *beParticleCtrl2Info_getMeta();
void beParticleCtrl2Info_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041E504[];
extern char lbl_804D00C0[];
extern char lbl_80534A90[];
void beParticleCtrl2Info_register();
void *beParticleCtrl2Info_getMetaCall();
}
extern "C" {
void fn_802C1CB4(){
 fn_80066188((int)beParticleCtrl2Info_register);
}
void beParticleCtrl2Info_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A90,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beParticleCtrl2Info_getMetaCall,(int)lbl_8041E504,48,(int)beParticleCtrl2Info_vtableRead,(int)beParticleCtrl2Info_fieldInit,0,(int)lbl_804D00C0);
}
void *beParticleCtrl2Info_getMetaCall(){return beParticleCtrl2Info_getMeta();}
}
#pragma pop
