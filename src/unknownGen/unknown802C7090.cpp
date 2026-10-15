#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beModelCtrlInfoRideOn4_registerNow();
extern void *beModelCtrlInfoRideOn4_meta;
}
extern "C" {
void *beModelCtrlInfoRideOn4_create(void *object){
 beModelCtrlInfoRideOn4_registerNow();
 return meta_createInstance(beModelCtrlInfoRideOn4_meta,object);
}
void *beModelCtrlInfoRideOn4_getMeta(){
 if(!beModelCtrlInfoRideOn4_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoRideOn4_meta)[0x24/4]&4)) beModelCtrlInfoRideOn4_registerNow();
 return beModelCtrlInfoRideOn4_meta;
}
}
#pragma pop
