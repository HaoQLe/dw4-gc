#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopDevice_fieldInit();
void *beNDMWShopDevice_getMeta();
void beNDMWShopDevice_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char lbl_8045379C[];
extern char lbl_804E1B24[];
extern char lbl_80535DF8[];
void beNDMWShopDevice_register();
void *beNDMWShopDevice_getMetaCall();
}
extern "C" {
void fn_8032BC90(){
 fn_80066188((int)beNDMWShopDevice_register);
}
void beNDMWShopDevice_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DF8,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopDevice_getMetaCall,(int)lbl_8045379C,100,(int)beNDMWShopDevice_vtableRead,(int)beNDMWShopDevice_fieldInit,0,(int)lbl_804E1B24);
}
void *beNDMWShopDevice_getMetaCall(){return beNDMWShopDevice_getMeta();}
}
#pragma pop
