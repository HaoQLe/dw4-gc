#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802BC864();
extern void *lbl_80534858;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802BC77C(){
 if(!lbl_80534858) lbl_80534858=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534858;
}
void *fn_802BC7D0(){
 if(!lbl_80534858 || !(reinterpret_cast<unsigned int *>(lbl_80534858)[0x24/4]&4)) fn_802BC864();
 return lbl_80534858;
}
}
#pragma pop
