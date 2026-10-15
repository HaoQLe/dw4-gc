#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopCtrlDeviceSell_fieldInit();
void *beNDMWShopCtrlDeviceSell_getMeta();
void beNDMWShopCtrlDeviceSell_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char beNDMWShopCtrlDeviceSell_className[];
extern char lbl_804E1BD8[];
extern char beNDMWShopCtrlDeviceSell_meta[];
void beNDMWShopCtrlDeviceSell_register();
void *beNDMWShopCtrlDeviceSell_getMetaCall();
}
extern "C" {
void beNDMWShopCtrlDeviceSell_registerNow(){
 meta_registerNow((int)beNDMWShopCtrlDeviceSell_register);
}
void beNDMWShopCtrlDeviceSell_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlDeviceSell_meta,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopCtrlDeviceSell_getMetaCall,(int)beNDMWShopCtrlDeviceSell_className,100,(int)beNDMWShopCtrlDeviceSell_vtableRead,(int)beNDMWShopCtrlDeviceSell_fieldInit,0,(int)lbl_804E1BD8);
}
void *beNDMWShopCtrlDeviceSell_getMetaCall(){return beNDMWShopCtrlDeviceSell_getMeta();}
}
#pragma pop
