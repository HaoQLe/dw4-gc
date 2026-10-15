#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beDataObjBoolList_arkRegister();
extern void *beDataObjBoolList_meta;
}
extern "C" {
void *beDataObjBoolList_create(void *object){
 beDataObjBoolList_arkRegister();
 return meta_createInstance(beDataObjBoolList_meta,object);
}
void *beDataObjBoolList_getMeta(){
 if(!beDataObjBoolList_meta || !(reinterpret_cast<unsigned int *>(beDataObjBoolList_meta)[0x24/4]&4)) beDataObjBoolList_arkRegister();
 return beDataObjBoolList_meta;
}
}
#pragma pop
