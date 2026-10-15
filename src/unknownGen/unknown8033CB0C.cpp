#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWLoadIntf2SelSlot_registerNow();
extern void *beNDMWLoadIntf2SelSlot_meta;
}
extern "C" {
void *beNDMWLoadIntf2SelSlot_create(void *object){
 beNDMWLoadIntf2SelSlot_registerNow();
 return meta_createInstance(beNDMWLoadIntf2SelSlot_meta,object);
}
void *beNDMWLoadIntf2SelSlot_getMeta(){
 if(!beNDMWLoadIntf2SelSlot_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2SelSlot_meta)[0x24/4]&4)) beNDMWLoadIntf2SelSlot_registerNow();
 return beNDMWLoadIntf2SelSlot_meta;
}
}
#pragma pop
