#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopCtrlEvolve_fieldInit();
void *beNDMWShopCtrlEvolve_getMeta();
void beNDMWShopCtrlEvolve_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char beNDMWShopCtrlEvolve_className[];
extern char beNDMWShopCtrlEvolve_dependencies[];
extern char beNDMWShopCtrlEvolve_meta[];
void beNDMWShopCtrlEvolve_register();
void *beNDMWShopCtrlEvolve_getMetaCall();
}
extern "C" {
void beNDMWShopCtrlEvolve_arkRegister(){
 meta_registerNow((int)beNDMWShopCtrlEvolve_register);
}
void beNDMWShopCtrlEvolve_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlEvolve_meta,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopCtrlEvolve_getMetaCall,(int)beNDMWShopCtrlEvolve_className,100,(int)beNDMWShopCtrlEvolve_vtableRead,(int)beNDMWShopCtrlEvolve_fieldInit,0,(int)beNDMWShopCtrlEvolve_dependencies);
}
void *beNDMWShopCtrlEvolve_getMetaCall(){return beNDMWShopCtrlEvolve_getMeta();}
}
#pragma pop
