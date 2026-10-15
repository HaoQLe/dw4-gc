#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWGameRamInfoRam_arkRegister();
extern void *beNDMWGameRamInfoRam_meta;
}
extern "C" {
void *beNDMWGameRamInfoRam_create(void *object){
 beNDMWGameRamInfoRam_arkRegister();
 return meta_createInstance(beNDMWGameRamInfoRam_meta,object);
}
void *beNDMWGameRamInfoRam_getMeta(){
 if(!beNDMWGameRamInfoRam_meta || !(reinterpret_cast<unsigned int *>(beNDMWGameRamInfoRam_meta)[0x24/4]&4)) beNDMWGameRamInfoRam_arkRegister();
 return beNDMWGameRamInfoRam_meta;
}
}
#pragma pop
