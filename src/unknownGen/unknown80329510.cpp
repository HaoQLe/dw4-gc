#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect11_getMeta();
void beNDMWShopSelect11_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWShopSelect03_arkRegister();
extern char beNDMWShopSelect11_className[];
extern char beNDMWShopSelect11_meta[];
extern void *beNDMWShopSelect03_meta;
void beNDMWShopSelect11_register();
void *beNDMWShopSelect11_getMetaCall();
}
extern "C" {
void *beNDMWShopSelect03_create(void *object){
 beNDMWShopSelect03_arkRegister();
 return meta_createInstance(beNDMWShopSelect03_meta,object);
}
void *beNDMWShopSelect03_getMeta(){
 if(!beNDMWShopSelect03_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelect03_meta)[0x24/4]&4)) beNDMWShopSelect03_arkRegister();
 return beNDMWShopSelect03_meta;
}
}
#pragma pop
