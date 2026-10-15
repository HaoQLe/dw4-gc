#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWLoadIntf2MakeChr_arkRegister();
extern void *beNDMWLoadIntf2MakeChr_meta;
}
extern "C" {
void *beNDMWLoadIntf2MakeChr_create(void *object){
 beNDMWLoadIntf2MakeChr_arkRegister();
 return meta_createInstance(beNDMWLoadIntf2MakeChr_meta,object);
}
void *beNDMWLoadIntf2MakeChr_getMeta(){
 if(!beNDMWLoadIntf2MakeChr_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2MakeChr_meta)[0x24/4]&4)) beNDMWLoadIntf2MakeChr_arkRegister();
 return beNDMWLoadIntf2MakeChr_meta;
}
}
#pragma pop
