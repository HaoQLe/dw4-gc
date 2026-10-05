#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_80534A6C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C10C8(){
 if(!lbl_80534A6C) lbl_80534A6C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534A6C;
}
}
#pragma pop
