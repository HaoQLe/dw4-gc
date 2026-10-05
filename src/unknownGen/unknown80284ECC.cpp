#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_80515C90;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80284ECC(){
 if(!lbl_80515C90) lbl_80515C90=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515C90;
}
}
#pragma pop
