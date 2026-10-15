#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beDataObjBool_registerNow();
extern void *beDataObjBool_meta;
}
extern "C" {
void *beDataObjBool_create(void *object){
 beDataObjBool_registerNow();
 return meta_createInstance(beDataObjBool_meta,object);
}
void *beDataObjBool_getMeta(){
 if(!beDataObjBool_meta || !(reinterpret_cast<unsigned int *>(beDataObjBool_meta)[0x24/4]&4)) beDataObjBool_registerNow();
 return beDataObjBool_meta;
}
}
#pragma pop
