#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_800AC8A8();
extern void *lbl_805621F4;
extern void *lbl_80562438;
}
extern "C" {
void *fn_800AC594(){
 if(!lbl_80562438) lbl_80562438=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562438;
}
void *fn_800AC5D0(){
 if(!lbl_80562438 || !(reinterpret_cast<unsigned int *>(lbl_80562438)[0x24/4]&4)) fn_800AC8A8();
 return lbl_80562438;
}
}
#pragma pop
