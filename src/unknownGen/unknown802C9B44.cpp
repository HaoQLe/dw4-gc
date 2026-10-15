#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoDataAIH_arkRegister();
extern void *beModelCtrlInfoDataAIH_meta;
}
extern "C" {
void *beModelCtrlInfoDataAIH_getMeta(){
 if(!beModelCtrlInfoDataAIH_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoDataAIH_meta)[0x24/4]&4)) beModelCtrlInfoDataAIH_arkRegister();
 return beModelCtrlInfoDataAIH_meta;
}
}
#pragma pop
