#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoList_registerNow();
extern void *beModelCtrlInfoList_meta;
}
extern "C" {
void *beModelCtrlInfoList_getMeta(){
 if(!beModelCtrlInfoList_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoList_meta)[0x24/4]&4)) beModelCtrlInfoList_registerNow();
 return beModelCtrlInfoList_meta;
}
}
#pragma pop
