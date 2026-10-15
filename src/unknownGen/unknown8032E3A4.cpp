#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopCtrlA1_fieldInit();
void *beNDMWShopCtrlA1_getMeta();
void beNDMWShopCtrlA1_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWShopCtrlA1_className[];
extern char beNDMWShopCtrlA1_dependencies[];
extern char beNDMWShopCtrlA1_meta[];
void beNDMWShopCtrlA1_register();
void *beNDMWShopCtrlA1_getMetaCall();
}
extern "C" {
void beNDMWShopCtrlA1_arkRegister(){
 meta_registerNow((int)beNDMWShopCtrlA1_register);
}
void beNDMWShopCtrlA1_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlA1_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlA1_getMetaCall,(int)beNDMWShopCtrlA1_className,92,(int)beNDMWShopCtrlA1_vtableRead,(int)beNDMWShopCtrlA1_fieldInit,0,(int)beNDMWShopCtrlA1_dependencies);
}
void *beNDMWShopCtrlA1_getMetaCall(){return beNDMWShopCtrlA1_getMeta();}
}
#pragma pop
