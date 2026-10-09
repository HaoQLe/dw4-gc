#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopCtrlXdataChip_fieldInit();
void *beNDMWShopCtrlXdataChip_getMeta();
void beNDMWShopCtrlXdataChip_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char lbl_804537BC[];
extern char lbl_804E1B3C[];
extern char lbl_80535E00[];
void beNDMWShopCtrlXdataChip_register();
void *beNDMWShopCtrlXdataChip_getMetaCall();
}
extern "C" {
void fn_8032C140(){
 fn_80066188((int)beNDMWShopCtrlXdataChip_register);
}
void beNDMWShopCtrlXdataChip_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E00,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopCtrlXdataChip_getMetaCall,(int)lbl_804537BC,100,(int)beNDMWShopCtrlXdataChip_vtableRead,(int)beNDMWShopCtrlXdataChip_fieldInit,0,(int)lbl_804E1B3C);
}
void *beNDMWShopCtrlXdataChip_getMetaCall(){return beNDMWShopCtrlXdataChip_getMeta();}
}
#pragma pop
