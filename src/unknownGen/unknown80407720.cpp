#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void igCameraMode_arkRegister();
extern void *igCameraMode_meta;
}
extern "C" {
void *igCameraMode_create(void *object){
 igCameraMode_arkRegister();
 return meta_createInstance(igCameraMode_meta,object);
}
void *igCameraMode_getMeta(){
 if(!igCameraMode_meta || !(reinterpret_cast<unsigned int *>(igCameraMode_meta)[0x24/4]&4)) igCameraMode_arkRegister();
 return igCameraMode_meta;
}
}
#pragma pop
