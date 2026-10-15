#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beModelCtrlInfoRideOn3_arkRegister();
extern void *beModelCtrlInfoRideOn3_meta;
}
extern "C" {
void *beModelCtrlInfoRideOn3_create(void *object){
 beModelCtrlInfoRideOn3_arkRegister();
 return meta_createInstance(beModelCtrlInfoRideOn3_meta,object);
}
void *beModelCtrlInfoRideOn3_getMeta(){
 if(!beModelCtrlInfoRideOn3_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoRideOn3_meta)[0x24/4]&4)) beModelCtrlInfoRideOn3_arkRegister();
 return beModelCtrlInfoRideOn3_meta;
}
}
#pragma pop
