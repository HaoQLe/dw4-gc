#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopCtrlDeviceSell_arkRegister();
extern void *beNDMWShopCtrlDeviceSell_meta;
}
extern "C" {
void *beNDMWShopCtrlDeviceSell_create(void *object){
 beNDMWShopCtrlDeviceSell_arkRegister();
 return meta_createInstance(beNDMWShopCtrlDeviceSell_meta,object);
}
void *beNDMWShopCtrlDeviceSell_getMeta(){
 if(!beNDMWShopCtrlDeviceSell_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlDeviceSell_meta)[0x24/4]&4)) beNDMWShopCtrlDeviceSell_arkRegister();
 return beNDMWShopCtrlDeviceSell_meta;
}
}
#pragma pop
