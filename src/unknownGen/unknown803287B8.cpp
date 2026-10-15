#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopSelectB0_registerNow();
extern void *beNDMWShopSelectB0_meta;
}
extern "C" {
void *beNDMWShopSelectB0_create(void *object){
 beNDMWShopSelectB0_registerNow();
 return meta_createInstance(beNDMWShopSelectB0_meta,object);
}
void *beNDMWShopSelectB0_getMeta(){
 if(!beNDMWShopSelectB0_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelectB0_meta)[0x24/4]&4)) beNDMWShopSelectB0_registerNow();
 return beNDMWShopSelectB0_meta;
}
}
#pragma pop
