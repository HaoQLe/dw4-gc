#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beDataObjString_registerNow();
extern void *beDataObjString_meta;
}
extern "C" {
void *beDataObjString_create(void *object){
 beDataObjString_registerNow();
 return meta_createInstance(beDataObjString_meta,object);
}
void *beDataObjString_getMeta(){
 if(!beDataObjString_meta || !(reinterpret_cast<unsigned int *>(beDataObjString_meta)[0x24/4]&4)) beDataObjString_registerNow();
 return beDataObjString_meta;
}
}
#pragma pop
