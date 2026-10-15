#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusCtrlBit_arkRegister();
extern void *beNDMWStatusCtrlBit_meta;
}
extern "C" {
void *beNDMWStatusCtrlBit_create(void *object){
 beNDMWStatusCtrlBit_arkRegister();
 return meta_createInstance(beNDMWStatusCtrlBit_meta,object);
}
void *beNDMWStatusCtrlBit_getMeta(){
 if(!beNDMWStatusCtrlBit_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlBit_meta)[0x24/4]&4)) beNDMWStatusCtrlBit_arkRegister();
 return beNDMWStatusCtrlBit_meta;
}
}
#pragma pop
