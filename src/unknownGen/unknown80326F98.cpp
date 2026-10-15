#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopTitle01_registerNow();
extern void *beNDMWShopTitle01_meta;
}
extern "C" {
void *beNDMWShopTitle01_create(void *object){
 beNDMWShopTitle01_registerNow();
 return meta_createInstance(beNDMWShopTitle01_meta,object);
}
void *beNDMWShopTitle01_getMeta(){
 if(!beNDMWShopTitle01_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopTitle01_meta)[0x24/4]&4)) beNDMWShopTitle01_registerNow();
 return beNDMWShopTitle01_meta;
}
}
#pragma pop
