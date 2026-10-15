#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopSelect02_fieldInit();
void *beNDMWShopSelect02_getMeta();
void beNDMWShopSelect02_vtableRead();
void beNDMWWindowSelect_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
extern char beNDMWShopSelect02_className[];
extern char beNDMWShopSelect02_dependencies[];
extern char beNDMWShopSelect02_meta[];
void beNDMWShopSelect02_register();
void *beNDMWShopSelect02_getMetaCall();
}
extern "C" {
void beNDMWShopSelect02_arkRegister(){
 meta_registerNow((int)beNDMWShopSelect02_register);
}
void beNDMWShopSelect02_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopSelect02_meta,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect02_getMetaCall,(int)beNDMWShopSelect02_className,116,(int)beNDMWShopSelect02_vtableRead,(int)beNDMWShopSelect02_fieldInit,0,(int)beNDMWShopSelect02_dependencies);
}
void *beNDMWShopSelect02_getMetaCall(){return beNDMWShopSelect02_getMeta();}
}
#pragma pop
