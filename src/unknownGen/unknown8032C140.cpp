#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopCtrlXdataChip_fieldInit();
void *beNDMWShopCtrlXdataChip_getMeta();
void beNDMWShopCtrlXdataChip_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char beNDMWShopCtrlXdataChip_className[];
extern char beNDMWShopCtrlXdataChip_dependencies[];
extern char beNDMWShopCtrlXdataChip_meta[];
void beNDMWShopCtrlXdataChip_register();
void *beNDMWShopCtrlXdataChip_getMetaCall();
}
extern "C" {
void beNDMWShopCtrlXdataChip_arkRegister(){
 meta_registerNow((int)beNDMWShopCtrlXdataChip_register);
}
void beNDMWShopCtrlXdataChip_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlXdataChip_meta,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopCtrlXdataChip_getMetaCall,(int)beNDMWShopCtrlXdataChip_className,100,(int)beNDMWShopCtrlXdataChip_vtableRead,(int)beNDMWShopCtrlXdataChip_fieldInit,0,(int)beNDMWShopCtrlXdataChip_dependencies);
}
void *beNDMWShopCtrlXdataChip_getMetaCall(){return beNDMWShopCtrlXdataChip_getMeta();}
}
#pragma pop
