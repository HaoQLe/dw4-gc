#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect52_getMeta();
void beNDMWShopSelect52_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWShopSelect34_arkRegister();
extern char beNDMWShopSelect52_className[];
extern char beNDMWShopSelect52_meta[];
extern void *beNDMWShopSelect34_meta;
void beNDMWShopSelect52_register();
void *beNDMWShopSelect52_getMetaCall();
}
extern "C" {
void *beNDMWShopSelect34_create(void *object){
 beNDMWShopSelect34_arkRegister();
 return meta_createInstance(beNDMWShopSelect34_meta,object);
}
void *beNDMWShopSelect34_getMeta(){
 if(!beNDMWShopSelect34_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelect34_meta)[0x24/4]&4)) beNDMWShopSelect34_arkRegister();
 return beNDMWShopSelect34_meta;
}
}
#pragma pop
