#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCameraBoxData_arkRegister();
extern void *beCameraBoxData_meta;
}
extern "C" {
void *beCameraBoxData_getMeta(){
 if(!beCameraBoxData_meta || !(reinterpret_cast<unsigned int *>(beCameraBoxData_meta)[0x24/4]&4)) beCameraBoxData_arkRegister();
 return beCameraBoxData_meta;
}
}
#pragma pop
