#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMatCtrlInfo_registerNow();
extern void *beMatCtrlInfo_meta;
}
extern "C" {
void *beMatCtrlInfo_getMeta(){
 if(!beMatCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beMatCtrlInfo_meta)[0x24/4]&4)) beMatCtrlInfo_registerNow();
 return beMatCtrlInfo_meta;
}
}
#pragma pop
