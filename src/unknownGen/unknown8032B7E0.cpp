#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopJunk_fieldInit();
void *beNDMWShopJunk_getMeta();
void beNDMWShopJunk_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char lbl_80453764[];
extern char lbl_804E1AEC[];
extern char lbl_80535DE8[];
void beNDMWShopJunk_register();
void *beNDMWShopJunk_getMetaCall();
}
extern "C" {
void fn_8032B7E0(){
 fn_80066188((int)beNDMWShopJunk_register);
}
void beNDMWShopJunk_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DE8,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopJunk_getMetaCall,(int)lbl_80453764,96,(int)beNDMWShopJunk_vtableRead,(int)beNDMWShopJunk_fieldInit,0,(int)lbl_804E1AEC);
}
void *beNDMWShopJunk_getMetaCall(){return beNDMWShopJunk_getMeta();}
}
#pragma pop
