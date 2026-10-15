#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopCtrlSales_arkRegister();
extern void *beNDMWShopCtrlSales_meta;
}
extern "C" {
void *beNDMWShopCtrlSales_create(void *object){
 beNDMWShopCtrlSales_arkRegister();
 return meta_createInstance(beNDMWShopCtrlSales_meta,object);
}
void *beNDMWShopCtrlSales_getMeta(){
 if(!beNDMWShopCtrlSales_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlSales_meta)[0x24/4]&4)) beNDMWShopCtrlSales_arkRegister();
 return beNDMWShopCtrlSales_meta;
}
}
#pragma pop
