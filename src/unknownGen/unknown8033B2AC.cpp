#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_80536230;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033B2AC(){
 if(!lbl_80536230) lbl_80536230=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536230;
}
}
#pragma pop
