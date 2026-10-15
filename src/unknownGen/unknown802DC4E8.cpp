#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beDataObjObjectList_registerNow();
extern void *beDataObjObjectList_meta;
}
extern "C" {
void *beDataObjObjectList_create(void *object){
 beDataObjObjectList_registerNow();
 return meta_createInstance(beDataObjObjectList_meta,object);
}
void *beDataObjObjectList_getMeta(){
 if(!beDataObjObjectList_meta || !(reinterpret_cast<unsigned int *>(beDataObjObjectList_meta)[0x24/4]&4)) beDataObjObjectList_registerNow();
 return beDataObjObjectList_meta;
}
}
#pragma pop
