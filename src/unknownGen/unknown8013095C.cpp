#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80130BA0();
extern void *lbl_80563ADC;
}
extern "C" {
void *fn_8013095C(){
 if(!lbl_80563ADC || !(reinterpret_cast<unsigned int *>(lbl_80563ADC)[0x24/4]&4)) fn_80130BA0();
 return lbl_80563ADC;
}
}
#pragma pop
