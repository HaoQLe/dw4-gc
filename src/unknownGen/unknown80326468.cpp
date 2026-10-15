#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWTitle2CtrlData_registerNow();
extern void *beNDMWTitle2CtrlData_meta;
}
extern "C" {
void *beNDMWTitle2CtrlData_create(void *object){
 beNDMWTitle2CtrlData_registerNow();
 return meta_createInstance(beNDMWTitle2CtrlData_meta,object);
}
void *beNDMWTitle2CtrlData_getMeta(){
 if(!beNDMWTitle2CtrlData_meta || !(reinterpret_cast<unsigned int *>(beNDMWTitle2CtrlData_meta)[0x24/4]&4)) beNDMWTitle2CtrlData_registerNow();
 return beNDMWTitle2CtrlData_meta;
}
}
#pragma pop
