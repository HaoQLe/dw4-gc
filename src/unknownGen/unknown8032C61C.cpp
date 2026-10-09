#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopCtrlSales_fieldInit();
void *beNDMWShopCtrlSales_getMeta();
void beNDMWShopCtrlSales_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char lbl_804537E4[];
extern char lbl_804E1B54[];
extern char lbl_80535E08[];
void beNDMWShopCtrlSales_register();
void *beNDMWShopCtrlSales_getMetaCall();
}
extern "C" {
void fn_8032C61C(){
 fn_80066188((int)beNDMWShopCtrlSales_register);
}
void beNDMWShopCtrlSales_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E08,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopCtrlSales_getMetaCall,(int)lbl_804537E4,104,(int)beNDMWShopCtrlSales_vtableRead,(int)beNDMWShopCtrlSales_fieldInit,0,(int)lbl_804E1B54);
}
void *beNDMWShopCtrlSales_getMetaCall(){return beNDMWShopCtrlSales_getMeta();}
}
#pragma pop
