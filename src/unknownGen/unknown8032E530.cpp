#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopCtrlA0_registerNow();
extern void *beNDMWShopCtrlA0_meta;
}
extern "C" {
void *beNDMWShopCtrlA0_create(void *object){
 beNDMWShopCtrlA0_registerNow();
 return meta_createInstance(beNDMWShopCtrlA0_meta,object);
}
void *beNDMWShopCtrlA0_getMeta(){
 if(!beNDMWShopCtrlA0_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlA0_meta)[0x24/4]&4)) beNDMWShopCtrlA0_registerNow();
 return beNDMWShopCtrlA0_meta;
}
}
#pragma pop
