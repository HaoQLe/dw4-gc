#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopCtrlSales_fieldInit();
void *beNDMWShopCtrlSales_getMeta();
void beNDMWShopCtrlSales_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char beNDMWShopCtrlSales_className[];
extern char lbl_804E1B54[];
extern char beNDMWShopCtrlSales_meta[];
void beNDMWShopCtrlSales_register();
void *beNDMWShopCtrlSales_getMetaCall();
}
extern "C" {
void beNDMWShopCtrlSales_registerNow(){
 meta_registerNow((int)beNDMWShopCtrlSales_register);
}
void beNDMWShopCtrlSales_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlSales_meta,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopCtrlSales_getMetaCall,(int)beNDMWShopCtrlSales_className,104,(int)beNDMWShopCtrlSales_vtableRead,(int)beNDMWShopCtrlSales_fieldInit,0,(int)lbl_804E1B54);
}
void *beNDMWShopCtrlSales_getMetaCall(){return beNDMWShopCtrlSales_getMeta();}
}
#pragma pop
