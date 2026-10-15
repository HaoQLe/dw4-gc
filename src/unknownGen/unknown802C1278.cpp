#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *bePoint01_getMeta();
void bePoint01_vtableRead();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beParticleCtrl2InfoRam_registerNow();
extern char bePoint01_className[];
extern char lbl_804D0048[];
extern char lbl_804D004C[];
extern char lbl_804D0050[];
extern char lbl_804D0054[];
extern void *bePoint01_meta;
extern void *beParticleCtrl2InfoRam_meta;
void bePoint01_register();
void *bePoint01_getMetaCall();
void bePoint01_fieldInit();
}
extern "C" {
void bePoint01_registerNow(){
 meta_registerNow((int)bePoint01_register);
}
void bePoint01_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&bePoint01_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)bePoint01_getMetaCall,(int)bePoint01_className,36,(int)bePoint01_vtableRead,(int)bePoint01_fieldInit,0,0);
}
void *bePoint01_getMetaCall(){return bePoint01_getMeta();}
void bePoint01_fieldInit(){
 void *meta=bePoint01_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0048,0x1);
 fn_800659C0(meta,lbl_804D004C,lbl_804D0050,lbl_804D0054,field);
}
void *beParticleCtrl2InfoRam_getMeta(){
 if(!beParticleCtrl2InfoRam_meta || !(reinterpret_cast<unsigned int *>(beParticleCtrl2InfoRam_meta)[0x24/4]&4)) beParticleCtrl2InfoRam_registerNow();
 return beParticleCtrl2InfoRam_meta;
}
}
#pragma pop
