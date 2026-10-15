#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusMainSlot_arkRegister();
extern void *beNDMWStatusMainSlot_meta;
}
extern "C" {
void *beNDMWStatusMainSlot_create(void *object){
 beNDMWStatusMainSlot_arkRegister();
 return meta_createInstance(beNDMWStatusMainSlot_meta,object);
}
void *beNDMWStatusMainSlot_getMeta(){
 if(!beNDMWStatusMainSlot_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusMainSlot_meta)[0x24/4]&4)) beNDMWStatusMainSlot_arkRegister();
 return beNDMWStatusMainSlot_meta;
}
}
#pragma pop
