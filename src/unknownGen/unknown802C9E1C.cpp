#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoDataAIM_registerNow();
extern void *beModelCtrlInfoDataAIM_meta;
}
extern "C" {
void *beModelCtrlInfoDataAIM_getMeta(){
 if(!beModelCtrlInfoDataAIM_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoDataAIM_meta)[0x24/4]&4)) beModelCtrlInfoDataAIM_registerNow();
 return beModelCtrlInfoDataAIM_meta;
}
}
#pragma pop
