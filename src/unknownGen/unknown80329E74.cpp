#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopSelect00_fieldInit();
void *beNDMWShopSelect00_getMeta();
void beNDMWShopSelect00_vtableRead();
void beNDMWWindowSelect_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
extern char beNDMWShopSelect00_className[];
extern char beNDMWShopSelect00_meta[];
void beNDMWShopSelect00_register();
void *beNDMWShopSelect00_getMetaCall();
}
extern "C" {
void beNDMWShopSelect00_registerNow(){
 meta_registerNow((int)beNDMWShopSelect00_register);
}
void beNDMWShopSelect00_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopSelect00_meta,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect00_getMetaCall,(int)beNDMWShopSelect00_className,116,(int)beNDMWShopSelect00_vtableRead,(int)beNDMWShopSelect00_fieldInit,0,0);
}
void *beNDMWShopSelect00_getMetaCall(){return beNDMWShopSelect00_getMeta();}
}
#pragma pop
