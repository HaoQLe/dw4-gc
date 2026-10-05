#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801C675C();
extern void *lbl_805621F4;
extern void *lbl_80565230;
}
extern "C" {
void *fn_801C6180(){
 if(!lbl_80565230) lbl_80565230=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565230;
}
void *fn_801C61BC(){
 if(!lbl_80565230 || !(reinterpret_cast<unsigned int *>(lbl_80565230)[0x24/4]&4)) fn_801C675C();
 return lbl_80565230;
}
}
#pragma pop
