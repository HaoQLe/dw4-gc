#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWLoadIntf2DataSelIntf_registerNow();
extern void *beNDMWLoadIntf2DataSelIntf_meta;
}
extern "C" {
void *beNDMWLoadIntf2DataSelIntf_create(void *object){
 beNDMWLoadIntf2DataSelIntf_registerNow();
 return meta_createInstance(beNDMWLoadIntf2DataSelIntf_meta,object);
}
void *beNDMWLoadIntf2DataSelIntf_getMeta(){
 if(!beNDMWLoadIntf2DataSelIntf_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2DataSelIntf_meta)[0x24/4]&4)) beNDMWLoadIntf2DataSelIntf_registerNow();
 return beNDMWLoadIntf2DataSelIntf_meta;
}
}
#pragma pop
