#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopJunk_arkRegister();
extern void *beNDMWShopJunk_meta;
}
extern "C" {
void *beNDMWShopJunk_create(void *object){
 beNDMWShopJunk_arkRegister();
 return meta_createInstance(beNDMWShopJunk_meta,object);
}
void *beNDMWShopJunk_getMeta(){
 if(!beNDMWShopJunk_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopJunk_meta)[0x24/4]&4)) beNDMWShopJunk_arkRegister();
 return beNDMWShopJunk_meta;
}
}
#pragma pop
