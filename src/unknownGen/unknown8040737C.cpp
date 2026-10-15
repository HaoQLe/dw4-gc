#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void igFlyMode_registerNow();
extern void *igFlyMode_meta;
}
extern "C" {
void *igFlyMode_create(void *object){
 igFlyMode_registerNow();
 return meta_createInstance(igFlyMode_meta,object);
}
void *igFlyMode_getMeta(){
 if(!igFlyMode_meta || !(reinterpret_cast<unsigned int *>(igFlyMode_meta)[0x24/4]&4)) igFlyMode_registerNow();
 return igFlyMode_meta;
}
}
#pragma pop
