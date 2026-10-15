#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusCtrlBit_registerNow();
extern void *beNDMWStatusCtrlBit_meta;
}
extern "C" {
void *beNDMWStatusCtrlBit_create(void *object){
 beNDMWStatusCtrlBit_registerNow();
 return meta_createInstance(beNDMWStatusCtrlBit_meta,object);
}
void *beNDMWStatusCtrlBit_getMeta(){
 if(!beNDMWStatusCtrlBit_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlBit_meta)[0x24/4]&4)) beNDMWStatusCtrlBit_registerNow();
 return beNDMWStatusCtrlBit_meta;
}
}
#pragma pop
