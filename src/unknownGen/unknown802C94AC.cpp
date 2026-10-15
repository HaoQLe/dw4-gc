#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlInfoDataSeq_arkRegister();
extern void *beModelCtrlInfoDataSeq_meta;
}
extern "C" {
void *beModelCtrlInfoDataSeq_getMeta(){
 if(!beModelCtrlInfoDataSeq_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoDataSeq_meta)[0x24/4]&4)) beModelCtrlInfoDataSeq_arkRegister();
 return beModelCtrlInfoDataSeq_meta;
}
}
#pragma pop
