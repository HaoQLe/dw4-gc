#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMeterCtrlOneData_registerNow();
extern void *beMeterCtrlOneData_meta;
}
extern "C" {
void *beMeterCtrlOneData_getMeta(){
 if(!beMeterCtrlOneData_meta || !(reinterpret_cast<unsigned int *>(beMeterCtrlOneData_meta)[0x24/4]&4)) beMeterCtrlOneData_registerNow();
 return beMeterCtrlOneData_meta;
}
}
#pragma pop
