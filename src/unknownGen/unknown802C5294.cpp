#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_80534BF0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C5294(){
 if(!lbl_80534BF0) lbl_80534BF0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534BF0;
}
}
#pragma pop
