#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopSelectA0_registerNow();
extern void *beNDMWShopSelectA0_meta;
}
extern "C" {
void *beNDMWShopSelectA0_create(void *object){
 beNDMWShopSelectA0_registerNow();
 return meta_createInstance(beNDMWShopSelectA0_meta,object);
}
void *beNDMWShopSelectA0_getMeta(){
 if(!beNDMWShopSelectA0_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelectA0_meta)[0x24/4]&4)) beNDMWShopSelectA0_registerNow();
 return beNDMWShopSelectA0_meta;
}
}
#pragma pop
