#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801BB800();
extern void *lbl_805621F4;
extern void *lbl_80564DAC;
}
extern "C" {
void *fn_801BB5D0(){
 if(!lbl_80564DAC) lbl_80564DAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DAC;
}
void *fn_801BB60C(){
 if(!lbl_80564DAC || !(reinterpret_cast<unsigned int *>(lbl_80564DAC)[0x24/4]&4)) fn_801BB800();
 return lbl_80564DAC;
}
}
#pragma pop
