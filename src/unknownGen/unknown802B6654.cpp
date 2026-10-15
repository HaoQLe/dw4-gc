#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTextureCtrlData_registerNow();
extern void *beTextureCtrlData_meta;
}
extern "C" {
void *beTextureCtrlData_getMeta(){
 if(!beTextureCtrlData_meta || !(reinterpret_cast<unsigned int *>(beTextureCtrlData_meta)[0x24/4]&4)) beTextureCtrlData_registerNow();
 return beTextureCtrlData_meta;
}
}
#pragma pop
