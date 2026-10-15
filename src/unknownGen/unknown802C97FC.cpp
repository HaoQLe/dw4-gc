#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoDataHit_arkRegister();
extern void *beModelCtrlInfoDataHit_meta;
}
extern "C" {
void *beModelCtrlInfoDataHit_getMeta(){
 if(!beModelCtrlInfoDataHit_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoDataHit_meta)[0x24/4]&4)) beModelCtrlInfoDataHit_arkRegister();
 return beModelCtrlInfoDataHit_meta;
}
}
#pragma pop
