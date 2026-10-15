#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopCtrl10_arkRegister();
extern void *beNDMWShopCtrl10_meta;
}
extern "C" {
void *beNDMWShopCtrl10_create(void *object){
 beNDMWShopCtrl10_arkRegister();
 return meta_createInstance(beNDMWShopCtrl10_meta,object);
}
void *beNDMWShopCtrl10_getMeta(){
 if(!beNDMWShopCtrl10_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrl10_meta)[0x24/4]&4)) beNDMWShopCtrl10_arkRegister();
 return beNDMWShopCtrl10_meta;
}
}
#pragma pop
