#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80138920();
extern void *lbl_80563DAC;
}
extern "C" {
void *fn_8013872C(){
 if(!lbl_80563DAC || !(reinterpret_cast<unsigned int *>(lbl_80563DAC)[0x24/4]&4)) fn_80138920();
 return lbl_80563DAC;
}
}
#pragma pop
