#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelectA0_getMeta();
void beNDMWShopSelectA0_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWShopSelect52_arkRegister();
extern char beNDMWShopSelectA0_className[];
extern char beNDMWShopSelectA0_meta[];
extern void *beNDMWShopSelect52_meta;
void beNDMWShopSelectA0_register();
void *beNDMWShopSelectA0_getMetaCall();
}
extern "C" {
void *beNDMWShopSelect52_create(void *object){
 beNDMWShopSelect52_arkRegister();
 return meta_createInstance(beNDMWShopSelect52_meta,object);
}
void *beNDMWShopSelect52_getMeta(){
 if(!beNDMWShopSelect52_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelect52_meta)[0x24/4]&4)) beNDMWShopSelect52_arkRegister();
 return beNDMWShopSelect52_meta;
}
}
#pragma pop
