#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopCtrlDigilabo_fieldInit();
void *beNDMWShopCtrlDigilabo_getMeta();
void beNDMWShopCtrlDigilabo_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char lbl_804538B0[];
extern char lbl_804E1C10[];
extern char lbl_80535E44[];
void beNDMWShopCtrlDigilabo_register();
void *beNDMWShopCtrlDigilabo_getMetaCall();
}
extern "C" {
void fn_8032DB64(){
 fn_80066188((int)beNDMWShopCtrlDigilabo_register);
}
void beNDMWShopCtrlDigilabo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E44,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlDigilabo_getMetaCall,(int)lbl_804538B0,108,(int)beNDMWShopCtrlDigilabo_vtableRead,(int)beNDMWShopCtrlDigilabo_fieldInit,0,(int)lbl_804E1C10);
}
void *beNDMWShopCtrlDigilabo_getMetaCall(){return beNDMWShopCtrlDigilabo_getMeta();}
}
#pragma pop
