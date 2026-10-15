#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWItemWaza_arkRegister();
extern void *beNDMWItemWaza_meta;
}
extern "C" {
void *beNDMWItemWaza_create(void *object){
 beNDMWItemWaza_arkRegister();
 return meta_createInstance(beNDMWItemWaza_meta,object);
}
void *beNDMWItemWaza_getMeta(){
 if(!beNDMWItemWaza_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemWaza_meta)[0x24/4]&4)) beNDMWItemWaza_arkRegister();
 return beNDMWItemWaza_meta;
}
}
#pragma pop
