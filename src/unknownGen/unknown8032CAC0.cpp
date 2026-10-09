#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopCtrlDiskSell_fieldInit();
void *beNDMWShopCtrlDiskSell_getMeta();
void beNDMWShopCtrlDiskSell_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char lbl_80453808[];
extern char lbl_804E1B80[];
extern char lbl_80535E14[];
void beNDMWShopCtrlDiskSell_register();
void *beNDMWShopCtrlDiskSell_getMetaCall();
}
extern "C" {
void fn_8032CAC0(){
 fn_80066188((int)beNDMWShopCtrlDiskSell_register);
}
void beNDMWShopCtrlDiskSell_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E14,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlDiskSell_getMetaCall,(int)lbl_80453808,104,(int)beNDMWShopCtrlDiskSell_vtableRead,(int)beNDMWShopCtrlDiskSell_fieldInit,0,(int)lbl_804E1B80);
}
void *beNDMWShopCtrlDiskSell_getMetaCall(){return beNDMWShopCtrlDiskSell_getMeta();}
}
#pragma pop
