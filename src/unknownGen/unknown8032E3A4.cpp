#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopCtrlA1_fieldInit();
void *beNDMWShopCtrlA1_getMeta();
void beNDMWShopCtrlA1_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char lbl_80453938[];
extern char lbl_804E1C8C[];
extern char lbl_80535E68[];
void beNDMWShopCtrlA1_register();
void *beNDMWShopCtrlA1_getMetaCall();
}
extern "C" {
void fn_8032E3A4(){
 fn_80066188((int)beNDMWShopCtrlA1_register);
}
void beNDMWShopCtrlA1_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E68,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlA1_getMetaCall,(int)lbl_80453938,92,(int)beNDMWShopCtrlA1_vtableRead,(int)beNDMWShopCtrlA1_fieldInit,0,(int)lbl_804E1C8C);
}
void *beNDMWShopCtrlA1_getMetaCall(){return beNDMWShopCtrlA1_getMeta();}
}
#pragma pop
