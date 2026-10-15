#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopSelect01_arkRegister();
extern void *beNDMWShopSelect01_meta;
}
extern "C" {
void *beNDMWShopSelect01_create(void *object){
 beNDMWShopSelect01_arkRegister();
 return meta_createInstance(beNDMWShopSelect01_meta,object);
}
void *beNDMWShopSelect01_getMeta(){
 if(!beNDMWShopSelect01_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelect01_meta)[0x24/4]&4)) beNDMWShopSelect01_arkRegister();
 return beNDMWShopSelect01_meta;
}
}
#pragma pop
