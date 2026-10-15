#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beDataObjStringList_arkRegister();
extern void *beDataObjStringList_meta;
}
extern "C" {
void *beDataObjStringList_create(void *object){
 beDataObjStringList_arkRegister();
 return meta_createInstance(beDataObjStringList_meta,object);
}
void *beDataObjStringList_getMeta(){
 if(!beDataObjStringList_meta || !(reinterpret_cast<unsigned int *>(beDataObjStringList_meta)[0x24/4]&4)) beDataObjStringList_arkRegister();
 return beDataObjStringList_meta;
}
}
#pragma pop
