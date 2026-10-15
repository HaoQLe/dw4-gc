#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelectB0_getMeta();
void beNDMWShopSelectB0_vtableRead();
void beNDMWWindowSelect_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
extern char beNDMWShopSelectB0_className[];
extern char beNDMWShopSelectB0_meta[];
void beNDMWShopSelectB0_register();
void *beNDMWShopSelectB0_getMetaCall();
}
extern "C" {
void beNDMWShopSelectB0_registerNow(){
 meta_registerNow((int)beNDMWShopSelectB0_register);
}
void beNDMWShopSelectB0_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopSelectB0_meta,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelectB0_getMetaCall,(int)beNDMWShopSelectB0_className,112,(int)beNDMWShopSelectB0_vtableRead,0,0,0);
}
void *beNDMWShopSelectB0_getMetaCall(){return beNDMWShopSelectB0_getMeta();}
}
#pragma pop
