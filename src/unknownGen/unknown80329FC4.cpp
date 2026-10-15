#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusSelectE1_arkRegister();
extern void *beNDMWStatusSelectE1_meta;
}
extern "C" {
void *beNDMWStatusSelectE1_create(void *object){
 beNDMWStatusSelectE1_arkRegister();
 return meta_createInstance(beNDMWStatusSelectE1_meta,object);
}
void *beNDMWStatusSelectE1_getMeta(){
 if(!beNDMWStatusSelectE1_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusSelectE1_meta)[0x24/4]&4)) beNDMWStatusSelectE1_arkRegister();
 return beNDMWStatusSelectE1_meta;
}
}
#pragma pop
