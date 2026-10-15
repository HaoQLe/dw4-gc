#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void igActorManager_registerNow();
extern void *igActorManager_meta;
}
extern "C" {
void *igActorManager_create(void *object){
 igActorManager_registerNow();
 return meta_createInstance(igActorManager_meta,object);
}
void *igActorManager_getMeta(){
 if(!igActorManager_meta || !(reinterpret_cast<unsigned int *>(igActorManager_meta)[0x24/4]&4)) igActorManager_registerNow();
 return igActorManager_meta;
}
}
#pragma pop
