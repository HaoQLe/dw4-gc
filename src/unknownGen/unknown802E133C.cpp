#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beChangePosTransform_getMeta();
void beChangePosTransform_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802E1648();
extern char lbl_80420A74[];
extern char lbl_804D2970[];
extern char lbl_804D2974[];
extern char lbl_804D2978[];
extern char lbl_804D297C[];
extern void *lbl_805355D8;
extern void *lbl_805355E0;
extern void *lbl_805621F4;
void beChangePosTransform_register();
void *beChangePosTransform_getMetaCall();
void beChangePosTransform_fieldInit();
}
extern "C" {
void fn_802E133C(){
 fn_80066188((int)beChangePosTransform_register);
}
void beChangePosTransform_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805355D8,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beChangePosTransform_getMetaCall,(int)lbl_80420A74,44,(int)beChangePosTransform_vtableRead,(int)beChangePosTransform_fieldInit,0,0);
}
void *beChangePosTransform_getMetaCall(){return beChangePosTransform_getMeta();}
void beChangePosTransform_fieldInit(){
 void *meta=lbl_805355D8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2970,0x1);
 fn_800659C0(meta,lbl_804D2974,lbl_804D2978,lbl_804D297C,field);
}
void *fn_802E1478(void *object){
 fn_802E1648();
 return fn_8006546C(lbl_805355E0,object);
}
void *fn_802E14B8(){
 if(!lbl_805355E0) lbl_805355E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805355E0;
}
void *beCameraMode_getMeta(){
 if(!lbl_805355E0 || !(reinterpret_cast<unsigned int *>(lbl_805355E0)[0x24/4]&4)) fn_802E1648();
 return lbl_805355E0;
}
}
#pragma pop
