#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWShopCtrlDiskSell_arkRegister();
extern void *beNDMWShopCtrlDiskSell_meta;
}
extern "C" {
void *beNDMWShopCtrlDiskSell_create(void *object){
 beNDMWShopCtrlDiskSell_arkRegister();
 return meta_createInstance(beNDMWShopCtrlDiskSell_meta,object);
}
void *beNDMWShopCtrlDiskSell_getMeta(){
 if(!beNDMWShopCtrlDiskSell_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlDiskSell_meta)[0x24/4]&4)) beNDMWShopCtrlDiskSell_arkRegister();
 return beNDMWShopCtrlDiskSell_meta;
}
}
#pragma pop
