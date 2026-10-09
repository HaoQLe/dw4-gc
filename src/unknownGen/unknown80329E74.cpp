#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopSelect00_fieldInit();
void *beNDMWShopSelect00_getMeta();
void beNDMWShopSelect00_vtableRead();
void beNDMWWindowSelect_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
extern char lbl_804535D8[];
extern char lbl_80535D88[];
void beNDMWShopSelect00_register();
void *beNDMWShopSelect00_getMetaCall();
}
extern "C" {
void fn_80329E74(){
 fn_80066188((int)beNDMWShopSelect00_register);
}
void beNDMWShopSelect00_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D88,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect00_getMetaCall,(int)lbl_804535D8,116,(int)beNDMWShopSelect00_vtableRead,(int)beNDMWShopSelect00_fieldInit,0,0);
}
void *beNDMWShopSelect00_getMetaCall(){return beNDMWShopSelect00_getMeta();}
}
#pragma pop
