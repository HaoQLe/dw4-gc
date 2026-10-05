#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805347D0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802BA5FC(){
 if(!lbl_805347D0) lbl_805347D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805347D0;
}
}
#pragma pop
