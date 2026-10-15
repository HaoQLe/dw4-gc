#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beDataObjString_arkRegister();
extern void *beDataObjString_meta;
}
extern "C" {
void *beDataObjString_create(void *object){
 beDataObjString_arkRegister();
 return meta_createInstance(beDataObjString_meta,object);
}
void *beDataObjString_getMeta(){
 if(!beDataObjString_meta || !(reinterpret_cast<unsigned int *>(beDataObjString_meta)[0x24/4]&4)) beDataObjString_arkRegister();
 return beDataObjString_meta;
}
}
#pragma pop
