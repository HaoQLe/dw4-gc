#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopTitle03_registerNow();
extern void *beNDMWShopTitle03_meta;
}
extern "C" {
void *beNDMWShopTitle03_create(void *object){
 beNDMWShopTitle03_registerNow();
 return meta_createInstance(beNDMWShopTitle03_meta,object);
}
void *beNDMWShopTitle03_getMeta(){
 if(!beNDMWShopTitle03_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopTitle03_meta)[0x24/4]&4)) beNDMWShopTitle03_registerNow();
 return beNDMWShopTitle03_meta;
}
}
#pragma pop
