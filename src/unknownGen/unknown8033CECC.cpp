#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWLoadIntf2Diffselect_arkRegister();
extern void *beNDMWLoadIntf2Diffselect_meta;
}
extern "C" {
void *beNDMWLoadIntf2Diffselect_create(void *object){
 beNDMWLoadIntf2Diffselect_arkRegister();
 return meta_createInstance(beNDMWLoadIntf2Diffselect_meta,object);
}
void *beNDMWLoadIntf2Diffselect_getMeta(){
 if(!beNDMWLoadIntf2Diffselect_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2Diffselect_meta)[0x24/4]&4)) beNDMWLoadIntf2Diffselect_arkRegister();
 return beNDMWLoadIntf2Diffselect_meta;
}
}
#pragma pop
