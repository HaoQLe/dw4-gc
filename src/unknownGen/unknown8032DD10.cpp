#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopCtrlA2_arkRegister();
extern void *beNDMWShopCtrlA2_meta;
}
extern "C" {
void *beNDMWShopCtrlA2_create(void *object){
 beNDMWShopCtrlA2_arkRegister();
 return meta_createInstance(beNDMWShopCtrlA2_meta,object);
}
void *beNDMWShopCtrlA2_getMeta(){
 if(!beNDMWShopCtrlA2_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlA2_meta)[0x24/4]&4)) beNDMWShopCtrlA2_arkRegister();
 return beNDMWShopCtrlA2_meta;
}
}
#pragma pop
