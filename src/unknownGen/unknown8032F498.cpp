#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl30_getMeta();
void beNDMWShopCtrl30_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrlEvolve_registerNow();
extern char beNDMWShopCtrl30_className[];
extern char lbl_804E1D44[];
extern char lbl_804E1D48[];
extern char lbl_804E1D4C[];
extern char lbl_804E1D50[];
extern void *beNDMWShopCtrl30_meta;
extern void *beNDMWShopCtrlEvolve_meta;
void beNDMWShopCtrl30_register();
void *beNDMWShopCtrl30_getMetaCall();
void beNDMWShopCtrl30_fieldInit();
}
extern "C" {
void beNDMWShopCtrl30_registerNow(){
 meta_registerNow((int)beNDMWShopCtrl30_register);
}
void beNDMWShopCtrl30_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWShopCtrl30_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrl30_getMetaCall,(int)beNDMWShopCtrl30_className,88,(int)beNDMWShopCtrl30_vtableRead,(int)beNDMWShopCtrl30_fieldInit,0,0);
}
void *beNDMWShopCtrl30_getMetaCall(){return beNDMWShopCtrl30_getMeta();}
void beNDMWShopCtrl30_fieldInit(){
 void *meta=beNDMWShopCtrl30_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804E1D44,0x1);
 meta_setupFields(meta,lbl_804E1D48,lbl_804E1D4C,lbl_804E1D50,field);
}
void *beNDMWShopCtrlEvolve_create(void *object){
 beNDMWShopCtrlEvolve_registerNow();
 return meta_createInstance(beNDMWShopCtrlEvolve_meta,object);
}
void *beNDMWShopCtrlEvolve_getMeta(){
 if(!beNDMWShopCtrlEvolve_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlEvolve_meta)[0x24/4]&4)) beNDMWShopCtrlEvolve_registerNow();
 return beNDMWShopCtrlEvolve_meta;
}
}
#pragma pop
