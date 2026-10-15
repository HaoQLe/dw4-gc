#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSwitchCtrlInfo_arkRegister();
extern void *beSwitchCtrlInfo_meta;
}
extern "C" {
void *beSwitchCtrlInfo_getMeta(){
 if(!beSwitchCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beSwitchCtrlInfo_meta)[0x24/4]&4)) beSwitchCtrlInfo_arkRegister();
 return beSwitchCtrlInfo_meta;
}
}
#pragma pop
