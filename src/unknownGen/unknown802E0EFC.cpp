#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beChangePosTransformInfo_registerNow();
extern void *beChangePosTransformInfo_meta;
}
extern "C" {
void *beChangePosTransformInfo_getMeta(){
 if(!beChangePosTransformInfo_meta || !(reinterpret_cast<unsigned int *>(beChangePosTransformInfo_meta)[0x24/4]&4)) beChangePosTransformInfo_registerNow();
 return beChangePosTransformInfo_meta;
}
}
#pragma pop
