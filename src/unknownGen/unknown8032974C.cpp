#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect03_getMeta();
void beNDMWShopSelect03_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWShopSelect02_arkRegister();
extern char beNDMWShopSelect03_className[];
extern char beNDMWShopSelect03_meta[];
extern void *beNDMWShopSelect02_meta;
void beNDMWShopSelect03_register();
void *beNDMWShopSelect03_getMetaCall();
}
extern "C" {
void *beNDMWShopSelect02_create(void *object){
 beNDMWShopSelect02_arkRegister();
 return meta_createInstance(beNDMWShopSelect02_meta,object);
}
void *beNDMWShopSelect02_getMeta(){
 if(!beNDMWShopSelect02_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelect02_meta)[0x24/4]&4)) beNDMWShopSelect02_arkRegister();
 return beNDMWShopSelect02_meta;
}
}
#pragma pop
