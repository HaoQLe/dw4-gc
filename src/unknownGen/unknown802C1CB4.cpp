#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beParticleCtrl2Info_fieldInit();
void *beParticleCtrl2Info_getMeta();
void beParticleCtrl2Info_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beParticleCtrl2Info_className[];
extern char lbl_804D00C0[];
extern char beParticleCtrl2Info_meta[];
void beParticleCtrl2Info_register();
void *beParticleCtrl2Info_getMetaCall();
}
extern "C" {
void beParticleCtrl2Info_registerNow(){
 meta_registerNow((int)beParticleCtrl2Info_register);
}
void beParticleCtrl2Info_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beParticleCtrl2Info_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beParticleCtrl2Info_getMetaCall,(int)beParticleCtrl2Info_className,48,(int)beParticleCtrl2Info_vtableRead,(int)beParticleCtrl2Info_fieldInit,0,(int)lbl_804D00C0);
}
void *beParticleCtrl2Info_getMetaCall(){return beParticleCtrl2Info_getMeta();}
}
#pragma pop
