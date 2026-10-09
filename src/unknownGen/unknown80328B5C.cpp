#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelectB0_getMeta();
void beNDMWShopSelectB0_vtableRead();
void beNDMWWindowSelect_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
extern char lbl_80453528[];
extern char lbl_80535D64[];
void beNDMWShopSelectB0_register();
void *beNDMWShopSelectB0_getMetaCall();
}
extern "C" {
void fn_80328B5C(){
 fn_80066188((int)beNDMWShopSelectB0_register);
}
void beNDMWShopSelectB0_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D64,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelectB0_getMetaCall,(int)lbl_80453528,112,(int)beNDMWShopSelectB0_vtableRead,0,0,0);
}
void *beNDMWShopSelectB0_getMetaCall(){return beNDMWShopSelectB0_getMeta();}
}
#pragma pop
