#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusCtrlSendBit_registerNow();
extern void *beNDMWStatusCtrlSendBit_meta;
}
extern "C" {
void *beNDMWStatusCtrlSendBit_create(void *object){
 beNDMWStatusCtrlSendBit_registerNow();
 return meta_createInstance(beNDMWStatusCtrlSendBit_meta,object);
}
void *beNDMWStatusCtrlSendBit_getMeta(){
 if(!beNDMWStatusCtrlSendBit_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlSendBit_meta)[0x24/4]&4)) beNDMWStatusCtrlSendBit_registerNow();
 return beNDMWStatusCtrlSendBit_meta;
}
}
#pragma pop
