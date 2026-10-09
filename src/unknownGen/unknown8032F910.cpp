#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopCtrlEvolve_fieldInit();
void *beNDMWShopCtrlEvolve_getMeta();
void beNDMWShopCtrlEvolve_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char lbl_804539FC[];
extern char lbl_804E1D54[];
extern char lbl_80535EA8[];
void beNDMWShopCtrlEvolve_register();
void *beNDMWShopCtrlEvolve_getMetaCall();
}
extern "C" {
void fn_8032F910(){
 fn_80066188((int)beNDMWShopCtrlEvolve_register);
}
void beNDMWShopCtrlEvolve_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EA8,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopCtrlEvolve_getMetaCall,(int)lbl_804539FC,100,(int)beNDMWShopCtrlEvolve_vtableRead,(int)beNDMWShopCtrlEvolve_fieldInit,0,(int)lbl_804E1D54);
}
void *beNDMWShopCtrlEvolve_getMetaCall(){return beNDMWShopCtrlEvolve_getMeta();}
}
#pragma pop
