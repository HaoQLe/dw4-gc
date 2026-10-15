#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusCtrlSkill_registerNow();
extern void *beNDMWStatusCtrlSkill_meta;
}
extern "C" {
void *beNDMWStatusCtrlSkill_create(void *object){
 beNDMWStatusCtrlSkill_registerNow();
 return meta_createInstance(beNDMWStatusCtrlSkill_meta,object);
}
void *beNDMWStatusCtrlSkill_getMeta(){
 if(!beNDMWStatusCtrlSkill_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlSkill_meta)[0x24/4]&4)) beNDMWStatusCtrlSkill_registerNow();
 return beNDMWStatusCtrlSkill_meta;
}
}
#pragma pop
