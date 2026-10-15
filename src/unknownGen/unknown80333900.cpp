#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusCtrl00_registerNow();
extern void *beNDMWStatusCtrl00_meta;
}
extern "C" {
void *beNDMWStatusCtrl00_create(void *object){
 beNDMWStatusCtrl00_registerNow();
 return meta_createInstance(beNDMWStatusCtrl00_meta,object);
}
void *beNDMWStatusCtrl00_getMeta(){
 if(!beNDMWStatusCtrl00_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrl00_meta)[0x24/4]&4)) beNDMWStatusCtrl00_registerNow();
 return beNDMWStatusCtrl00_meta;
}
}
#pragma pop
