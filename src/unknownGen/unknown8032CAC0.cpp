#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopCtrlDiskSell_fieldInit();
void *beNDMWShopCtrlDiskSell_getMeta();
void beNDMWShopCtrlDiskSell_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWShopCtrlDiskSell_className[];
extern char lbl_804E1B80[];
extern char beNDMWShopCtrlDiskSell_meta[];
void beNDMWShopCtrlDiskSell_register();
void *beNDMWShopCtrlDiskSell_getMetaCall();
}
extern "C" {
void beNDMWShopCtrlDiskSell_registerNow(){
 meta_registerNow((int)beNDMWShopCtrlDiskSell_register);
}
void beNDMWShopCtrlDiskSell_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlDiskSell_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlDiskSell_getMetaCall,(int)beNDMWShopCtrlDiskSell_className,104,(int)beNDMWShopCtrlDiskSell_vtableRead,(int)beNDMWShopCtrlDiskSell_fieldInit,0,(int)lbl_804E1B80);
}
void *beNDMWShopCtrlDiskSell_getMetaCall(){return beNDMWShopCtrlDiskSell_getMeta();}
}
#pragma pop
