#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopCtrlDeviceSell_fieldInit();
void *beNDMWShopCtrlDeviceSell_getMeta();
void beNDMWShopCtrlDeviceSell_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char lbl_80453850[];
extern char lbl_804E1BD8[];
extern char lbl_80535E2C[];
void beNDMWShopCtrlDeviceSell_register();
void *beNDMWShopCtrlDeviceSell_getMetaCall();
}
extern "C" {
void fn_8032CF68(){
 fn_80066188((int)beNDMWShopCtrlDeviceSell_register);
}
void beNDMWShopCtrlDeviceSell_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E2C,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopCtrlDeviceSell_getMetaCall,(int)lbl_80453850,100,(int)beNDMWShopCtrlDeviceSell_vtableRead,(int)beNDMWShopCtrlDeviceSell_fieldInit,0,(int)lbl_804E1BD8);
}
void *beNDMWShopCtrlDeviceSell_getMetaCall(){return beNDMWShopCtrlDeviceSell_getMeta();}
}
#pragma pop
