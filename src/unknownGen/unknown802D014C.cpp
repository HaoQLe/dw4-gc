#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMatCtrlInfoRam_arkRegister();
extern void *beMatCtrlInfoRam_meta;
}
extern "C" {
void *beMatCtrlInfoRam_getMeta(){
 if(!beMatCtrlInfoRam_meta || !(reinterpret_cast<unsigned int *>(beMatCtrlInfoRam_meta)[0x24/4]&4)) beMatCtrlInfoRam_arkRegister();
 return beMatCtrlInfoRam_meta;
}
}
#pragma pop
