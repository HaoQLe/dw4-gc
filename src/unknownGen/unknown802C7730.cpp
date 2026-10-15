#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beModelCtrlInfoRideOn2_arkRegister();
extern void *beModelCtrlInfoRideOn2_meta;
}
extern "C" {
void *beModelCtrlInfoRideOn2_create(void *object){
 beModelCtrlInfoRideOn2_arkRegister();
 return meta_createInstance(beModelCtrlInfoRideOn2_meta,object);
}
void *beModelCtrlInfoRideOn2_getMeta(){
 if(!beModelCtrlInfoRideOn2_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoRideOn2_meta)[0x24/4]&4)) beModelCtrlInfoRideOn2_arkRegister();
 return beModelCtrlInfoRideOn2_meta;
}
}
#pragma pop
