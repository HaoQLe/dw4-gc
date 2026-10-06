#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802C8520();
extern void *lbl_80534DC0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C840C(){
 if(!lbl_80534DC0) lbl_80534DC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534DC0;
}
void *fn_802C8460(){
 if(!lbl_80534DC0 || !(reinterpret_cast<unsigned int *>(lbl_80534DC0)[0x24/4]&4)) fn_802C8520();
 return lbl_80534DC0;
}
}
#pragma pop
