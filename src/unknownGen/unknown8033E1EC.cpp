#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWLoadIntf2CtrlData_registerNow();
extern void *beNDMWLoadIntf2CtrlData_meta;
}
extern "C" {
void *beNDMWLoadIntf2CtrlData_create(void *object){
 beNDMWLoadIntf2CtrlData_registerNow();
 return meta_createInstance(beNDMWLoadIntf2CtrlData_meta,object);
}
void *beNDMWLoadIntf2CtrlData_getMeta(){
 if(!beNDMWLoadIntf2CtrlData_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2CtrlData_meta)[0x24/4]&4)) beNDMWLoadIntf2CtrlData_registerNow();
 return beNDMWLoadIntf2CtrlData_meta;
}
}
#pragma pop
