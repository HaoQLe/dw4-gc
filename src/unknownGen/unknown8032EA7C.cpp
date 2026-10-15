#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopCtrl50_registerNow();
extern void *beNDMWShopCtrl50_meta;
}
extern "C" {
void *beNDMWShopCtrl50_create(void *object){
 beNDMWShopCtrl50_registerNow();
 return meta_createInstance(beNDMWShopCtrl50_meta,object);
}
void *beNDMWShopCtrl50_getMeta(){
 if(!beNDMWShopCtrl50_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrl50_meta)[0x24/4]&4)) beNDMWShopCtrl50_registerNow();
 return beNDMWShopCtrl50_meta;
}
}
#pragma pop
