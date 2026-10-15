#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWItemBlueArmor_arkRegister();
extern void *beNDMWItemBlueArmor_meta;
}
extern "C" {
void *beNDMWItemBlueArmor_create(void *object){
 beNDMWItemBlueArmor_arkRegister();
 return meta_createInstance(beNDMWItemBlueArmor_meta,object);
}
void *beNDMWItemBlueArmor_getMeta(){
 if(!beNDMWItemBlueArmor_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemBlueArmor_meta)[0x24/4]&4)) beNDMWItemBlueArmor_arkRegister();
 return beNDMWItemBlueArmor_meta;
}
}
#pragma pop
