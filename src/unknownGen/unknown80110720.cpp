#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void igMousePosObserver_arkRegister();
extern void *igMousePosObserver_meta;
}
extern "C" {
void *igMousePosObserver_create(void *object){
 igMousePosObserver_arkRegister();
 return meta_createInstance(igMousePosObserver_meta,object);
}
void *igMousePosObserver_getMeta(){
 if(!igMousePosObserver_meta || !(reinterpret_cast<unsigned int *>(igMousePosObserver_meta)[0x24/4]&4)) igMousePosObserver_arkRegister();
 return igMousePosObserver_meta;
}
}
#pragma pop
