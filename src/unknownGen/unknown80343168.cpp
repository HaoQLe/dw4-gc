#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWItemWeapon_registerNow();
extern void *beNDMWItemWeapon_meta;
}
extern "C" {
void *beNDMWItemWeapon_create(void *object){
 beNDMWItemWeapon_registerNow();
 return meta_createInstance(beNDMWItemWeapon_meta,object);
}
void *beNDMWItemWeapon_getMeta(){
 if(!beNDMWItemWeapon_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemWeapon_meta)[0x24/4]&4)) beNDMWItemWeapon_registerNow();
 return beNDMWItemWeapon_meta;
}
}
#pragma pop
