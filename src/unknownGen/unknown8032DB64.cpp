#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopCtrlDigilabo_fieldInit();
void *beNDMWShopCtrlDigilabo_getMeta();
void beNDMWShopCtrlDigilabo_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWShopCtrlDigilabo_className[];
extern char beNDMWShopCtrlDigilabo_dependencies[];
extern char beNDMWShopCtrlDigilabo_meta[];
void beNDMWShopCtrlDigilabo_register();
void *beNDMWShopCtrlDigilabo_getMetaCall();
}
extern "C" {
void beNDMWShopCtrlDigilabo_arkRegister(){
 meta_registerNow((int)beNDMWShopCtrlDigilabo_register);
}
void beNDMWShopCtrlDigilabo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlDigilabo_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlDigilabo_getMetaCall,(int)beNDMWShopCtrlDigilabo_className,108,(int)beNDMWShopCtrlDigilabo_vtableRead,(int)beNDMWShopCtrlDigilabo_fieldInit,0,(int)beNDMWShopCtrlDigilabo_dependencies);
}
void *beNDMWShopCtrlDigilabo_getMetaCall(){return beNDMWShopCtrlDigilabo_getMeta();}
}
#pragma pop
