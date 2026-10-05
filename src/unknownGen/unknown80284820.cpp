#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_80515C7C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80284820(){
 if(!lbl_80515C7C) lbl_80515C7C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515C7C;
}
}
#pragma pop
