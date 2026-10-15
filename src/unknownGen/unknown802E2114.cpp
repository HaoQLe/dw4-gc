#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beCameraCtrlInfoRamShake_registerNow();
extern void *beCameraCtrlInfoRamShake_meta;
}
extern "C" {
void *beCameraCtrlInfoRamShake_create(void *object){
 beCameraCtrlInfoRamShake_registerNow();
 return meta_createInstance(beCameraCtrlInfoRamShake_meta,object);
}
void *beCameraCtrlInfoRamShake_getMeta(){
 if(!beCameraCtrlInfoRamShake_meta || !(reinterpret_cast<unsigned int *>(beCameraCtrlInfoRamShake_meta)[0x24/4]&4)) beCameraCtrlInfoRamShake_registerNow();
 return beCameraCtrlInfoRamShake_meta;
}
}
#pragma pop
