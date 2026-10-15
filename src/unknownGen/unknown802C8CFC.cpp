#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoRamData_registerNow();
extern void *beModelCtrlInfoRamData_meta;
}
extern "C" {
void *beModelCtrlInfoRamData_getMeta(){
 if(!beModelCtrlInfoRamData_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoRamData_meta)[0x24/4]&4)) beModelCtrlInfoRamData_registerNow();
 return beModelCtrlInfoRamData_meta;
}
}
#pragma pop
