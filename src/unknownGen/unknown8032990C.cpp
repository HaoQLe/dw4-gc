#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopSelect02_fieldInit();
void *beNDMWShopSelect02_getMeta();
void beNDMWShopSelect02_vtableRead();
void beNDMWWindowSelect_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
extern char lbl_804535A0[];
extern char lbl_804E19C8[];
extern char lbl_80535D7C[];
void beNDMWShopSelect02_register();
void *beNDMWShopSelect02_getMetaCall();
}
extern "C" {
void fn_8032990C(){
 fn_80066188((int)beNDMWShopSelect02_register);
}
void beNDMWShopSelect02_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D7C,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect02_getMetaCall,(int)lbl_804535A0,116,(int)beNDMWShopSelect02_vtableRead,(int)beNDMWShopSelect02_fieldInit,0,(int)lbl_804E19C8);
}
void *beNDMWShopSelect02_getMetaCall(){return beNDMWShopSelect02_getMeta();}
}
#pragma pop
