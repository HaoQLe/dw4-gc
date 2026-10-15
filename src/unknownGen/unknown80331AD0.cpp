#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusCtrlFlag_registerNow();
extern void *beNDMWStatusCtrlFlag_meta;
}
extern "C" {
void *beNDMWStatusCtrlFlag_create(void *object){
 beNDMWStatusCtrlFlag_registerNow();
 return meta_createInstance(beNDMWStatusCtrlFlag_meta,object);
}
void *beNDMWStatusCtrlFlag_getMeta(){
 if(!beNDMWStatusCtrlFlag_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlFlag_meta)[0x24/4]&4)) beNDMWStatusCtrlFlag_registerNow();
 return beNDMWStatusCtrlFlag_meta;
}
}
#pragma pop
