#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopCtrlSell_arkRegister();
extern void *beNDMWShopCtrlSell_meta;
}
extern "C" {
void *beNDMWShopCtrlSell_create(void *object){
 beNDMWShopCtrlSell_arkRegister();
 return meta_createInstance(beNDMWShopCtrlSell_meta,object);
}
void *beNDMWShopCtrlSell_getMeta(){
 if(!beNDMWShopCtrlSell_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlSell_meta)[0x24/4]&4)) beNDMWShopCtrlSell_arkRegister();
 return beNDMWShopCtrlSell_meta;
}
}
#pragma pop
