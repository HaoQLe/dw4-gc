#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801C2744();
extern void *lbl_805621F4;
extern void *lbl_80564FF4;
}
extern "C" {
void *fn_801C2594(){
 if(!lbl_80564FF4) lbl_80564FF4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564FF4;
}
void *fn_801C25D0(){
 if(!lbl_80564FF4 || !(reinterpret_cast<unsigned int *>(lbl_80564FF4)[0x24/4]&4)) fn_801C2744();
 return lbl_80564FF4;
}
}
#pragma pop
