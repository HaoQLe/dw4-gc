#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect01_getMeta();
void beNDMWShopSelect01_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWShopSelect00_arkRegister();
extern char beNDMWShopSelect01_className[];
extern char beNDMWShopSelect01_meta[];
extern void *beNDMWShopSelect00_meta;
void beNDMWShopSelect01_register();
void *beNDMWShopSelect01_getMetaCall();
}
extern "C" {
void *beNDMWShopSelect00_create(void *object){
 beNDMWShopSelect00_arkRegister();
 return meta_createInstance(beNDMWShopSelect00_meta,object);
}
void *beNDMWShopSelect00_getMeta(){
 if(!beNDMWShopSelect00_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelect00_meta)[0x24/4]&4)) beNDMWShopSelect00_arkRegister();
 return beNDMWShopSelect00_meta;
}
}
#pragma pop
