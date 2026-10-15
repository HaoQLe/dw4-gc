#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTextureCtrlInfoList_registerNow();
extern void *beTextureCtrlInfoList_meta;
}
extern "C" {
void *beTextureCtrlInfoList_getMeta(){
 if(!beTextureCtrlInfoList_meta || !(reinterpret_cast<unsigned int *>(beTextureCtrlInfoList_meta)[0x24/4]&4)) beTextureCtrlInfoList_registerNow();
 return beTextureCtrlInfoList_meta;
}
}
#pragma pop
