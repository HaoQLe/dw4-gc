#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802B5BB8();
extern void *lbl_80534648;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B5AA4(){
 if(!lbl_80534648) lbl_80534648=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534648;
}
void *fn_802B5AF8(){
 if(!lbl_80534648 || !(reinterpret_cast<unsigned int *>(lbl_80534648)[0x24/4]&4)) fn_802B5BB8();
 return lbl_80534648;
}
}
#pragma pop
